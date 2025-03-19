/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestCaseRunStatus.h>
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
   * <p>Specifies the test case run summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TestCaseRunSummary">AWS
   * API Reference</a></p>
   */
  class TestCaseRunSummary
  {
  public:
    AWS_APPTEST_API TestCaseRunSummary() = default;
    AWS_APPTEST_API TestCaseRunSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TestCaseRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The test case id of the test case run summary.</p>
     */
    inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
    inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
    template<typename TestCaseIdT = Aws::String>
    void SetTestCaseId(TestCaseIdT&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::forward<TestCaseIdT>(value); }
    template<typename TestCaseIdT = Aws::String>
    TestCaseRunSummary& WithTestCaseId(TestCaseIdT&& value) { SetTestCaseId(std::forward<TestCaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case version of the test case run summary.</p>
     */
    inline int GetTestCaseVersion() const { return m_testCaseVersion; }
    inline bool TestCaseVersionHasBeenSet() const { return m_testCaseVersionHasBeenSet; }
    inline void SetTestCaseVersion(int value) { m_testCaseVersionHasBeenSet = true; m_testCaseVersion = value; }
    inline TestCaseRunSummary& WithTestCaseVersion(int value) { SetTestCaseVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test run id of the test case run summary.</p>
     */
    inline const Aws::String& GetTestRunId() const { return m_testRunId; }
    inline bool TestRunIdHasBeenSet() const { return m_testRunIdHasBeenSet; }
    template<typename TestRunIdT = Aws::String>
    void SetTestRunId(TestRunIdT&& value) { m_testRunIdHasBeenSet = true; m_testRunId = std::forward<TestRunIdT>(value); }
    template<typename TestRunIdT = Aws::String>
    TestCaseRunSummary& WithTestRunId(TestRunIdT&& value) { SetTestRunId(std::forward<TestRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test case run summary.</p>
     */
    inline TestCaseRunStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TestCaseRunStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TestCaseRunSummary& WithStatus(TestCaseRunStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test case run summary.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    TestCaseRunSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run start time of the test case run summary.</p>
     */
    inline const Aws::Utils::DateTime& GetRunStartTime() const { return m_runStartTime; }
    inline bool RunStartTimeHasBeenSet() const { return m_runStartTimeHasBeenSet; }
    template<typename RunStartTimeT = Aws::Utils::DateTime>
    void SetRunStartTime(RunStartTimeT&& value) { m_runStartTimeHasBeenSet = true; m_runStartTime = std::forward<RunStartTimeT>(value); }
    template<typename RunStartTimeT = Aws::Utils::DateTime>
    TestCaseRunSummary& WithRunStartTime(RunStartTimeT&& value) { SetRunStartTime(std::forward<RunStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run end time of the test case run summary.</p>
     */
    inline const Aws::Utils::DateTime& GetRunEndTime() const { return m_runEndTime; }
    inline bool RunEndTimeHasBeenSet() const { return m_runEndTimeHasBeenSet; }
    template<typename RunEndTimeT = Aws::Utils::DateTime>
    void SetRunEndTime(RunEndTimeT&& value) { m_runEndTimeHasBeenSet = true; m_runEndTime = std::forward<RunEndTimeT>(value); }
    template<typename RunEndTimeT = Aws::Utils::DateTime>
    TestCaseRunSummary& WithRunEndTime(RunEndTimeT&& value) { SetRunEndTime(std::forward<RunEndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testCaseId;
    bool m_testCaseIdHasBeenSet = false;

    int m_testCaseVersion{0};
    bool m_testCaseVersionHasBeenSet = false;

    Aws::String m_testRunId;
    bool m_testRunIdHasBeenSet = false;

    TestCaseRunStatus m_status{TestCaseRunStatus::NOT_SET};
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
