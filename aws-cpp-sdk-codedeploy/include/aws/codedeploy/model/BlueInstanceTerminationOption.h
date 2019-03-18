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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/InstanceAction.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about whether instances in the original environment are
   * terminated when a blue/green deployment is successful.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BlueInstanceTerminationOption">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API BlueInstanceTerminationOption
  {
  public:
    BlueInstanceTerminationOption();
    BlueInstanceTerminationOption(Aws::Utils::Json::JsonView jsonValue);
    BlueInstanceTerminationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to take on instances in the original environment after a
     * successful blue/green deployment.</p> <ul> <li> <p>TERMINATE: Instances are
     * terminated after a specified wait time.</p> </li> <li> <p>KEEP_ALIVE: Instances
     * are left running after they are deregistered from the load balancer and removed
     * from the deployment group.</p> </li> </ul>
     */
    inline const InstanceAction& GetAction() const{ return m_action; }

    /**
     * <p>The action to take on instances in the original environment after a
     * successful blue/green deployment.</p> <ul> <li> <p>TERMINATE: Instances are
     * terminated after a specified wait time.</p> </li> <li> <p>KEEP_ALIVE: Instances
     * are left running after they are deregistered from the load balancer and removed
     * from the deployment group.</p> </li> </ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to take on instances in the original environment after a
     * successful blue/green deployment.</p> <ul> <li> <p>TERMINATE: Instances are
     * terminated after a specified wait time.</p> </li> <li> <p>KEEP_ALIVE: Instances
     * are left running after they are deregistered from the load balancer and removed
     * from the deployment group.</p> </li> </ul>
     */
    inline void SetAction(const InstanceAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to take on instances in the original environment after a
     * successful blue/green deployment.</p> <ul> <li> <p>TERMINATE: Instances are
     * terminated after a specified wait time.</p> </li> <li> <p>KEEP_ALIVE: Instances
     * are left running after they are deregistered from the load balancer and removed
     * from the deployment group.</p> </li> </ul>
     */
    inline void SetAction(InstanceAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to take on instances in the original environment after a
     * successful blue/green deployment.</p> <ul> <li> <p>TERMINATE: Instances are
     * terminated after a specified wait time.</p> </li> <li> <p>KEEP_ALIVE: Instances
     * are left running after they are deregistered from the load balancer and removed
     * from the deployment group.</p> </li> </ul>
     */
    inline BlueInstanceTerminationOption& WithAction(const InstanceAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action to take on instances in the original environment after a
     * successful blue/green deployment.</p> <ul> <li> <p>TERMINATE: Instances are
     * terminated after a specified wait time.</p> </li> <li> <p>KEEP_ALIVE: Instances
     * are left running after they are deregistered from the load balancer and removed
     * from the deployment group.</p> </li> </ul>
     */
    inline BlueInstanceTerminationOption& WithAction(InstanceAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The number of minutes to wait after a successful blue/green deployment before
     * terminating instances from the original environment. The maximum setting is 2880
     * minutes (2 days).</p>
     */
    inline int GetTerminationWaitTimeInMinutes() const{ return m_terminationWaitTimeInMinutes; }

    /**
     * <p>The number of minutes to wait after a successful blue/green deployment before
     * terminating instances from the original environment. The maximum setting is 2880
     * minutes (2 days).</p>
     */
    inline bool TerminationWaitTimeInMinutesHasBeenSet() const { return m_terminationWaitTimeInMinutesHasBeenSet; }

    /**
     * <p>The number of minutes to wait after a successful blue/green deployment before
     * terminating instances from the original environment. The maximum setting is 2880
     * minutes (2 days).</p>
     */
    inline void SetTerminationWaitTimeInMinutes(int value) { m_terminationWaitTimeInMinutesHasBeenSet = true; m_terminationWaitTimeInMinutes = value; }

    /**
     * <p>The number of minutes to wait after a successful blue/green deployment before
     * terminating instances from the original environment. The maximum setting is 2880
     * minutes (2 days).</p>
     */
    inline BlueInstanceTerminationOption& WithTerminationWaitTimeInMinutes(int value) { SetTerminationWaitTimeInMinutes(value); return *this;}

  private:

    InstanceAction m_action;
    bool m_actionHasBeenSet;

    int m_terminationWaitTimeInMinutes;
    bool m_terminationWaitTimeInMinutesHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
