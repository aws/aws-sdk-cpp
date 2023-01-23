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
    AWS_IOTDEVICEADVISOR_API TestCaseScenario();
    AWS_IOTDEVICEADVISOR_API TestCaseScenario(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API TestCaseScenario& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides test case scenario ID.</p>
     */
    inline const Aws::String& GetTestCaseScenarioId() const{ return m_testCaseScenarioId; }

    /**
     * <p>Provides test case scenario ID.</p>
     */
    inline bool TestCaseScenarioIdHasBeenSet() const { return m_testCaseScenarioIdHasBeenSet; }

    /**
     * <p>Provides test case scenario ID.</p>
     */
    inline void SetTestCaseScenarioId(const Aws::String& value) { m_testCaseScenarioIdHasBeenSet = true; m_testCaseScenarioId = value; }

    /**
     * <p>Provides test case scenario ID.</p>
     */
    inline void SetTestCaseScenarioId(Aws::String&& value) { m_testCaseScenarioIdHasBeenSet = true; m_testCaseScenarioId = std::move(value); }

    /**
     * <p>Provides test case scenario ID.</p>
     */
    inline void SetTestCaseScenarioId(const char* value) { m_testCaseScenarioIdHasBeenSet = true; m_testCaseScenarioId.assign(value); }

    /**
     * <p>Provides test case scenario ID.</p>
     */
    inline TestCaseScenario& WithTestCaseScenarioId(const Aws::String& value) { SetTestCaseScenarioId(value); return *this;}

    /**
     * <p>Provides test case scenario ID.</p>
     */
    inline TestCaseScenario& WithTestCaseScenarioId(Aws::String&& value) { SetTestCaseScenarioId(std::move(value)); return *this;}

    /**
     * <p>Provides test case scenario ID.</p>
     */
    inline TestCaseScenario& WithTestCaseScenarioId(const char* value) { SetTestCaseScenarioId(value); return *this;}


    /**
     * <p>Provides test case scenario type. Type is one of the following:</p> <ul> <li>
     * <p>Advanced</p> </li> <li> <p>Basic</p> </li> </ul>
     */
    inline const TestCaseScenarioType& GetTestCaseScenarioType() const{ return m_testCaseScenarioType; }

    /**
     * <p>Provides test case scenario type. Type is one of the following:</p> <ul> <li>
     * <p>Advanced</p> </li> <li> <p>Basic</p> </li> </ul>
     */
    inline bool TestCaseScenarioTypeHasBeenSet() const { return m_testCaseScenarioTypeHasBeenSet; }

    /**
     * <p>Provides test case scenario type. Type is one of the following:</p> <ul> <li>
     * <p>Advanced</p> </li> <li> <p>Basic</p> </li> </ul>
     */
    inline void SetTestCaseScenarioType(const TestCaseScenarioType& value) { m_testCaseScenarioTypeHasBeenSet = true; m_testCaseScenarioType = value; }

    /**
     * <p>Provides test case scenario type. Type is one of the following:</p> <ul> <li>
     * <p>Advanced</p> </li> <li> <p>Basic</p> </li> </ul>
     */
    inline void SetTestCaseScenarioType(TestCaseScenarioType&& value) { m_testCaseScenarioTypeHasBeenSet = true; m_testCaseScenarioType = std::move(value); }

    /**
     * <p>Provides test case scenario type. Type is one of the following:</p> <ul> <li>
     * <p>Advanced</p> </li> <li> <p>Basic</p> </li> </ul>
     */
    inline TestCaseScenario& WithTestCaseScenarioType(const TestCaseScenarioType& value) { SetTestCaseScenarioType(value); return *this;}

    /**
     * <p>Provides test case scenario type. Type is one of the following:</p> <ul> <li>
     * <p>Advanced</p> </li> <li> <p>Basic</p> </li> </ul>
     */
    inline TestCaseScenario& WithTestCaseScenarioType(TestCaseScenarioType&& value) { SetTestCaseScenarioType(std::move(value)); return *this;}


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
    inline const TestCaseScenarioStatus& GetStatus() const{ return m_status; }

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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const TestCaseScenarioStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(TestCaseScenarioStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline TestCaseScenario& WithStatus(const TestCaseScenarioStatus& value) { SetStatus(value); return *this;}

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
    inline TestCaseScenario& WithStatus(TestCaseScenarioStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Provides test case scenario failure result.</p>
     */
    inline const Aws::String& GetFailure() const{ return m_failure; }

    /**
     * <p>Provides test case scenario failure result.</p>
     */
    inline bool FailureHasBeenSet() const { return m_failureHasBeenSet; }

    /**
     * <p>Provides test case scenario failure result.</p>
     */
    inline void SetFailure(const Aws::String& value) { m_failureHasBeenSet = true; m_failure = value; }

    /**
     * <p>Provides test case scenario failure result.</p>
     */
    inline void SetFailure(Aws::String&& value) { m_failureHasBeenSet = true; m_failure = std::move(value); }

    /**
     * <p>Provides test case scenario failure result.</p>
     */
    inline void SetFailure(const char* value) { m_failureHasBeenSet = true; m_failure.assign(value); }

    /**
     * <p>Provides test case scenario failure result.</p>
     */
    inline TestCaseScenario& WithFailure(const Aws::String& value) { SetFailure(value); return *this;}

    /**
     * <p>Provides test case scenario failure result.</p>
     */
    inline TestCaseScenario& WithFailure(Aws::String&& value) { SetFailure(std::move(value)); return *this;}

    /**
     * <p>Provides test case scenario failure result.</p>
     */
    inline TestCaseScenario& WithFailure(const char* value) { SetFailure(value); return *this;}


    /**
     * <p> </p>
     */
    inline const Aws::String& GetSystemMessage() const{ return m_systemMessage; }

    /**
     * <p> </p>
     */
    inline bool SystemMessageHasBeenSet() const { return m_systemMessageHasBeenSet; }

    /**
     * <p> </p>
     */
    inline void SetSystemMessage(const Aws::String& value) { m_systemMessageHasBeenSet = true; m_systemMessage = value; }

    /**
     * <p> </p>
     */
    inline void SetSystemMessage(Aws::String&& value) { m_systemMessageHasBeenSet = true; m_systemMessage = std::move(value); }

    /**
     * <p> </p>
     */
    inline void SetSystemMessage(const char* value) { m_systemMessageHasBeenSet = true; m_systemMessage.assign(value); }

    /**
     * <p> </p>
     */
    inline TestCaseScenario& WithSystemMessage(const Aws::String& value) { SetSystemMessage(value); return *this;}

    /**
     * <p> </p>
     */
    inline TestCaseScenario& WithSystemMessage(Aws::String&& value) { SetSystemMessage(std::move(value)); return *this;}

    /**
     * <p> </p>
     */
    inline TestCaseScenario& WithSystemMessage(const char* value) { SetSystemMessage(value); return *this;}

  private:

    Aws::String m_testCaseScenarioId;
    bool m_testCaseScenarioIdHasBeenSet = false;

    TestCaseScenarioType m_testCaseScenarioType;
    bool m_testCaseScenarioTypeHasBeenSet = false;

    TestCaseScenarioStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failure;
    bool m_failureHasBeenSet = false;

    Aws::String m_systemMessage;
    bool m_systemMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
