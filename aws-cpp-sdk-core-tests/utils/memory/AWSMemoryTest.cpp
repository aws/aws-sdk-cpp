/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/core/utils/memory/AWSMemory.h>

const char ALLOCATION_TAG[] = "AWSMemoryTestTag";

struct A { virtual ~A() = default; };
struct B { virtual ~B() = default; };
struct C : A, B { };

#if !defined(_MSC_VER) || defined(_CPPRTTI)
TEST(AWSMemory, DeleteViaFirstInterface)
{
    A* a = Aws::New<C>(ALLOCATION_TAG);
    Aws::Delete(a);
}

TEST(AWSMemory, DeleteViaSecondInterface)
{
    C* c = Aws::New<C>(ALLOCATION_TAG);
    B* b = c;
    A* a = c;
    ASSERT_EQ(c, static_cast<void*>(a));
    ASSERT_NE(c, static_cast<void*>(b));
    Aws::Delete(b);
}
#endif


/* static UniquePtr destruction order test begin*/
struct TestDummy
{
    enum class Status
    {
        NOT_SET = 0,
        INITIALIZED,
        DESTRUCTED
    };

    int32_t* m_buffer = nullptr;

    static Status status;
    TestDummy()
    {
        if (status != Status::NOT_SET)
        {
            std::cerr << "Abnormal status " << (size_t) status << ", status NOT_SET(0) is expected on the first (and only) instance creation";
            std::terminate();
        }
        m_buffer = new int32_t[100];
        status = Status::INITIALIZED;
    }

    virtual ~TestDummy()
    {
        if (status != Status::INITIALIZED)
        {
            std::cerr << "Abnormal status " << (size_t) status << ", status INITIALIZED(1) is expected on the first (and only) instance destruction";
            std::terminate();
        }
        delete[] m_buffer;
        status = Status::DESTRUCTED;
    }
};

// The static objects are destructed in the reverse order of construction
// Objects defined in the same compilation unit will be constructed in the order of definition
struct StaticUniquePtrDtorOrderTestWrapper;
static Aws::UniquePtr<StaticUniquePtrDtorOrderTestWrapper> s_testWrapperPtr(nullptr);

// In this test, we want s_TestDummyPtr to be destructed first and then inspect its value and state _after_ by using another static helper that is still alive
// static Aws::UniquePtr<TestDummy> s_TestDummyPtr(nullptr); <- this would result in double UniquePtr destruction in Release because of compiler optimization removing the ptr nullifying.
static Aws::UniquePtr<TestDummy, Aws::StaticUniquePtrDeleter<TestDummy> >
        s_TestDummyPtr(nullptr, Aws::StaticUniquePtrDeleter<TestDummy>(nullptr));
TestDummy::Status TestDummy::status = TestDummy::Status::NOT_SET;

struct StaticUniquePtrDtorOrderTestWrapper
{
    virtual ~StaticUniquePtrDtorOrderTestWrapper()
    {
        // this class' variable has to be defined _before_ s_TestDummyPtr, so ~s_TestDummyPtr() had to be already called at this point
        if (TestDummy::status != TestDummy::Status::DESTRUCTED ||
                s_TestDummyPtr.get() != nullptr)
        {
            std::cerr << "Static unique ptr is expected to be already destructed AND set to nullptr at this stage\n";
            std::cerr << "Current status " << (size_t) TestDummy::status << ", ptr value " << s_TestDummyPtr.get() << "\n";
            // (the stage after main() when static variables are destructed and s_TestDummyPtr had to be already destructed)
            std::terminate(); // too late to rely on gtest to report failure
        }
    }
};

static bool staticTestIsRun = false;

TEST(AWSMemory, StaticUniquePtrDtorOrder)
{
    if(staticTestIsRun) {
        GTEST_SKIP() << "Skipping the repeat of StaticUniquePtrDtorOrder test as it cannot be repeated.";
    } else {
        staticTestIsRun = true;
    }

    // s_TestDummyPtr is already defined (to nullptr above) and defined _after_ s_testWrapperPtr, let's initialize it with a dummy class
    s_TestDummyPtr = Aws::MakeUniqueWithDeleter<TestDummy, Aws::StaticUniquePtrDeleter<TestDummy> >(
            ALLOCATION_TAG, Aws::StaticUniquePtrDeleter<TestDummy>(&s_TestDummyPtr));
    AWS_UNREFERENCED_PARAM(s_TestDummyPtr);

    // s_testWrapperPtr is already defined (to nullptr above) and defined _before_ s_TestDummyPtr, let's initialize it.
    // It has to be a ptr type due to declaration ordering (d-tor of this class contains an actual test body).
    s_testWrapperPtr = Aws::MakeUnique<StaticUniquePtrDtorOrderTestWrapper>(ALLOCATION_TAG);
    AWS_UNREFERENCED_PARAM(s_testWrapperPtr);
}
/* static UniquePtr destruction order test end*/
