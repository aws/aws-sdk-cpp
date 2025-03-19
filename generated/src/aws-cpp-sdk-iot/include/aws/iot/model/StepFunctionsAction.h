/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Starts execution of a Step Functions state machine.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StepFunctionsAction">AWS
   * API Reference</a></p>
   */
  class StepFunctionsAction
  {
  public:
    AWS_IOT_API StepFunctionsAction() = default;
    AWS_IOT_API StepFunctionsAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API StepFunctionsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>(Optional) A name will be given to the state machine execution consisting of
     * this prefix followed by a UUID. Step Functions automatically creates a unique
     * name for each state machine execution if one is not provided.</p>
     */
    inline const Aws::String& GetExecutionNamePrefix() const { return m_executionNamePrefix; }
    inline bool ExecutionNamePrefixHasBeenSet() const { return m_executionNamePrefixHasBeenSet; }
    template<typename ExecutionNamePrefixT = Aws::String>
    void SetExecutionNamePrefix(ExecutionNamePrefixT&& value) { m_executionNamePrefixHasBeenSet = true; m_executionNamePrefix = std::forward<ExecutionNamePrefixT>(value); }
    template<typename ExecutionNamePrefixT = Aws::String>
    StepFunctionsAction& WithExecutionNamePrefix(ExecutionNamePrefixT&& value) { SetExecutionNamePrefix(std::forward<ExecutionNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Step Functions state machine whose execution will be
     * started.</p>
     */
    inline const Aws::String& GetStateMachineName() const { return m_stateMachineName; }
    inline bool StateMachineNameHasBeenSet() const { return m_stateMachineNameHasBeenSet; }
    template<typename StateMachineNameT = Aws::String>
    void SetStateMachineName(StateMachineNameT&& value) { m_stateMachineNameHasBeenSet = true; m_stateMachineName = std::forward<StateMachineNameT>(value); }
    template<typename StateMachineNameT = Aws::String>
    StepFunctionsAction& WithStateMachineName(StateMachineNameT&& value) { SetStateMachineName(std::forward<StateMachineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that grants IoT permission to start execution of a state
     * machine ("Action":"states:StartExecution").</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    StepFunctionsAction& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionNamePrefix;
    bool m_executionNamePrefixHasBeenSet = false;

    Aws::String m_stateMachineName;
    bool m_stateMachineNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
