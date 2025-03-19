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
    AWS_APPTEST_API GetTestRunStepResult() = default;
    AWS_APPTEST_API GetTestRunStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API GetTestRunStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The step name of the test run step.</p>
     */
    inline const Aws::String& GetStepName() const { return m_stepName; }
    template<typename StepNameT = Aws::String>
    void SetStepName(StepNameT&& value) { m_stepNameHasBeenSet = true; m_stepName = std::forward<StepNameT>(value); }
    template<typename StepNameT = Aws::String>
    GetTestRunStepResult& WithStepName(StepNameT&& value) { SetStepName(std::forward<StepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test run ID of the test run step.</p>
     */
    inline const Aws::String& GetTestRunId() const { return m_testRunId; }
    template<typename TestRunIdT = Aws::String>
    void SetTestRunId(TestRunIdT&& value) { m_testRunIdHasBeenSet = true; m_testRunId = std::forward<TestRunIdT>(value); }
    template<typename TestRunIdT = Aws::String>
    GetTestRunStepResult& WithTestRunId(TestRunIdT&& value) { SetTestRunId(std::forward<TestRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case ID of the test run step.</p>
     */
    inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
    template<typename TestCaseIdT = Aws::String>
    void SetTestCaseId(TestCaseIdT&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::forward<TestCaseIdT>(value); }
    template<typename TestCaseIdT = Aws::String>
    GetTestRunStepResult& WithTestCaseId(TestCaseIdT&& value) { SetTestCaseId(std::forward<TestCaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case version of the test run step.</p>
     */
    inline int GetTestCaseVersion() const { return m_testCaseVersion; }
    inline void SetTestCaseVersion(int value) { m_testCaseVersionHasBeenSet = true; m_testCaseVersion = value; }
    inline GetTestRunStepResult& WithTestCaseVersion(int value) { SetTestCaseVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite ID of the test run step.</p>
     */
    inline const Aws::String& GetTestSuiteId() const { return m_testSuiteId; }
    template<typename TestSuiteIdT = Aws::String>
    void SetTestSuiteId(TestSuiteIdT&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::forward<TestSuiteIdT>(value); }
    template<typename TestSuiteIdT = Aws::String>
    GetTestRunStepResult& WithTestSuiteId(TestSuiteIdT&& value) { SetTestSuiteId(std::forward<TestSuiteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite version of the test run step.</p>
     */
    inline int GetTestSuiteVersion() const { return m_testSuiteVersion; }
    inline void SetTestSuiteVersion(int value) { m_testSuiteVersionHasBeenSet = true; m_testSuiteVersion = value; }
    inline GetTestRunStepResult& WithTestSuiteVersion(int value) { SetTestSuiteVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The before steps of the test run step.</p>
     */
    inline bool GetBeforeStep() const { return m_beforeStep; }
    inline void SetBeforeStep(bool value) { m_beforeStepHasBeenSet = true; m_beforeStep = value; }
    inline GetTestRunStepResult& WithBeforeStep(bool value) { SetBeforeStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The after steps of the test run step.</p>
     */
    inline bool GetAfterStep() const { return m_afterStep; }
    inline void SetAfterStep(bool value) { m_afterStepHasBeenSet = true; m_afterStep = value; }
    inline GetTestRunStepResult& WithAfterStep(bool value) { SetAfterStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test run step.</p>
     */
    inline StepRunStatus GetStatus() const { return m_status; }
    inline void SetStatus(StepRunStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetTestRunStepResult& WithStatus(StepRunStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test run step.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetTestRunStepResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run start time of the test run step.</p>
     */
    inline const Aws::Utils::DateTime& GetRunStartTime() const { return m_runStartTime; }
    template<typename RunStartTimeT = Aws::Utils::DateTime>
    void SetRunStartTime(RunStartTimeT&& value) { m_runStartTimeHasBeenSet = true; m_runStartTime = std::forward<RunStartTimeT>(value); }
    template<typename RunStartTimeT = Aws::Utils::DateTime>
    GetTestRunStepResult& WithRunStartTime(RunStartTimeT&& value) { SetRunStartTime(std::forward<RunStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run end time of the test run step.</p>
     */
    inline const Aws::Utils::DateTime& GetRunEndTime() const { return m_runEndTime; }
    template<typename RunEndTimeT = Aws::Utils::DateTime>
    void SetRunEndTime(RunEndTimeT&& value) { m_runEndTimeHasBeenSet = true; m_runEndTime = std::forward<RunEndTimeT>(value); }
    template<typename RunEndTimeT = Aws::Utils::DateTime>
    GetTestRunStepResult& WithRunEndTime(RunEndTimeT&& value) { SetRunEndTime(std::forward<RunEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step run summary of the test run step.</p>
     */
    inline const StepRunSummary& GetStepRunSummary() const { return m_stepRunSummary; }
    template<typename StepRunSummaryT = StepRunSummary>
    void SetStepRunSummary(StepRunSummaryT&& value) { m_stepRunSummaryHasBeenSet = true; m_stepRunSummary = std::forward<StepRunSummaryT>(value); }
    template<typename StepRunSummaryT = StepRunSummary>
    GetTestRunStepResult& WithStepRunSummary(StepRunSummaryT&& value) { SetStepRunSummary(std::forward<StepRunSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTestRunStepResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::String m_testRunId;
    bool m_testRunIdHasBeenSet = false;

    Aws::String m_testCaseId;
    bool m_testCaseIdHasBeenSet = false;

    int m_testCaseVersion{0};
    bool m_testCaseVersionHasBeenSet = false;

    Aws::String m_testSuiteId;
    bool m_testSuiteIdHasBeenSet = false;

    int m_testSuiteVersion{0};
    bool m_testSuiteVersionHasBeenSet = false;

    bool m_beforeStep{false};
    bool m_beforeStepHasBeenSet = false;

    bool m_afterStep{false};
    bool m_afterStepHasBeenSet = false;

    StepRunStatus m_status{StepRunStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_runStartTime{};
    bool m_runStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_runEndTime{};
    bool m_runEndTimeHasBeenSet = false;

    StepRunSummary m_stepRunSummary;
    bool m_stepRunSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
