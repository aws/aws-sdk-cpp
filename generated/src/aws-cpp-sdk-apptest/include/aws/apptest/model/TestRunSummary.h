/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestRunStatus.h>
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
   * <p>Specifies a test run summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TestRunSummary">AWS
   * API Reference</a></p>
   */
  class TestRunSummary
  {
  public:
    AWS_APPTEST_API TestRunSummary();
    AWS_APPTEST_API TestRunSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TestRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The test run ID of the test run summary.</p>
     */
    inline const Aws::String& GetTestRunId() const{ return m_testRunId; }
    inline bool TestRunIdHasBeenSet() const { return m_testRunIdHasBeenSet; }
    inline void SetTestRunId(const Aws::String& value) { m_testRunIdHasBeenSet = true; m_testRunId = value; }
    inline void SetTestRunId(Aws::String&& value) { m_testRunIdHasBeenSet = true; m_testRunId = std::move(value); }
    inline void SetTestRunId(const char* value) { m_testRunIdHasBeenSet = true; m_testRunId.assign(value); }
    inline TestRunSummary& WithTestRunId(const Aws::String& value) { SetTestRunId(value); return *this;}
    inline TestRunSummary& WithTestRunId(Aws::String&& value) { SetTestRunId(std::move(value)); return *this;}
    inline TestRunSummary& WithTestRunId(const char* value) { SetTestRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test run ARN of the test run summary.</p>
     */
    inline const Aws::String& GetTestRunArn() const{ return m_testRunArn; }
    inline bool TestRunArnHasBeenSet() const { return m_testRunArnHasBeenSet; }
    inline void SetTestRunArn(const Aws::String& value) { m_testRunArnHasBeenSet = true; m_testRunArn = value; }
    inline void SetTestRunArn(Aws::String&& value) { m_testRunArnHasBeenSet = true; m_testRunArn = std::move(value); }
    inline void SetTestRunArn(const char* value) { m_testRunArnHasBeenSet = true; m_testRunArn.assign(value); }
    inline TestRunSummary& WithTestRunArn(const Aws::String& value) { SetTestRunArn(value); return *this;}
    inline TestRunSummary& WithTestRunArn(Aws::String&& value) { SetTestRunArn(std::move(value)); return *this;}
    inline TestRunSummary& WithTestRunArn(const char* value) { SetTestRunArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite ID of the test run summary.</p>
     */
    inline const Aws::String& GetTestSuiteId() const{ return m_testSuiteId; }
    inline bool TestSuiteIdHasBeenSet() const { return m_testSuiteIdHasBeenSet; }
    inline void SetTestSuiteId(const Aws::String& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = value; }
    inline void SetTestSuiteId(Aws::String&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::move(value); }
    inline void SetTestSuiteId(const char* value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId.assign(value); }
    inline TestRunSummary& WithTestSuiteId(const Aws::String& value) { SetTestSuiteId(value); return *this;}
    inline TestRunSummary& WithTestSuiteId(Aws::String&& value) { SetTestSuiteId(std::move(value)); return *this;}
    inline TestRunSummary& WithTestSuiteId(const char* value) { SetTestSuiteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite version of the test run summary.</p>
     */
    inline int GetTestSuiteVersion() const{ return m_testSuiteVersion; }
    inline bool TestSuiteVersionHasBeenSet() const { return m_testSuiteVersionHasBeenSet; }
    inline void SetTestSuiteVersion(int value) { m_testSuiteVersionHasBeenSet = true; m_testSuiteVersion = value; }
    inline TestRunSummary& WithTestSuiteVersion(int value) { SetTestSuiteVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test configuration ID of the test run summary.</p>
     */
    inline const Aws::String& GetTestConfigurationId() const{ return m_testConfigurationId; }
    inline bool TestConfigurationIdHasBeenSet() const { return m_testConfigurationIdHasBeenSet; }
    inline void SetTestConfigurationId(const Aws::String& value) { m_testConfigurationIdHasBeenSet = true; m_testConfigurationId = value; }
    inline void SetTestConfigurationId(Aws::String&& value) { m_testConfigurationIdHasBeenSet = true; m_testConfigurationId = std::move(value); }
    inline void SetTestConfigurationId(const char* value) { m_testConfigurationIdHasBeenSet = true; m_testConfigurationId.assign(value); }
    inline TestRunSummary& WithTestConfigurationId(const Aws::String& value) { SetTestConfigurationId(value); return *this;}
    inline TestRunSummary& WithTestConfigurationId(Aws::String&& value) { SetTestConfigurationId(std::move(value)); return *this;}
    inline TestRunSummary& WithTestConfigurationId(const char* value) { SetTestConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test configuration version of the test run summary.</p>
     */
    inline int GetTestConfigurationVersion() const{ return m_testConfigurationVersion; }
    inline bool TestConfigurationVersionHasBeenSet() const { return m_testConfigurationVersionHasBeenSet; }
    inline void SetTestConfigurationVersion(int value) { m_testConfigurationVersionHasBeenSet = true; m_testConfigurationVersion = value; }
    inline TestRunSummary& WithTestConfigurationVersion(int value) { SetTestConfigurationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test run summary.</p>
     */
    inline const TestRunStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TestRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TestRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TestRunSummary& WithStatus(const TestRunStatus& value) { SetStatus(value); return *this;}
    inline TestRunSummary& WithStatus(TestRunStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test run summary.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline TestRunSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline TestRunSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline TestRunSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run start time of the test run summary.</p>
     */
    inline const Aws::Utils::DateTime& GetRunStartTime() const{ return m_runStartTime; }
    inline bool RunStartTimeHasBeenSet() const { return m_runStartTimeHasBeenSet; }
    inline void SetRunStartTime(const Aws::Utils::DateTime& value) { m_runStartTimeHasBeenSet = true; m_runStartTime = value; }
    inline void SetRunStartTime(Aws::Utils::DateTime&& value) { m_runStartTimeHasBeenSet = true; m_runStartTime = std::move(value); }
    inline TestRunSummary& WithRunStartTime(const Aws::Utils::DateTime& value) { SetRunStartTime(value); return *this;}
    inline TestRunSummary& WithRunStartTime(Aws::Utils::DateTime&& value) { SetRunStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run end time of the test run summary.</p>
     */
    inline const Aws::Utils::DateTime& GetRunEndTime() const{ return m_runEndTime; }
    inline bool RunEndTimeHasBeenSet() const { return m_runEndTimeHasBeenSet; }
    inline void SetRunEndTime(const Aws::Utils::DateTime& value) { m_runEndTimeHasBeenSet = true; m_runEndTime = value; }
    inline void SetRunEndTime(Aws::Utils::DateTime&& value) { m_runEndTimeHasBeenSet = true; m_runEndTime = std::move(value); }
    inline TestRunSummary& WithRunEndTime(const Aws::Utils::DateTime& value) { SetRunEndTime(value); return *this;}
    inline TestRunSummary& WithRunEndTime(Aws::Utils::DateTime&& value) { SetRunEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_testRunId;
    bool m_testRunIdHasBeenSet = false;

    Aws::String m_testRunArn;
    bool m_testRunArnHasBeenSet = false;

    Aws::String m_testSuiteId;
    bool m_testSuiteIdHasBeenSet = false;

    int m_testSuiteVersion;
    bool m_testSuiteVersionHasBeenSet = false;

    Aws::String m_testConfigurationId;
    bool m_testConfigurationIdHasBeenSet = false;

    int m_testConfigurationVersion;
    bool m_testConfigurationVersionHasBeenSet = false;

    TestRunStatus m_status;
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
