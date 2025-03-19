/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/StepRunStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies a test run step summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TestRunStepSummary">AWS
   * API Reference</a></p>
   */
  class TestRunStepSummary
  {
  public:
    AWS_APPTEST_API TestRunStepSummary() = default;
    AWS_APPTEST_API TestRunStepSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TestRunStepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step name of the test run step summary.</p>
     */
    inline const Aws::String& GetStepName() const { return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    template<typename StepNameT = Aws::String>
    void SetStepName(StepNameT&& value) { m_stepNameHasBeenSet = true; m_stepName = std::forward<StepNameT>(value); }
    template<typename StepNameT = Aws::String>
    TestRunStepSummary& WithStepName(StepNameT&& value) { SetStepName(std::forward<StepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test run ID of the test run step summary.</p>
     */
    inline const Aws::String& GetTestRunId() const { return m_testRunId; }
    inline bool TestRunIdHasBeenSet() const { return m_testRunIdHasBeenSet; }
    template<typename TestRunIdT = Aws::String>
    void SetTestRunId(TestRunIdT&& value) { m_testRunIdHasBeenSet = true; m_testRunId = std::forward<TestRunIdT>(value); }
    template<typename TestRunIdT = Aws::String>
    TestRunStepSummary& WithTestRunId(TestRunIdT&& value) { SetTestRunId(std::forward<TestRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case ID of the test run step summary.</p>
     */
    inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
    inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
    template<typename TestCaseIdT = Aws::String>
    void SetTestCaseId(TestCaseIdT&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::forward<TestCaseIdT>(value); }
    template<typename TestCaseIdT = Aws::String>
    TestRunStepSummary& WithTestCaseId(TestCaseIdT&& value) { SetTestCaseId(std::forward<TestCaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case version of the test run step summary.</p>
     */
    inline int GetTestCaseVersion() const { return m_testCaseVersion; }
    inline bool TestCaseVersionHasBeenSet() const { return m_testCaseVersionHasBeenSet; }
    inline void SetTestCaseVersion(int value) { m_testCaseVersionHasBeenSet = true; m_testCaseVersion = value; }
    inline TestRunStepSummary& WithTestCaseVersion(int value) { SetTestCaseVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite ID of the test run step summary.</p>
     */
    inline const Aws::String& GetTestSuiteId() const { return m_testSuiteId; }
    inline bool TestSuiteIdHasBeenSet() const { return m_testSuiteIdHasBeenSet; }
    template<typename TestSuiteIdT = Aws::String>
    void SetTestSuiteId(TestSuiteIdT&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::forward<TestSuiteIdT>(value); }
    template<typename TestSuiteIdT = Aws::String>
    TestRunStepSummary& WithTestSuiteId(TestSuiteIdT&& value) { SetTestSuiteId(std::forward<TestSuiteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite version of the test run step summary.</p>
     */
    inline int GetTestSuiteVersion() const { return m_testSuiteVersion; }
    inline bool TestSuiteVersionHasBeenSet() const { return m_testSuiteVersionHasBeenSet; }
    inline void SetTestSuiteVersion(int value) { m_testSuiteVersionHasBeenSet = true; m_testSuiteVersion = value; }
    inline TestRunStepSummary& WithTestSuiteVersion(int value) { SetTestSuiteVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The before step of the test run step summary.</p>
     */
    inline bool GetBeforeStep() const { return m_beforeStep; }
    inline bool BeforeStepHasBeenSet() const { return m_beforeStepHasBeenSet; }
    inline void SetBeforeStep(bool value) { m_beforeStepHasBeenSet = true; m_beforeStep = value; }
    inline TestRunStepSummary& WithBeforeStep(bool value) { SetBeforeStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The after step of the test run step summary.</p>
     */
    inline bool GetAfterStep() const { return m_afterStep; }
    inline bool AfterStepHasBeenSet() const { return m_afterStepHasBeenSet; }
    inline void SetAfterStep(bool value) { m_afterStepHasBeenSet = true; m_afterStep = value; }
    inline TestRunStepSummary& WithAfterStep(bool value) { SetAfterStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test run step summary.</p>
     */
    inline StepRunStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StepRunStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TestRunStepSummary& WithStatus(StepRunStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test run step summary.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    TestRunStepSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run start time of the test run step summary.</p>
     */
    inline const Aws::Utils::DateTime& GetRunStartTime() const { return m_runStartTime; }
    inline bool RunStartTimeHasBeenSet() const { return m_runStartTimeHasBeenSet; }
    template<typename RunStartTimeT = Aws::Utils::DateTime>
    void SetRunStartTime(RunStartTimeT&& value) { m_runStartTimeHasBeenSet = true; m_runStartTime = std::forward<RunStartTimeT>(value); }
    template<typename RunStartTimeT = Aws::Utils::DateTime>
    TestRunStepSummary& WithRunStartTime(RunStartTimeT&& value) { SetRunStartTime(std::forward<RunStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run end time of the test run step summary.</p>
     */
    inline const Aws::Utils::DateTime& GetRunEndTime() const { return m_runEndTime; }
    inline bool RunEndTimeHasBeenSet() const { return m_runEndTimeHasBeenSet; }
    template<typename RunEndTimeT = Aws::Utils::DateTime>
    void SetRunEndTime(RunEndTimeT&& value) { m_runEndTimeHasBeenSet = true; m_runEndTime = std::forward<RunEndTimeT>(value); }
    template<typename RunEndTimeT = Aws::Utils::DateTime>
    TestRunStepSummary& WithRunEndTime(RunEndTimeT&& value) { SetRunEndTime(std::forward<RunEndTimeT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
