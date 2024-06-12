/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestSuiteLatestVersion.h>
#include <aws/apptest/model/TestSuiteLifecycle.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apptest/model/TestCases.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apptest/model/Step.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppTest
{
namespace Model
{
  class GetTestSuiteResult
  {
  public:
    AWS_APPTEST_API GetTestSuiteResult();
    AWS_APPTEST_API GetTestSuiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API GetTestSuiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response ID of the test suite.</p>
     */
    inline const Aws::String& GetTestSuiteId() const{ return m_testSuiteId; }
    inline void SetTestSuiteId(const Aws::String& value) { m_testSuiteId = value; }
    inline void SetTestSuiteId(Aws::String&& value) { m_testSuiteId = std::move(value); }
    inline void SetTestSuiteId(const char* value) { m_testSuiteId.assign(value); }
    inline GetTestSuiteResult& WithTestSuiteId(const Aws::String& value) { SetTestSuiteId(value); return *this;}
    inline GetTestSuiteResult& WithTestSuiteId(Aws::String&& value) { SetTestSuiteId(std::move(value)); return *this;}
    inline GetTestSuiteResult& WithTestSuiteId(const char* value) { SetTestSuiteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the test suite.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetTestSuiteResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetTestSuiteResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetTestSuiteResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the test suite.</p>
     */
    inline const TestSuiteLatestVersion& GetLatestVersion() const{ return m_latestVersion; }
    inline void SetLatestVersion(const TestSuiteLatestVersion& value) { m_latestVersion = value; }
    inline void SetLatestVersion(TestSuiteLatestVersion&& value) { m_latestVersion = std::move(value); }
    inline GetTestSuiteResult& WithLatestVersion(const TestSuiteLatestVersion& value) { SetLatestVersion(value); return *this;}
    inline GetTestSuiteResult& WithLatestVersion(TestSuiteLatestVersion&& value) { SetLatestVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the test suite.</p>
     */
    inline int GetTestSuiteVersion() const{ return m_testSuiteVersion; }
    inline void SetTestSuiteVersion(int value) { m_testSuiteVersion = value; }
    inline GetTestSuiteResult& WithTestSuiteVersion(int value) { SetTestSuiteVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test suite.</p>
     */
    inline const TestSuiteLifecycle& GetStatus() const{ return m_status; }
    inline void SetStatus(const TestSuiteLifecycle& value) { m_status = value; }
    inline void SetStatus(TestSuiteLifecycle&& value) { m_status = std::move(value); }
    inline GetTestSuiteResult& WithStatus(const TestSuiteLifecycle& value) { SetStatus(value); return *this;}
    inline GetTestSuiteResult& WithStatus(TestSuiteLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test suite.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetTestSuiteResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetTestSuiteResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetTestSuiteResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetTestSuiteArn() const{ return m_testSuiteArn; }
    inline void SetTestSuiteArn(const Aws::String& value) { m_testSuiteArn = value; }
    inline void SetTestSuiteArn(Aws::String&& value) { m_testSuiteArn = std::move(value); }
    inline void SetTestSuiteArn(const char* value) { m_testSuiteArn.assign(value); }
    inline GetTestSuiteResult& WithTestSuiteArn(const Aws::String& value) { SetTestSuiteArn(value); return *this;}
    inline GetTestSuiteResult& WithTestSuiteArn(Aws::String&& value) { SetTestSuiteArn(std::move(value)); return *this;}
    inline GetTestSuiteResult& WithTestSuiteArn(const char* value) { SetTestSuiteArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the test suite.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetTestSuiteResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetTestSuiteResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last update time of the test suite.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTime = std::move(value); }
    inline GetTestSuiteResult& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline GetTestSuiteResult& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test suite.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetTestSuiteResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetTestSuiteResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetTestSuiteResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The before steps of the test suite.</p>
     */
    inline const Aws::Vector<Step>& GetBeforeSteps() const{ return m_beforeSteps; }
    inline void SetBeforeSteps(const Aws::Vector<Step>& value) { m_beforeSteps = value; }
    inline void SetBeforeSteps(Aws::Vector<Step>&& value) { m_beforeSteps = std::move(value); }
    inline GetTestSuiteResult& WithBeforeSteps(const Aws::Vector<Step>& value) { SetBeforeSteps(value); return *this;}
    inline GetTestSuiteResult& WithBeforeSteps(Aws::Vector<Step>&& value) { SetBeforeSteps(std::move(value)); return *this;}
    inline GetTestSuiteResult& AddBeforeSteps(const Step& value) { m_beforeSteps.push_back(value); return *this; }
    inline GetTestSuiteResult& AddBeforeSteps(Step&& value) { m_beforeSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The after steps of the test suite. </p>
     */
    inline const Aws::Vector<Step>& GetAfterSteps() const{ return m_afterSteps; }
    inline void SetAfterSteps(const Aws::Vector<Step>& value) { m_afterSteps = value; }
    inline void SetAfterSteps(Aws::Vector<Step>&& value) { m_afterSteps = std::move(value); }
    inline GetTestSuiteResult& WithAfterSteps(const Aws::Vector<Step>& value) { SetAfterSteps(value); return *this;}
    inline GetTestSuiteResult& WithAfterSteps(Aws::Vector<Step>&& value) { SetAfterSteps(std::move(value)); return *this;}
    inline GetTestSuiteResult& AddAfterSteps(const Step& value) { m_afterSteps.push_back(value); return *this; }
    inline GetTestSuiteResult& AddAfterSteps(Step&& value) { m_afterSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The test cases of the test suite.</p>
     */
    inline const TestCases& GetTestCases() const{ return m_testCases; }
    inline void SetTestCases(const TestCases& value) { m_testCases = value; }
    inline void SetTestCases(TestCases&& value) { m_testCases = std::move(value); }
    inline GetTestSuiteResult& WithTestCases(const TestCases& value) { SetTestCases(value); return *this;}
    inline GetTestSuiteResult& WithTestCases(TestCases&& value) { SetTestCases(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of the test suite.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetTestSuiteResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetTestSuiteResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetTestSuiteResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetTestSuiteResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTestSuiteResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTestSuiteResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetTestSuiteResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTestSuiteResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTestSuiteResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTestSuiteResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTestSuiteResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTestSuiteResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testSuiteId;

    Aws::String m_name;

    TestSuiteLatestVersion m_latestVersion;

    int m_testSuiteVersion;

    TestSuiteLifecycle m_status;

    Aws::String m_statusReason;

    Aws::String m_testSuiteArn;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastUpdateTime;

    Aws::String m_description;

    Aws::Vector<Step> m_beforeSteps;

    Aws::Vector<Step> m_afterSteps;

    TestCases m_testCases;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
