/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type is used as a response element in the
   * <a>PreviewAgentsForResourceGroup</a> action.</p>
   */
  class AWS_INSPECTOR_API AgentPreview
  {
  public:
    AgentPreview();
    AgentPreview(const Aws::Utils::Json::JsonValue& jsonValue);
    AgentPreview& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The id of the EC2 instance where the agent is intalled.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The id of the EC2 instance where the agent is intalled.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The id of the EC2 instance where the agent is intalled.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The id of the EC2 instance where the agent is intalled.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The id of the EC2 instance where the agent is intalled.</p>
     */
    inline AgentPreview& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The id of the EC2 instance where the agent is intalled.</p>
     */
    inline AgentPreview& WithAgentId(Aws::String&& value) { SetAgentId(value); return *this;}

    /**
     * <p>The id of the EC2 instance where the agent is intalled.</p>
     */
    inline AgentPreview& WithAgentId(const char* value) { SetAgentId(value); return *this;}

    /**
     * <p>The autoscaling group for the EC2 instance where the agent is installed.</p>
     */
    inline const Aws::String& GetAutoScalingGroup() const{ return m_autoScalingGroup; }

    /**
     * <p>The autoscaling group for the EC2 instance where the agent is installed.</p>
     */
    inline void SetAutoScalingGroup(const Aws::String& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = value; }

    /**
     * <p>The autoscaling group for the EC2 instance where the agent is installed.</p>
     */
    inline void SetAutoScalingGroup(Aws::String&& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = value; }

    /**
     * <p>The autoscaling group for the EC2 instance where the agent is installed.</p>
     */
    inline void SetAutoScalingGroup(const char* value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup.assign(value); }

    /**
     * <p>The autoscaling group for the EC2 instance where the agent is installed.</p>
     */
    inline AgentPreview& WithAutoScalingGroup(const Aws::String& value) { SetAutoScalingGroup(value); return *this;}

    /**
     * <p>The autoscaling group for the EC2 instance where the agent is installed.</p>
     */
    inline AgentPreview& WithAutoScalingGroup(Aws::String&& value) { SetAutoScalingGroup(value); return *this;}

    /**
     * <p>The autoscaling group for the EC2 instance where the agent is installed.</p>
     */
    inline AgentPreview& WithAutoScalingGroup(const char* value) { SetAutoScalingGroup(value); return *this;}

  private:
    Aws::String m_agentId;
    bool m_agentIdHasBeenSet;
    Aws::String m_autoScalingGroup;
    bool m_autoScalingGroupHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
