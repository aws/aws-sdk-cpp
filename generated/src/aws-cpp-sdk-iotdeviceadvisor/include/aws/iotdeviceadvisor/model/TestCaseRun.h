/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotdeviceadvisor/model/Status.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotdeviceadvisor/model/TestCaseScenario.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   * <p>Provides the test case run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/TestCaseRun">AWS
   * API Reference</a></p>
   */
  class TestCaseRun
  {
  public:
    AWS_IOTDEVICEADVISOR_API TestCaseRun() = default;
    AWS_IOTDEVICEADVISOR_API TestCaseRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API TestCaseRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the test case run ID.</p>
     */
    inline const Aws::String& GetTestCaseRunId() const { return m_testCaseRunId; }
    inline bool TestCaseRunIdHasBeenSet() const { return m_testCaseRunIdHasBeenSet; }
    template<typename TestCaseRunIdT = Aws::String>
    void SetTestCaseRunId(TestCaseRunIdT&& value) { m_testCaseRunIdHasBeenSet = true; m_testCaseRunId = std::forward<TestCaseRunIdT>(value); }
    template<typename TestCaseRunIdT = Aws::String>
    TestCaseRun& WithTestCaseRunId(TestCaseRunIdT&& value) { SetTestCaseRunId(std::forward<TestCaseRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the test case run definition ID.</p>
     */
    inline const Aws::String& GetTestCaseDefinitionId() const { return m_testCaseDefinitionId; }
    inline bool TestCaseDefinitionIdHasBeenSet() const { return m_testCaseDefinitionIdHasBeenSet; }
    template<typename TestCaseDefinitionIdT = Aws::String>
    void SetTestCaseDefinitionId(TestCaseDefinitionIdT&& value) { m_testCaseDefinitionIdHasBeenSet = true; m_testCaseDefinitionId = std::forward<TestCaseDefinitionIdT>(value); }
    template<typename TestCaseDefinitionIdT = Aws::String>
    TestCaseRun& WithTestCaseDefinitionId(TestCaseDefinitionIdT&& value) { SetTestCaseDefinitionId(std::forward<TestCaseDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the test case run definition name.</p>
     */
    inline const Aws::String& GetTestCaseDefinitionName() const { return m_testCaseDefinitionName; }
    inline bool TestCaseDefinitionNameHasBeenSet() const { return m_testCaseDefinitionNameHasBeenSet; }
    template<typename TestCaseDefinitionNameT = Aws::String>
    void SetTestCaseDefinitionName(TestCaseDefinitionNameT&& value) { m_testCaseDefinitionNameHasBeenSet = true; m_testCaseDefinitionName = std::forward<TestCaseDefinitionNameT>(value); }
    template<typename TestCaseDefinitionNameT = Aws::String>
    TestCaseRun& WithTestCaseDefinitionName(TestCaseDefinitionNameT&& value) { SetTestCaseDefinitionName(std::forward<TestCaseDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the test case run status. Status is one of the following:</p> <ul>
     * <li> <p> <code>PASS</code>: Test passed.</p> </li> <li> <p> <code>FAIL</code>:
     * Test failed.</p> </li> <li> <p> <code>PENDING</code>: Test has not started
     * running but is scheduled.</p> </li> <li> <p> <code>RUNNING</code>: Test is
     * running.</p> </li> <li> <p> <code>STOPPING</code>: Test is performing cleanup
     * steps. You will see this status only if you stop a suite run.</p> </li> <li> <p>
     * <code>STOPPED</code> Test is stopped. You will see this status only if you stop
     * a suite run.</p> </li> <li> <p> <code>PASS_WITH_WARNINGS</code>: Test passed
     * with warnings.</p> </li> <li> <p> <code>ERORR</code>: Test faced an error when
     * running due to an internal issue.</p> </li> </ul>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline TestCaseRun& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides test case run start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    TestCaseRun& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides test case run end time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    TestCaseRun& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides test case run log URL.</p>
     */
    inline const Aws::String& GetLogUrl() const { return m_logUrl; }
    inline bool LogUrlHasBeenSet() const { return m_logUrlHasBeenSet; }
    template<typename LogUrlT = Aws::String>
    void SetLogUrl(LogUrlT&& value) { m_logUrlHasBeenSet = true; m_logUrl = std::forward<LogUrlT>(value); }
    template<typename LogUrlT = Aws::String>
    TestCaseRun& WithLogUrl(LogUrlT&& value) { SetLogUrl(std::forward<LogUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides test case run warnings.</p>
     */
    inline const Aws::String& GetWarnings() const { return m_warnings; }
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }
    template<typename WarningsT = Aws::String>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::String>
    TestCaseRun& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides test case run failure result.</p>
     */
    inline const Aws::String& GetFailure() const { return m_failure; }
    inline bool FailureHasBeenSet() const { return m_failureHasBeenSet; }
    template<typename FailureT = Aws::String>
    void SetFailure(FailureT&& value) { m_failureHasBeenSet = true; m_failure = std::forward<FailureT>(value); }
    template<typename FailureT = Aws::String>
    TestCaseRun& WithFailure(FailureT&& value) { SetFailure(std::forward<FailureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides the test scenarios for the test case run. </p>
     */
    inline const Aws::Vector<TestCaseScenario>& GetTestScenarios() const { return m_testScenarios; }
    inline bool TestScenariosHasBeenSet() const { return m_testScenariosHasBeenSet; }
    template<typename TestScenariosT = Aws::Vector<TestCaseScenario>>
    void SetTestScenarios(TestScenariosT&& value) { m_testScenariosHasBeenSet = true; m_testScenarios = std::forward<TestScenariosT>(value); }
    template<typename TestScenariosT = Aws::Vector<TestCaseScenario>>
    TestCaseRun& WithTestScenarios(TestScenariosT&& value) { SetTestScenarios(std::forward<TestScenariosT>(value)); return *this;}
    template<typename TestScenariosT = TestCaseScenario>
    TestCaseRun& AddTestScenarios(TestScenariosT&& value) { m_testScenariosHasBeenSet = true; m_testScenarios.emplace_back(std::forward<TestScenariosT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_testCaseRunId;
    bool m_testCaseRunIdHasBeenSet = false;

    Aws::String m_testCaseDefinitionId;
    bool m_testCaseDefinitionIdHasBeenSet = false;

    Aws::String m_testCaseDefinitionName;
    bool m_testCaseDefinitionNameHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_logUrl;
    bool m_logUrlHasBeenSet = false;

    Aws::String m_warnings;
    bool m_warningsHasBeenSet = false;

    Aws::String m_failure;
    bool m_failureHasBeenSet = false;

    Aws::Vector<TestCaseScenario> m_testScenarios;
    bool m_testScenariosHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
