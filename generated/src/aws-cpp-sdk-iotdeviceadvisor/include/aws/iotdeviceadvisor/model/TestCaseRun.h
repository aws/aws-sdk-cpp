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
    AWS_IOTDEVICEADVISOR_API TestCaseRun();
    AWS_IOTDEVICEADVISOR_API TestCaseRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API TestCaseRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the test case run ID.</p>
     */
    inline const Aws::String& GetTestCaseRunId() const{ return m_testCaseRunId; }
    inline bool TestCaseRunIdHasBeenSet() const { return m_testCaseRunIdHasBeenSet; }
    inline void SetTestCaseRunId(const Aws::String& value) { m_testCaseRunIdHasBeenSet = true; m_testCaseRunId = value; }
    inline void SetTestCaseRunId(Aws::String&& value) { m_testCaseRunIdHasBeenSet = true; m_testCaseRunId = std::move(value); }
    inline void SetTestCaseRunId(const char* value) { m_testCaseRunIdHasBeenSet = true; m_testCaseRunId.assign(value); }
    inline TestCaseRun& WithTestCaseRunId(const Aws::String& value) { SetTestCaseRunId(value); return *this;}
    inline TestCaseRun& WithTestCaseRunId(Aws::String&& value) { SetTestCaseRunId(std::move(value)); return *this;}
    inline TestCaseRun& WithTestCaseRunId(const char* value) { SetTestCaseRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the test case run definition ID.</p>
     */
    inline const Aws::String& GetTestCaseDefinitionId() const{ return m_testCaseDefinitionId; }
    inline bool TestCaseDefinitionIdHasBeenSet() const { return m_testCaseDefinitionIdHasBeenSet; }
    inline void SetTestCaseDefinitionId(const Aws::String& value) { m_testCaseDefinitionIdHasBeenSet = true; m_testCaseDefinitionId = value; }
    inline void SetTestCaseDefinitionId(Aws::String&& value) { m_testCaseDefinitionIdHasBeenSet = true; m_testCaseDefinitionId = std::move(value); }
    inline void SetTestCaseDefinitionId(const char* value) { m_testCaseDefinitionIdHasBeenSet = true; m_testCaseDefinitionId.assign(value); }
    inline TestCaseRun& WithTestCaseDefinitionId(const Aws::String& value) { SetTestCaseDefinitionId(value); return *this;}
    inline TestCaseRun& WithTestCaseDefinitionId(Aws::String&& value) { SetTestCaseDefinitionId(std::move(value)); return *this;}
    inline TestCaseRun& WithTestCaseDefinitionId(const char* value) { SetTestCaseDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the test case run definition name.</p>
     */
    inline const Aws::String& GetTestCaseDefinitionName() const{ return m_testCaseDefinitionName; }
    inline bool TestCaseDefinitionNameHasBeenSet() const { return m_testCaseDefinitionNameHasBeenSet; }
    inline void SetTestCaseDefinitionName(const Aws::String& value) { m_testCaseDefinitionNameHasBeenSet = true; m_testCaseDefinitionName = value; }
    inline void SetTestCaseDefinitionName(Aws::String&& value) { m_testCaseDefinitionNameHasBeenSet = true; m_testCaseDefinitionName = std::move(value); }
    inline void SetTestCaseDefinitionName(const char* value) { m_testCaseDefinitionNameHasBeenSet = true; m_testCaseDefinitionName.assign(value); }
    inline TestCaseRun& WithTestCaseDefinitionName(const Aws::String& value) { SetTestCaseDefinitionName(value); return *this;}
    inline TestCaseRun& WithTestCaseDefinitionName(Aws::String&& value) { SetTestCaseDefinitionName(std::move(value)); return *this;}
    inline TestCaseRun& WithTestCaseDefinitionName(const char* value) { SetTestCaseDefinitionName(value); return *this;}
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
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TestCaseRun& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline TestCaseRun& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides test case run start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline TestCaseRun& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline TestCaseRun& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides test case run end time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline TestCaseRun& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline TestCaseRun& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides test case run log URL.</p>
     */
    inline const Aws::String& GetLogUrl() const{ return m_logUrl; }
    inline bool LogUrlHasBeenSet() const { return m_logUrlHasBeenSet; }
    inline void SetLogUrl(const Aws::String& value) { m_logUrlHasBeenSet = true; m_logUrl = value; }
    inline void SetLogUrl(Aws::String&& value) { m_logUrlHasBeenSet = true; m_logUrl = std::move(value); }
    inline void SetLogUrl(const char* value) { m_logUrlHasBeenSet = true; m_logUrl.assign(value); }
    inline TestCaseRun& WithLogUrl(const Aws::String& value) { SetLogUrl(value); return *this;}
    inline TestCaseRun& WithLogUrl(Aws::String&& value) { SetLogUrl(std::move(value)); return *this;}
    inline TestCaseRun& WithLogUrl(const char* value) { SetLogUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides test case run warnings.</p>
     */
    inline const Aws::String& GetWarnings() const{ return m_warnings; }
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }
    inline void SetWarnings(const Aws::String& value) { m_warningsHasBeenSet = true; m_warnings = value; }
    inline void SetWarnings(Aws::String&& value) { m_warningsHasBeenSet = true; m_warnings = std::move(value); }
    inline void SetWarnings(const char* value) { m_warningsHasBeenSet = true; m_warnings.assign(value); }
    inline TestCaseRun& WithWarnings(const Aws::String& value) { SetWarnings(value); return *this;}
    inline TestCaseRun& WithWarnings(Aws::String&& value) { SetWarnings(std::move(value)); return *this;}
    inline TestCaseRun& WithWarnings(const char* value) { SetWarnings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides test case run failure result.</p>
     */
    inline const Aws::String& GetFailure() const{ return m_failure; }
    inline bool FailureHasBeenSet() const { return m_failureHasBeenSet; }
    inline void SetFailure(const Aws::String& value) { m_failureHasBeenSet = true; m_failure = value; }
    inline void SetFailure(Aws::String&& value) { m_failureHasBeenSet = true; m_failure = std::move(value); }
    inline void SetFailure(const char* value) { m_failureHasBeenSet = true; m_failure.assign(value); }
    inline TestCaseRun& WithFailure(const Aws::String& value) { SetFailure(value); return *this;}
    inline TestCaseRun& WithFailure(Aws::String&& value) { SetFailure(std::move(value)); return *this;}
    inline TestCaseRun& WithFailure(const char* value) { SetFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides the test scenarios for the test case run. </p>
     */
    inline const Aws::Vector<TestCaseScenario>& GetTestScenarios() const{ return m_testScenarios; }
    inline bool TestScenariosHasBeenSet() const { return m_testScenariosHasBeenSet; }
    inline void SetTestScenarios(const Aws::Vector<TestCaseScenario>& value) { m_testScenariosHasBeenSet = true; m_testScenarios = value; }
    inline void SetTestScenarios(Aws::Vector<TestCaseScenario>&& value) { m_testScenariosHasBeenSet = true; m_testScenarios = std::move(value); }
    inline TestCaseRun& WithTestScenarios(const Aws::Vector<TestCaseScenario>& value) { SetTestScenarios(value); return *this;}
    inline TestCaseRun& WithTestScenarios(Aws::Vector<TestCaseScenario>&& value) { SetTestScenarios(std::move(value)); return *this;}
    inline TestCaseRun& AddTestScenarios(const TestCaseScenario& value) { m_testScenariosHasBeenSet = true; m_testScenarios.push_back(value); return *this; }
    inline TestCaseRun& AddTestScenarios(TestCaseScenario&& value) { m_testScenariosHasBeenSet = true; m_testScenarios.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_testCaseRunId;
    bool m_testCaseRunIdHasBeenSet = false;

    Aws::String m_testCaseDefinitionId;
    bool m_testCaseDefinitionIdHasBeenSet = false;

    Aws::String m_testCaseDefinitionName;
    bool m_testCaseDefinitionNameHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
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
