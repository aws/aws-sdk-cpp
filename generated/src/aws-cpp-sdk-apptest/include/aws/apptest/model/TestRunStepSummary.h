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
    AWS_APPTEST_API TestRunStepSummary();
    AWS_APPTEST_API TestRunStepSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TestRunStepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step name of the test run step summary.</p>
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    inline void SetStepName(const Aws::String& value) { m_stepNameHasBeenSet = true; m_stepName = value; }
    inline void SetStepName(Aws::String&& value) { m_stepNameHasBeenSet = true; m_stepName = std::move(value); }
    inline void SetStepName(const char* value) { m_stepNameHasBeenSet = true; m_stepName.assign(value); }
    inline TestRunStepSummary& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}
    inline TestRunStepSummary& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}
    inline TestRunStepSummary& WithStepName(const char* value) { SetStepName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test run ID of the test run step summary.</p>
     */
    inline const Aws::String& GetTestRunId() const{ return m_testRunId; }
    inline bool TestRunIdHasBeenSet() const { return m_testRunIdHasBeenSet; }
    inline void SetTestRunId(const Aws::String& value) { m_testRunIdHasBeenSet = true; m_testRunId = value; }
    inline void SetTestRunId(Aws::String&& value) { m_testRunIdHasBeenSet = true; m_testRunId = std::move(value); }
    inline void SetTestRunId(const char* value) { m_testRunIdHasBeenSet = true; m_testRunId.assign(value); }
    inline TestRunStepSummary& WithTestRunId(const Aws::String& value) { SetTestRunId(value); return *this;}
    inline TestRunStepSummary& WithTestRunId(Aws::String&& value) { SetTestRunId(std::move(value)); return *this;}
    inline TestRunStepSummary& WithTestRunId(const char* value) { SetTestRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case ID of the test run step summary.</p>
     */
    inline const Aws::String& GetTestCaseId() const{ return m_testCaseId; }
    inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
    inline void SetTestCaseId(const Aws::String& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = value; }
    inline void SetTestCaseId(Aws::String&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::move(value); }
    inline void SetTestCaseId(const char* value) { m_testCaseIdHasBeenSet = true; m_testCaseId.assign(value); }
    inline TestRunStepSummary& WithTestCaseId(const Aws::String& value) { SetTestCaseId(value); return *this;}
    inline TestRunStepSummary& WithTestCaseId(Aws::String&& value) { SetTestCaseId(std::move(value)); return *this;}
    inline TestRunStepSummary& WithTestCaseId(const char* value) { SetTestCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case version of the test run step summary.</p>
     */
    inline int GetTestCaseVersion() const{ return m_testCaseVersion; }
    inline bool TestCaseVersionHasBeenSet() const { return m_testCaseVersionHasBeenSet; }
    inline void SetTestCaseVersion(int value) { m_testCaseVersionHasBeenSet = true; m_testCaseVersion = value; }
    inline TestRunStepSummary& WithTestCaseVersion(int value) { SetTestCaseVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite ID of the test run step summary.</p>
     */
    inline const Aws::String& GetTestSuiteId() const{ return m_testSuiteId; }
    inline bool TestSuiteIdHasBeenSet() const { return m_testSuiteIdHasBeenSet; }
    inline void SetTestSuiteId(const Aws::String& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = value; }
    inline void SetTestSuiteId(Aws::String&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::move(value); }
    inline void SetTestSuiteId(const char* value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId.assign(value); }
    inline TestRunStepSummary& WithTestSuiteId(const Aws::String& value) { SetTestSuiteId(value); return *this;}
    inline TestRunStepSummary& WithTestSuiteId(Aws::String&& value) { SetTestSuiteId(std::move(value)); return *this;}
    inline TestRunStepSummary& WithTestSuiteId(const char* value) { SetTestSuiteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite version of the test run step summary.</p>
     */
    inline int GetTestSuiteVersion() const{ return m_testSuiteVersion; }
    inline bool TestSuiteVersionHasBeenSet() const { return m_testSuiteVersionHasBeenSet; }
    inline void SetTestSuiteVersion(int value) { m_testSuiteVersionHasBeenSet = true; m_testSuiteVersion = value; }
    inline TestRunStepSummary& WithTestSuiteVersion(int value) { SetTestSuiteVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The before step of the test run step summary.</p>
     */
    inline bool GetBeforeStep() const{ return m_beforeStep; }
    inline bool BeforeStepHasBeenSet() const { return m_beforeStepHasBeenSet; }
    inline void SetBeforeStep(bool value) { m_beforeStepHasBeenSet = true; m_beforeStep = value; }
    inline TestRunStepSummary& WithBeforeStep(bool value) { SetBeforeStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The after step of the test run step summary.</p>
     */
    inline bool GetAfterStep() const{ return m_afterStep; }
    inline bool AfterStepHasBeenSet() const { return m_afterStepHasBeenSet; }
    inline void SetAfterStep(bool value) { m_afterStepHasBeenSet = true; m_afterStep = value; }
    inline TestRunStepSummary& WithAfterStep(bool value) { SetAfterStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test run step summary.</p>
     */
    inline const StepRunStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StepRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StepRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TestRunStepSummary& WithStatus(const StepRunStatus& value) { SetStatus(value); return *this;}
    inline TestRunStepSummary& WithStatus(StepRunStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test run step summary.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline TestRunStepSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline TestRunStepSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline TestRunStepSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run start time of the test run step summary.</p>
     */
    inline const Aws::Utils::DateTime& GetRunStartTime() const{ return m_runStartTime; }
    inline bool RunStartTimeHasBeenSet() const { return m_runStartTimeHasBeenSet; }
    inline void SetRunStartTime(const Aws::Utils::DateTime& value) { m_runStartTimeHasBeenSet = true; m_runStartTime = value; }
    inline void SetRunStartTime(Aws::Utils::DateTime&& value) { m_runStartTimeHasBeenSet = true; m_runStartTime = std::move(value); }
    inline TestRunStepSummary& WithRunStartTime(const Aws::Utils::DateTime& value) { SetRunStartTime(value); return *this;}
    inline TestRunStepSummary& WithRunStartTime(Aws::Utils::DateTime&& value) { SetRunStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run end time of the test run step summary.</p>
     */
    inline const Aws::Utils::DateTime& GetRunEndTime() const{ return m_runEndTime; }
    inline bool RunEndTimeHasBeenSet() const { return m_runEndTimeHasBeenSet; }
    inline void SetRunEndTime(const Aws::Utils::DateTime& value) { m_runEndTimeHasBeenSet = true; m_runEndTime = value; }
    inline void SetRunEndTime(Aws::Utils::DateTime&& value) { m_runEndTimeHasBeenSet = true; m_runEndTime = std::move(value); }
    inline TestRunStepSummary& WithRunEndTime(const Aws::Utils::DateTime& value) { SetRunEndTime(value); return *this;}
    inline TestRunStepSummary& WithRunEndTime(Aws::Utils::DateTime&& value) { SetRunEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::String m_testRunId;
    bool m_testRunIdHasBeenSet = false;

    Aws::String m_testCaseId;
    bool m_testCaseIdHasBeenSet = false;

    int m_testCaseVersion;
    bool m_testCaseVersionHasBeenSet = false;

    Aws::String m_testSuiteId;
    bool m_testSuiteIdHasBeenSet = false;

    int m_testSuiteVersion;
    bool m_testSuiteVersionHasBeenSet = false;

    bool m_beforeStep;
    bool m_beforeStepHasBeenSet = false;

    bool m_afterStep;
    bool m_afterStepHasBeenSet = false;

    StepRunStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_runStartTime;
    bool m_runStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_runEndTime;
    bool m_runEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
