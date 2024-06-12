/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestCaseLatestVersion.h>
#include <aws/apptest/model/TestCaseLifecycle.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetTestCaseResult
  {
  public:
    AWS_APPTEST_API GetTestCaseResult();
    AWS_APPTEST_API GetTestCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API GetTestCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response test ID of the test case.</p>
     */
    inline const Aws::String& GetTestCaseId() const{ return m_testCaseId; }
    inline void SetTestCaseId(const Aws::String& value) { m_testCaseId = value; }
    inline void SetTestCaseId(Aws::String&& value) { m_testCaseId = std::move(value); }
    inline void SetTestCaseId(const char* value) { m_testCaseId.assign(value); }
    inline GetTestCaseResult& WithTestCaseId(const Aws::String& value) { SetTestCaseId(value); return *this;}
    inline GetTestCaseResult& WithTestCaseId(Aws::String&& value) { SetTestCaseId(std::move(value)); return *this;}
    inline GetTestCaseResult& WithTestCaseId(const char* value) { SetTestCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the test case.</p>
     */
    inline const Aws::String& GetTestCaseArn() const{ return m_testCaseArn; }
    inline void SetTestCaseArn(const Aws::String& value) { m_testCaseArn = value; }
    inline void SetTestCaseArn(Aws::String&& value) { m_testCaseArn = std::move(value); }
    inline void SetTestCaseArn(const char* value) { m_testCaseArn.assign(value); }
    inline GetTestCaseResult& WithTestCaseArn(const Aws::String& value) { SetTestCaseArn(value); return *this;}
    inline GetTestCaseResult& WithTestCaseArn(Aws::String&& value) { SetTestCaseArn(std::move(value)); return *this;}
    inline GetTestCaseResult& WithTestCaseArn(const char* value) { SetTestCaseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the test case.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetTestCaseResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetTestCaseResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetTestCaseResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test case.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetTestCaseResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetTestCaseResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetTestCaseResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the test case.</p>
     */
    inline const TestCaseLatestVersion& GetLatestVersion() const{ return m_latestVersion; }
    inline void SetLatestVersion(const TestCaseLatestVersion& value) { m_latestVersion = value; }
    inline void SetLatestVersion(TestCaseLatestVersion&& value) { m_latestVersion = std::move(value); }
    inline GetTestCaseResult& WithLatestVersion(const TestCaseLatestVersion& value) { SetLatestVersion(value); return *this;}
    inline GetTestCaseResult& WithLatestVersion(TestCaseLatestVersion&& value) { SetLatestVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The case version of the test case.</p>
     */
    inline int GetTestCaseVersion() const{ return m_testCaseVersion; }
    inline void SetTestCaseVersion(int value) { m_testCaseVersion = value; }
    inline GetTestCaseResult& WithTestCaseVersion(int value) { SetTestCaseVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test case.</p>
     */
    inline const TestCaseLifecycle& GetStatus() const{ return m_status; }
    inline void SetStatus(const TestCaseLifecycle& value) { m_status = value; }
    inline void SetStatus(TestCaseLifecycle&& value) { m_status = std::move(value); }
    inline GetTestCaseResult& WithStatus(const TestCaseLifecycle& value) { SetStatus(value); return *this;}
    inline GetTestCaseResult& WithStatus(TestCaseLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test case.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetTestCaseResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetTestCaseResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetTestCaseResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the test case.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetTestCaseResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetTestCaseResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last update time of the test case.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTime = std::move(value); }
    inline GetTestCaseResult& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline GetTestCaseResult& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The steps of the test case.</p>
     */
    inline const Aws::Vector<Step>& GetSteps() const{ return m_steps; }
    inline void SetSteps(const Aws::Vector<Step>& value) { m_steps = value; }
    inline void SetSteps(Aws::Vector<Step>&& value) { m_steps = std::move(value); }
    inline GetTestCaseResult& WithSteps(const Aws::Vector<Step>& value) { SetSteps(value); return *this;}
    inline GetTestCaseResult& WithSteps(Aws::Vector<Step>&& value) { SetSteps(std::move(value)); return *this;}
    inline GetTestCaseResult& AddSteps(const Step& value) { m_steps.push_back(value); return *this; }
    inline GetTestCaseResult& AddSteps(Step&& value) { m_steps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags of the test case.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetTestCaseResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetTestCaseResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetTestCaseResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetTestCaseResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTestCaseResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTestCaseResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetTestCaseResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTestCaseResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTestCaseResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTestCaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTestCaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTestCaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testCaseId;

    Aws::String m_testCaseArn;

    Aws::String m_name;

    Aws::String m_description;

    TestCaseLatestVersion m_latestVersion;

    int m_testCaseVersion;

    TestCaseLifecycle m_status;

    Aws::String m_statusReason;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastUpdateTime;

    Aws::Vector<Step> m_steps;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
