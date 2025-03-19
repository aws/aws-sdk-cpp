/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotdeviceadvisor/model/TestCaseScenarioType.h>
#include <aws/iotdeviceadvisor/model/TestCaseScenarioStatus.h>
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
   * <p>Provides test case scenario.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/TestCaseScenario">AWS
   * API Reference</a></p>
   */
  class TestCaseScenario
  {
  public:
    AWS_IOTDEVICEADVISOR_API TestCaseScenario() = default;
    AWS_IOTDEVICEADVISOR_API TestCaseScenario(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API TestCaseScenario& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides test case scenario ID.</p>
     */
    inline const Aws::String& GetTestCaseScenarioId() const { return m_testCaseScenarioId; }
    inline bool TestCaseScenarioIdHasBeenSet() const { return m_testCaseScenarioIdHasBeenSet; }
    template<typename TestCaseScenarioIdT = Aws::String>
    void SetTestCaseScenarioId(TestCaseScenarioIdT&& value) { m_testCaseScenarioIdHasBeenSet = true; m_testCaseScenarioId = std::forward<TestCaseScenarioIdT>(value); }
    template<typename TestCaseScenarioIdT = Aws::String>
    TestCaseScenario& WithTestCaseScenarioId(TestCaseScenarioIdT&& value) { SetTestCaseScenarioId(std::forward<TestCaseScenarioIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides test case scenario type. Type is one of the following:</p> <ul> <li>
     * <p>Advanced</p> </li> <li> <p>Basic</p> </li> </ul>
     */
    inline TestCaseScenarioType GetTestCaseScenarioType() const { return m_testCaseScenarioType; }
    inline bool TestCaseScenarioTypeHasBeenSet() const { return m_testCaseScenarioTypeHasBeenSet; }
    inline void SetTestCaseScenarioType(TestCaseScenarioType value) { m_testCaseScenarioTypeHasBeenSet = true; m_testCaseScenarioType = value; }
    inline TestCaseScenario& WithTestCaseScenarioType(TestCaseScenarioType value) { SetTestCaseScenarioType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the test case scenario status. Status is one of the following:</p>
     * <ul> <li> <p> <code>PASS</code>: Test passed.</p> </li> <li> <p>
     * <code>FAIL</code>: Test failed.</p> </li> <li> <p> <code>PENDING</code>: Test
     * has not started running but is scheduled.</p> </li> <li> <p>
     * <code>RUNNING</code>: Test is running.</p> </li> <li> <p> <code>STOPPING</code>:
     * Test is performing cleanup steps. You will see this status only if you stop a
     * suite run.</p> </li> <li> <p> <code>STOPPED</code> Test is stopped. You will see
     * this status only if you stop a suite run.</p> </li> <li> <p>
     * <code>PASS_WITH_WARNINGS</code>: Test passed with warnings.</p> </li> <li> <p>
     * <code>ERORR</code>: Test faced an error when running due to an internal
     * issue.</p> </li> </ul>
     */
    inline TestCaseScenarioStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TestCaseScenarioStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TestCaseScenario& WithStatus(TestCaseScenarioStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides test case scenario failure result.</p>
     */
    inline const Aws::String& GetFailure() const { return m_failure; }
    inline bool FailureHasBeenSet() const { return m_failureHasBeenSet; }
    template<typename FailureT = Aws::String>
    void SetFailure(FailureT&& value) { m_failureHasBeenSet = true; m_failure = std::forward<FailureT>(value); }
    template<typename FailureT = Aws::String>
    TestCaseScenario& WithFailure(FailureT&& value) { SetFailure(std::forward<FailureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides test case scenario system messages if any.</p>
     */
    inline const Aws::String& GetSystemMessage() const { return m_systemMessage; }
    inline bool SystemMessageHasBeenSet() const { return m_systemMessageHasBeenSet; }
    template<typename SystemMessageT = Aws::String>
    void SetSystemMessage(SystemMessageT&& value) { m_systemMessageHasBeenSet = true; m_systemMessage = std::forward<SystemMessageT>(value); }
    template<typename SystemMessageT = Aws::String>
    TestCaseScenario& WithSystemMessage(SystemMessageT&& value) { SetSystemMessage(std::forward<SystemMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testCaseScenarioId;
    bool m_testCaseScenarioIdHasBeenSet = false;

    TestCaseScenarioType m_testCaseScenarioType{TestCaseScenarioType::NOT_SET};
    bool m_testCaseScenarioTypeHasBeenSet = false;

    TestCaseScenarioStatus m_status{TestCaseScenarioStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failure;
    bool m_failureHasBeenSet = false;

    Aws::String m_systemMessage;
    bool m_systemMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
