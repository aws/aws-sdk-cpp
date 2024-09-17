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
    AWS_APPTEST_API TestCaseRunSummary();
    AWS_APPTEST_API TestCaseRunSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TestCaseRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The test case id of the test case run summary.</p>
     */
    inline const Aws::String& GetTestCaseId() const{ return m_testCaseId; }
    inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
    inline void SetTestCaseId(const Aws::String& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = value; }
    inline void SetTestCaseId(Aws::String&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::move(value); }
    inline void SetTestCaseId(const char* value) { m_testCaseIdHasBeenSet = true; m_testCaseId.assign(value); }
    inline TestCaseRunSummary& WithTestCaseId(const Aws::String& value) { SetTestCaseId(value); return *this;}
    inline TestCaseRunSummary& WithTestCaseId(Aws::String&& value) { SetTestCaseId(std::move(value)); return *this;}
    inline TestCaseRunSummary& WithTestCaseId(const char* value) { SetTestCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case version of the test case run summary.</p>
     */
    inline int GetTestCaseVersion() const{ return m_testCaseVersion; }
    inline bool TestCaseVersionHasBeenSet() const { return m_testCaseVersionHasBeenSet; }
    inline void SetTestCaseVersion(int value) { m_testCaseVersionHasBeenSet = true; m_testCaseVersion = value; }
    inline TestCaseRunSummary& WithTestCaseVersion(int value) { SetTestCaseVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test run id of the test case run summary.</p>
     */
    inline const Aws::String& GetTestRunId() const{ return m_testRunId; }
    inline bool TestRunIdHasBeenSet() const { return m_testRunIdHasBeenSet; }
    inline void SetTestRunId(const Aws::String& value) { m_testRunIdHasBeenSet = true; m_testRunId = value; }
    inline void SetTestRunId(Aws::String&& value) { m_testRunIdHasBeenSet = true; m_testRunId = std::move(value); }
    inline void SetTestRunId(const char* value) { m_testRunIdHasBeenSet = true; m_testRunId.assign(value); }
    inline TestCaseRunSummary& WithTestRunId(const Aws::String& value) { SetTestRunId(value); return *this;}
    inline TestCaseRunSummary& WithTestRunId(Aws::String&& value) { SetTestRunId(std::move(value)); return *this;}
    inline TestCaseRunSummary& WithTestRunId(const char* value) { SetTestRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test case run summary.</p>
     */
    inline const TestCaseRunStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TestCaseRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TestCaseRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TestCaseRunSummary& WithStatus(const TestCaseRunStatus& value) { SetStatus(value); return *this;}
    inline TestCaseRunSummary& WithStatus(TestCaseRunStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test case run summary.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline TestCaseRunSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline TestCaseRunSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline TestCaseRunSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run start time of the test case run summary.</p>
     */
    inline const Aws::Utils::DateTime& GetRunStartTime() const{ return m_runStartTime; }
    inline bool RunStartTimeHasBeenSet() const { return m_runStartTimeHasBeenSet; }
    inline void SetRunStartTime(const Aws::Utils::DateTime& value) { m_runStartTimeHasBeenSet = true; m_runStartTime = value; }
    inline void SetRunStartTime(Aws::Utils::DateTime&& value) { m_runStartTimeHasBeenSet = true; m_runStartTime = std::move(value); }
    inline TestCaseRunSummary& WithRunStartTime(const Aws::Utils::DateTime& value) { SetRunStartTime(value); return *this;}
    inline TestCaseRunSummary& WithRunStartTime(Aws::Utils::DateTime&& value) { SetRunStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run end time of the test case run summary.</p>
     */
    inline const Aws::Utils::DateTime& GetRunEndTime() const{ return m_runEndTime; }
    inline bool RunEndTimeHasBeenSet() const { return m_runEndTimeHasBeenSet; }
    inline void SetRunEndTime(const Aws::Utils::DateTime& value) { m_runEndTimeHasBeenSet = true; m_runEndTime = value; }
    inline void SetRunEndTime(Aws::Utils::DateTime&& value) { m_runEndTimeHasBeenSet = true; m_runEndTime = std::move(value); }
    inline TestCaseRunSummary& WithRunEndTime(const Aws::Utils::DateTime& value) { SetRunEndTime(value); return *this;}
    inline TestCaseRunSummary& WithRunEndTime(Aws::Utils::DateTime&& value) { SetRunEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_testCaseId;
    bool m_testCaseIdHasBeenSet = false;

    int m_testCaseVersion;
    bool m_testCaseVersionHasBeenSet = false;

    Aws::String m_testRunId;
    bool m_testRunIdHasBeenSet = false;

    TestCaseRunStatus m_status;
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
