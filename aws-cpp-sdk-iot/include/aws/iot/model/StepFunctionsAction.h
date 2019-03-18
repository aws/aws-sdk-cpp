/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API StepFunctionsAction
  {
  public:
    StepFunctionsAction();
    StepFunctionsAction(Aws::Utils::Json::JsonView jsonValue);
    StepFunctionsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>(Optional) A name will be given to the state machine execution consisting of
     * this prefix followed by a UUID. Step Functions automatically creates a unique
     * name for each state machine execution if one is not provided.</p>
     */
    inline const Aws::String& GetExecutionNamePrefix() const{ return m_executionNamePrefix; }

    /**
     * <p>(Optional) A name will be given to the state machine execution consisting of
     * this prefix followed by a UUID. Step Functions automatically creates a unique
     * name for each state machine execution if one is not provided.</p>
     */
    inline bool ExecutionNamePrefixHasBeenSet() const { return m_executionNamePrefixHasBeenSet; }

    /**
     * <p>(Optional) A name will be given to the state machine execution consisting of
     * this prefix followed by a UUID. Step Functions automatically creates a unique
     * name for each state machine execution if one is not provided.</p>
     */
    inline void SetExecutionNamePrefix(const Aws::String& value) { m_executionNamePrefixHasBeenSet = true; m_executionNamePrefix = value; }

    /**
     * <p>(Optional) A name will be given to the state machine execution consisting of
     * this prefix followed by a UUID. Step Functions automatically creates a unique
     * name for each state machine execution if one is not provided.</p>
     */
    inline void SetExecutionNamePrefix(Aws::String&& value) { m_executionNamePrefixHasBeenSet = true; m_executionNamePrefix = std::move(value); }

    /**
     * <p>(Optional) A name will be given to the state machine execution consisting of
     * this prefix followed by a UUID. Step Functions automatically creates a unique
     * name for each state machine execution if one is not provided.</p>
     */
    inline void SetExecutionNamePrefix(const char* value) { m_executionNamePrefixHasBeenSet = true; m_executionNamePrefix.assign(value); }

    /**
     * <p>(Optional) A name will be given to the state machine execution consisting of
     * this prefix followed by a UUID. Step Functions automatically creates a unique
     * name for each state machine execution if one is not provided.</p>
     */
    inline StepFunctionsAction& WithExecutionNamePrefix(const Aws::String& value) { SetExecutionNamePrefix(value); return *this;}

    /**
     * <p>(Optional) A name will be given to the state machine execution consisting of
     * this prefix followed by a UUID. Step Functions automatically creates a unique
     * name for each state machine execution if one is not provided.</p>
     */
    inline StepFunctionsAction& WithExecutionNamePrefix(Aws::String&& value) { SetExecutionNamePrefix(std::move(value)); return *this;}

    /**
     * <p>(Optional) A name will be given to the state machine execution consisting of
     * this prefix followed by a UUID. Step Functions automatically creates a unique
     * name for each state machine execution if one is not provided.</p>
     */
    inline StepFunctionsAction& WithExecutionNamePrefix(const char* value) { SetExecutionNamePrefix(value); return *this;}


    /**
     * <p>The name of the Step Functions state machine whose execution will be
     * started.</p>
     */
    inline const Aws::String& GetStateMachineName() const{ return m_stateMachineName; }

    /**
     * <p>The name of the Step Functions state machine whose execution will be
     * started.</p>
     */
    inline bool StateMachineNameHasBeenSet() const { return m_stateMachineNameHasBeenSet; }

    /**
     * <p>The name of the Step Functions state machine whose execution will be
     * started.</p>
     */
    inline void SetStateMachineName(const Aws::String& value) { m_stateMachineNameHasBeenSet = true; m_stateMachineName = value; }

    /**
     * <p>The name of the Step Functions state machine whose execution will be
     * started.</p>
     */
    inline void SetStateMachineName(Aws::String&& value) { m_stateMachineNameHasBeenSet = true; m_stateMachineName = std::move(value); }

    /**
     * <p>The name of the Step Functions state machine whose execution will be
     * started.</p>
     */
    inline void SetStateMachineName(const char* value) { m_stateMachineNameHasBeenSet = true; m_stateMachineName.assign(value); }

    /**
     * <p>The name of the Step Functions state machine whose execution will be
     * started.</p>
     */
    inline StepFunctionsAction& WithStateMachineName(const Aws::String& value) { SetStateMachineName(value); return *this;}

    /**
     * <p>The name of the Step Functions state machine whose execution will be
     * started.</p>
     */
    inline StepFunctionsAction& WithStateMachineName(Aws::String&& value) { SetStateMachineName(std::move(value)); return *this;}

    /**
     * <p>The name of the Step Functions state machine whose execution will be
     * started.</p>
     */
    inline StepFunctionsAction& WithStateMachineName(const char* value) { SetStateMachineName(value); return *this;}


    /**
     * <p>The ARN of the role that grants IoT permission to start execution of a state
     * machine ("Action":"states:StartExecution").</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that grants IoT permission to start execution of a state
     * machine ("Action":"states:StartExecution").</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that grants IoT permission to start execution of a state
     * machine ("Action":"states:StartExecution").</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that grants IoT permission to start execution of a state
     * machine ("Action":"states:StartExecution").</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that grants IoT permission to start execution of a state
     * machine ("Action":"states:StartExecution").</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that grants IoT permission to start execution of a state
     * machine ("Action":"states:StartExecution").</p>
     */
    inline StepFunctionsAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that grants IoT permission to start execution of a state
     * machine ("Action":"states:StartExecution").</p>
     */
    inline StepFunctionsAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that grants IoT permission to start execution of a state
     * machine ("Action":"states:StartExecution").</p>
     */
    inline StepFunctionsAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_executionNamePrefix;
    bool m_executionNamePrefixHasBeenSet;

    Aws::String m_stateMachineName;
    bool m_stateMachineNameHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
