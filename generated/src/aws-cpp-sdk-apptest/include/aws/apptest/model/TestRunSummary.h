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
    AWS_APPTEST_API TestRunSummary() = default;
    AWS_APPTEST_API TestRunSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TestRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The test run ID of the test run summary.</p>
     */
    inline const Aws::String& GetTestRunId() const { return m_testRunId; }
    inline bool TestRunIdHasBeenSet() const { return m_testRunIdHasBeenSet; }
    template<typename TestRunIdT = Aws::String>
    void SetTestRunId(TestRunIdT&& value) { m_testRunIdHasBeenSet = true; m_testRunId = std::forward<TestRunIdT>(value); }
    template<typename TestRunIdT = Aws::String>
    TestRunSummary& WithTestRunId(TestRunIdT&& value) { SetTestRunId(std::forward<TestRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test run ARN of the test run summary.</p>
     */
    inline const Aws::String& GetTestRunArn() const { return m_testRunArn; }
    inline bool TestRunArnHasBeenSet() const { return m_testRunArnHasBeenSet; }
    template<typename TestRunArnT = Aws::String>
    void SetTestRunArn(TestRunArnT&& value) { m_testRunArnHasBeenSet = true; m_testRunArn = std::forward<TestRunArnT>(value); }
    template<typename TestRunArnT = Aws::String>
    TestRunSummary& WithTestRunArn(TestRunArnT&& value) { SetTestRunArn(std::forward<TestRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite ID of the test run summary.</p>
     */
    inline const Aws::String& GetTestSuiteId() const { return m_testSuiteId; }
    inline bool TestSuiteIdHasBeenSet() const { return m_testSuiteIdHasBeenSet; }
    template<typename TestSuiteIdT = Aws::String>
    void SetTestSuiteId(TestSuiteIdT&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::forward<TestSuiteIdT>(value); }
    template<typename TestSuiteIdT = Aws::String>
    TestRunSummary& WithTestSuiteId(TestSuiteIdT&& value) { SetTestSuiteId(std::forward<TestSuiteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite version of the test run summary.</p>
     */
    inline int GetTestSuiteVersion() const { return m_testSuiteVersion; }
    inline bool TestSuiteVersionHasBeenSet() const { return m_testSuiteVersionHasBeenSet; }
    inline void SetTestSuiteVersion(int value) { m_testSuiteVersionHasBeenSet = true; m_testSuiteVersion = value; }
    inline TestRunSummary& WithTestSuiteVersion(int value) { SetTestSuiteVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test configuration ID of the test run summary.</p>
     */
    inline const Aws::String& GetTestConfigurationId() const { return m_testConfigurationId; }
    inline bool TestConfigurationIdHasBeenSet() const { return m_testConfigurationIdHasBeenSet; }
    template<typename TestConfigurationIdT = Aws::String>
    void SetTestConfigurationId(TestConfigurationIdT&& value) { m_testConfigurationIdHasBeenSet = true; m_testConfigurationId = std::forward<TestConfigurationIdT>(value); }
    template<typename TestConfigurationIdT = Aws::String>
    TestRunSummary& WithTestConfigurationId(TestConfigurationIdT&& value) { SetTestConfigurationId(std::forward<TestConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test configuration version of the test run summary.</p>
     */
    inline int GetTestConfigurationVersion() const { return m_testConfigurationVersion; }
    inline bool TestConfigurationVersionHasBeenSet() const { return m_testConfigurationVersionHasBeenSet; }
    inline void SetTestConfigurationVersion(int value) { m_testConfigurationVersionHasBeenSet = true; m_testConfigurationVersion = value; }
    inline TestRunSummary& WithTestConfigurationVersion(int value) { SetTestConfigurationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test run summary.</p>
     */
    inline TestRunStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TestRunStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TestRunSummary& WithStatus(TestRunStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test run summary.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    TestRunSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run start time of the test run summary.</p>
     */
    inline const Aws::Utils::DateTime& GetRunStartTime() const { return m_runStartTime; }
    inline bool RunStartTimeHasBeenSet() const { return m_runStartTimeHasBeenSet; }
    template<typename RunStartTimeT = Aws::Utils::DateTime>
    void SetRunStartTime(RunStartTimeT&& value) { m_runStartTimeHasBeenSet = true; m_runStartTime = std::forward<RunStartTimeT>(value); }
    template<typename RunStartTimeT = Aws::Utils::DateTime>
    TestRunSummary& WithRunStartTime(RunStartTimeT&& value) { SetRunStartTime(std::forward<RunStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run end time of the test run summary.</p>
     */
    inline const Aws::Utils::DateTime& GetRunEndTime() const { return m_runEndTime; }
    inline bool RunEndTimeHasBeenSet() const { return m_runEndTimeHasBeenSet; }
    template<typename RunEndTimeT = Aws::Utils::DateTime>
    void SetRunEndTime(RunEndTimeT&& value) { m_runEndTimeHasBeenSet = true; m_runEndTime = std::forward<RunEndTimeT>(value); }
    template<typename RunEndTimeT = Aws::Utils::DateTime>
    TestRunSummary& WithRunEndTime(RunEndTimeT&& value) { SetRunEndTime(std::forward<RunEndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testRunId;
    bool m_testRunIdHasBeenSet = false;

    Aws::String m_testRunArn;
    bool m_testRunArnHasBeenSet = false;

    Aws::String m_testSuiteId;
    bool m_testSuiteIdHasBeenSet = false;

    int m_testSuiteVersion{0};
    bool m_testSuiteVersionHasBeenSet = false;

    Aws::String m_testConfigurationId;
    bool m_testConfigurationIdHasBeenSet = false;

    int m_testConfigurationVersion{0};
    bool m_testConfigurationVersionHasBeenSet = false;

    TestRunStatus m_status{TestRunStatus::NOT_SET};
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
