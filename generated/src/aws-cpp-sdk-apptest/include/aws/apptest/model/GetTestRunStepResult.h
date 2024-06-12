/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/StepRunStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/apptest/model/StepRunSummary.h>
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
  class GetTestRunStepResult
  {
  public:
    AWS_APPTEST_API GetTestRunStepResult();
    AWS_APPTEST_API GetTestRunStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API GetTestRunStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The step name of the test run step.</p>
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }
    inline void SetStepName(const Aws::String& value) { m_stepName = value; }
    inline void SetStepName(Aws::String&& value) { m_stepName = std::move(value); }
    inline void SetStepName(const char* value) { m_stepName.assign(value); }
    inline GetTestRunStepResult& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}
    inline GetTestRunStepResult& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}
    inline GetTestRunStepResult& WithStepName(const char* value) { SetStepName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test run ID of the test run step.</p>
     */
    inline const Aws::String& GetTestRunId() const{ return m_testRunId; }
    inline void SetTestRunId(const Aws::String& value) { m_testRunId = value; }
    inline void SetTestRunId(Aws::String&& value) { m_testRunId = std::move(value); }
    inline void SetTestRunId(const char* value) { m_testRunId.assign(value); }
    inline GetTestRunStepResult& WithTestRunId(const Aws::String& value) { SetTestRunId(value); return *this;}
    inline GetTestRunStepResult& WithTestRunId(Aws::String&& value) { SetTestRunId(std::move(value)); return *this;}
    inline GetTestRunStepResult& WithTestRunId(const char* value) { SetTestRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case ID of the test run step.</p>
     */
    inline const Aws::String& GetTestCaseId() const{ return m_testCaseId; }
    inline void SetTestCaseId(const Aws::String& value) { m_testCaseId = value; }
    inline void SetTestCaseId(Aws::String&& value) { m_testCaseId = std::move(value); }
    inline void SetTestCaseId(const char* value) { m_testCaseId.assign(value); }
    inline GetTestRunStepResult& WithTestCaseId(const Aws::String& value) { SetTestCaseId(value); return *this;}
    inline GetTestRunStepResult& WithTestCaseId(Aws::String&& value) { SetTestCaseId(std::move(value)); return *this;}
    inline GetTestRunStepResult& WithTestCaseId(const char* value) { SetTestCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case version of the test run step.</p>
     */
    inline int GetTestCaseVersion() const{ return m_testCaseVersion; }
    inline void SetTestCaseVersion(int value) { m_testCaseVersion = value; }
    inline GetTestRunStepResult& WithTestCaseVersion(int value) { SetTestCaseVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite ID of the test run step.</p>
     */
    inline const Aws::String& GetTestSuiteId() const{ return m_testSuiteId; }
    inline void SetTestSuiteId(const Aws::String& value) { m_testSuiteId = value; }
    inline void SetTestSuiteId(Aws::String&& value) { m_testSuiteId = std::move(value); }
    inline void SetTestSuiteId(const char* value) { m_testSuiteId.assign(value); }
    inline GetTestRunStepResult& WithTestSuiteId(const Aws::String& value) { SetTestSuiteId(value); return *this;}
    inline GetTestRunStepResult& WithTestSuiteId(Aws::String&& value) { SetTestSuiteId(std::move(value)); return *this;}
    inline GetTestRunStepResult& WithTestSuiteId(const char* value) { SetTestSuiteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite version of the test run step.</p>
     */
    inline int GetTestSuiteVersion() const{ return m_testSuiteVersion; }
    inline void SetTestSuiteVersion(int value) { m_testSuiteVersion = value; }
    inline GetTestRunStepResult& WithTestSuiteVersion(int value) { SetTestSuiteVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The before steps of the test run step.</p>
     */
    inline bool GetBeforeStep() const{ return m_beforeStep; }
    inline void SetBeforeStep(bool value) { m_beforeStep = value; }
    inline GetTestRunStepResult& WithBeforeStep(bool value) { SetBeforeStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The after steps of the test run step.</p>
     */
    inline bool GetAfterStep() const{ return m_afterStep; }
    inline void SetAfterStep(bool value) { m_afterStep = value; }
    inline GetTestRunStepResult& WithAfterStep(bool value) { SetAfterStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test run step.</p>
     */
    inline const StepRunStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const StepRunStatus& value) { m_status = value; }
    inline void SetStatus(StepRunStatus&& value) { m_status = std::move(value); }
    inline GetTestRunStepResult& WithStatus(const StepRunStatus& value) { SetStatus(value); return *this;}
    inline GetTestRunStepResult& WithStatus(StepRunStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test run step.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetTestRunStepResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetTestRunStepResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetTestRunStepResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run start time of the test run step.</p>
     */
    inline const Aws::Utils::DateTime& GetRunStartTime() const{ return m_runStartTime; }
    inline void SetRunStartTime(const Aws::Utils::DateTime& value) { m_runStartTime = value; }
    inline void SetRunStartTime(Aws::Utils::DateTime&& value) { m_runStartTime = std::move(value); }
    inline GetTestRunStepResult& WithRunStartTime(const Aws::Utils::DateTime& value) { SetRunStartTime(value); return *this;}
    inline GetTestRunStepResult& WithRunStartTime(Aws::Utils::DateTime&& value) { SetRunStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run end time of the test run step.</p>
     */
    inline const Aws::Utils::DateTime& GetRunEndTime() const{ return m_runEndTime; }
    inline void SetRunEndTime(const Aws::Utils::DateTime& value) { m_runEndTime = value; }
    inline void SetRunEndTime(Aws::Utils::DateTime&& value) { m_runEndTime = std::move(value); }
    inline GetTestRunStepResult& WithRunEndTime(const Aws::Utils::DateTime& value) { SetRunEndTime(value); return *this;}
    inline GetTestRunStepResult& WithRunEndTime(Aws::Utils::DateTime&& value) { SetRunEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step run summary of the test run step.</p>
     */
    inline const StepRunSummary& GetStepRunSummary() const{ return m_stepRunSummary; }
    inline void SetStepRunSummary(const StepRunSummary& value) { m_stepRunSummary = value; }
    inline void SetStepRunSummary(StepRunSummary&& value) { m_stepRunSummary = std::move(value); }
    inline GetTestRunStepResult& WithStepRunSummary(const StepRunSummary& value) { SetStepRunSummary(value); return *this;}
    inline GetTestRunStepResult& WithStepRunSummary(StepRunSummary&& value) { SetStepRunSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTestRunStepResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTestRunStepResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTestRunStepResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_stepName;

    Aws::String m_testRunId;

    Aws::String m_testCaseId;

    int m_testCaseVersion;

    Aws::String m_testSuiteId;

    int m_testSuiteVersion;

    bool m_beforeStep;

    bool m_afterStep;

    StepRunStatus m_status;

    Aws::String m_statusReason;

    Aws::Utils::DateTime m_runStartTime;

    Aws::Utils::DateTime m_runEndTime;

    StepRunSummary m_stepRunSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
