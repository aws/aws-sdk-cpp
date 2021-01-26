/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotdeviceadvisor/model/TestCase.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   * <p>Gets the test case category.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/TestCaseCategory">AWS
   * API Reference</a></p>
   */
  class AWS_IOTDEVICEADVISOR_API TestCaseCategory
  {
  public:
    TestCaseCategory();
    TestCaseCategory(Aws::Utils::Json::JsonView jsonValue);
    TestCaseCategory& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lists all the tests name in the specified category.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Lists all the tests name in the specified category.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Lists all the tests name in the specified category.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Lists all the tests name in the specified category.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Lists all the tests name in the specified category.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Lists all the tests name in the specified category.</p>
     */
    inline TestCaseCategory& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Lists all the tests name in the specified category.</p>
     */
    inline TestCaseCategory& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Lists all the tests name in the specified category.</p>
     */
    inline TestCaseCategory& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Lists all the tests in the specified category.</p>
     */
    inline const Aws::Vector<TestCase>& GetTests() const{ return m_tests; }

    /**
     * <p>Lists all the tests in the specified category.</p>
     */
    inline bool TestsHasBeenSet() const { return m_testsHasBeenSet; }

    /**
     * <p>Lists all the tests in the specified category.</p>
     */
    inline void SetTests(const Aws::Vector<TestCase>& value) { m_testsHasBeenSet = true; m_tests = value; }

    /**
     * <p>Lists all the tests in the specified category.</p>
     */
    inline void SetTests(Aws::Vector<TestCase>&& value) { m_testsHasBeenSet = true; m_tests = std::move(value); }

    /**
     * <p>Lists all the tests in the specified category.</p>
     */
    inline TestCaseCategory& WithTests(const Aws::Vector<TestCase>& value) { SetTests(value); return *this;}

    /**
     * <p>Lists all the tests in the specified category.</p>
     */
    inline TestCaseCategory& WithTests(Aws::Vector<TestCase>&& value) { SetTests(std::move(value)); return *this;}

    /**
     * <p>Lists all the tests in the specified category.</p>
     */
    inline TestCaseCategory& AddTests(const TestCase& value) { m_testsHasBeenSet = true; m_tests.push_back(value); return *this; }

    /**
     * <p>Lists all the tests in the specified category.</p>
     */
    inline TestCaseCategory& AddTests(TestCase&& value) { m_testsHasBeenSet = true; m_tests.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<TestCase> m_tests;
    bool m_testsHasBeenSet;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
