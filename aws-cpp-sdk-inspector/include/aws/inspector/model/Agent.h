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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/Telemetry.h>

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
   * <p>Contains information about an Inspector agent. This data type is used as a
   * response element in the <a>ListAssessmentAgents</a> action.</p>
   */
  class AWS_INSPECTOR_API Agent
  {
  public:
    Agent();
    Agent(const Aws::Utils::Json::JsonValue& jsonValue);
    Agent& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The EC2 instance ID where the agent is installed.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The EC2 instance ID where the agent is installed.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The EC2 instance ID where the agent is installed.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The EC2 instance ID where the agent is installed.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The EC2 instance ID where the agent is installed.</p>
     */
    inline Agent& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The EC2 instance ID where the agent is installed.</p>
     */
    inline Agent& WithAgentId(Aws::String&& value) { SetAgentId(value); return *this;}

    /**
     * <p>The EC2 instance ID where the agent is installed.</p>
     */
    inline Agent& WithAgentId(const char* value) { SetAgentId(value); return *this;}

    /**
     * <p>The ARN of the assessment that is associated with the agent.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }

    /**
     * <p>The ARN of the assessment that is associated with the agent.</p>
     */
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN of the assessment that is associated with the agent.</p>
     */
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN of the assessment that is associated with the agent.</p>
     */
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }

    /**
     * <p>The ARN of the assessment that is associated with the agent.</p>
     */
    inline Agent& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN of the assessment that is associated with the agent.</p>
     */
    inline Agent& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN of the assessment that is associated with the agent.</p>
     */
    inline Agent& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The current health state of the agent. Values can be set to <i>HEALTHY</i> or
     * <i>UNHEALTHY</i>.</p>
     */
    inline const Aws::String& GetAgentHealth() const{ return m_agentHealth; }

    /**
     * <p>The current health state of the agent. Values can be set to <i>HEALTHY</i> or
     * <i>UNHEALTHY</i>.</p>
     */
    inline void SetAgentHealth(const Aws::String& value) { m_agentHealthHasBeenSet = true; m_agentHealth = value; }

    /**
     * <p>The current health state of the agent. Values can be set to <i>HEALTHY</i> or
     * <i>UNHEALTHY</i>.</p>
     */
    inline void SetAgentHealth(Aws::String&& value) { m_agentHealthHasBeenSet = true; m_agentHealth = value; }

    /**
     * <p>The current health state of the agent. Values can be set to <i>HEALTHY</i> or
     * <i>UNHEALTHY</i>.</p>
     */
    inline void SetAgentHealth(const char* value) { m_agentHealthHasBeenSet = true; m_agentHealth.assign(value); }

    /**
     * <p>The current health state of the agent. Values can be set to <i>HEALTHY</i> or
     * <i>UNHEALTHY</i>.</p>
     */
    inline Agent& WithAgentHealth(const Aws::String& value) { SetAgentHealth(value); return *this;}

    /**
     * <p>The current health state of the agent. Values can be set to <i>HEALTHY</i> or
     * <i>UNHEALTHY</i>.</p>
     */
    inline Agent& WithAgentHealth(Aws::String&& value) { SetAgentHealth(value); return *this;}

    /**
     * <p>The current health state of the agent. Values can be set to <i>HEALTHY</i> or
     * <i>UNHEALTHY</i>.</p>
     */
    inline Agent& WithAgentHealth(const char* value) { SetAgentHealth(value); return *this;}

    /**
     * <p>The detailed health state of the agent. Values can be set to <i>RUNNING</i>,
     * <i>HEALTHY</i>, <i>UNHEALTHY</i>, <i>UNKNOWN</i>, <i>BLACKLISTED</i>,
     * <i>SHUTDOWN</i>, <i>THROTTLED</i>. </p>
     */
    inline const Aws::String& GetAgentHealthCode() const{ return m_agentHealthCode; }

    /**
     * <p>The detailed health state of the agent. Values can be set to <i>RUNNING</i>,
     * <i>HEALTHY</i>, <i>UNHEALTHY</i>, <i>UNKNOWN</i>, <i>BLACKLISTED</i>,
     * <i>SHUTDOWN</i>, <i>THROTTLED</i>. </p>
     */
    inline void SetAgentHealthCode(const Aws::String& value) { m_agentHealthCodeHasBeenSet = true; m_agentHealthCode = value; }

    /**
     * <p>The detailed health state of the agent. Values can be set to <i>RUNNING</i>,
     * <i>HEALTHY</i>, <i>UNHEALTHY</i>, <i>UNKNOWN</i>, <i>BLACKLISTED</i>,
     * <i>SHUTDOWN</i>, <i>THROTTLED</i>. </p>
     */
    inline void SetAgentHealthCode(Aws::String&& value) { m_agentHealthCodeHasBeenSet = true; m_agentHealthCode = value; }

    /**
     * <p>The detailed health state of the agent. Values can be set to <i>RUNNING</i>,
     * <i>HEALTHY</i>, <i>UNHEALTHY</i>, <i>UNKNOWN</i>, <i>BLACKLISTED</i>,
     * <i>SHUTDOWN</i>, <i>THROTTLED</i>. </p>
     */
    inline void SetAgentHealthCode(const char* value) { m_agentHealthCodeHasBeenSet = true; m_agentHealthCode.assign(value); }

    /**
     * <p>The detailed health state of the agent. Values can be set to <i>RUNNING</i>,
     * <i>HEALTHY</i>, <i>UNHEALTHY</i>, <i>UNKNOWN</i>, <i>BLACKLISTED</i>,
     * <i>SHUTDOWN</i>, <i>THROTTLED</i>. </p>
     */
    inline Agent& WithAgentHealthCode(const Aws::String& value) { SetAgentHealthCode(value); return *this;}

    /**
     * <p>The detailed health state of the agent. Values can be set to <i>RUNNING</i>,
     * <i>HEALTHY</i>, <i>UNHEALTHY</i>, <i>UNKNOWN</i>, <i>BLACKLISTED</i>,
     * <i>SHUTDOWN</i>, <i>THROTTLED</i>. </p>
     */
    inline Agent& WithAgentHealthCode(Aws::String&& value) { SetAgentHealthCode(value); return *this;}

    /**
     * <p>The detailed health state of the agent. Values can be set to <i>RUNNING</i>,
     * <i>HEALTHY</i>, <i>UNHEALTHY</i>, <i>UNKNOWN</i>, <i>BLACKLISTED</i>,
     * <i>SHUTDOWN</i>, <i>THROTTLED</i>. </p>
     */
    inline Agent& WithAgentHealthCode(const char* value) { SetAgentHealthCode(value); return *this;}

    /**
     * <p>The description for the agent health code.</p>
     */
    inline const Aws::String& GetAgentHealthDetails() const{ return m_agentHealthDetails; }

    /**
     * <p>The description for the agent health code.</p>
     */
    inline void SetAgentHealthDetails(const Aws::String& value) { m_agentHealthDetailsHasBeenSet = true; m_agentHealthDetails = value; }

    /**
     * <p>The description for the agent health code.</p>
     */
    inline void SetAgentHealthDetails(Aws::String&& value) { m_agentHealthDetailsHasBeenSet = true; m_agentHealthDetails = value; }

    /**
     * <p>The description for the agent health code.</p>
     */
    inline void SetAgentHealthDetails(const char* value) { m_agentHealthDetailsHasBeenSet = true; m_agentHealthDetails.assign(value); }

    /**
     * <p>The description for the agent health code.</p>
     */
    inline Agent& WithAgentHealthDetails(const Aws::String& value) { SetAgentHealthDetails(value); return *this;}

    /**
     * <p>The description for the agent health code.</p>
     */
    inline Agent& WithAgentHealthDetails(Aws::String&& value) { SetAgentHealthDetails(value); return *this;}

    /**
     * <p>The description for the agent health code.</p>
     */
    inline Agent& WithAgentHealthDetails(const char* value) { SetAgentHealthDetails(value); return *this;}

    /**
     * <p>This data type property is currently not used.</p>
     */
    inline const Aws::String& GetAutoScalingGroup() const{ return m_autoScalingGroup; }

    /**
     * <p>This data type property is currently not used.</p>
     */
    inline void SetAutoScalingGroup(const Aws::String& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = value; }

    /**
     * <p>This data type property is currently not used.</p>
     */
    inline void SetAutoScalingGroup(Aws::String&& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = value; }

    /**
     * <p>This data type property is currently not used.</p>
     */
    inline void SetAutoScalingGroup(const char* value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup.assign(value); }

    /**
     * <p>This data type property is currently not used.</p>
     */
    inline Agent& WithAutoScalingGroup(const Aws::String& value) { SetAutoScalingGroup(value); return *this;}

    /**
     * <p>This data type property is currently not used.</p>
     */
    inline Agent& WithAutoScalingGroup(Aws::String&& value) { SetAutoScalingGroup(value); return *this;}

    /**
     * <p>This data type property is currently not used.</p>
     */
    inline Agent& WithAutoScalingGroup(const char* value) { SetAutoScalingGroup(value); return *this;}

    /**
     * <p>AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline Agent& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline Agent& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * <p>AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline Agent& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    /**
     * <p>The Inspector application data metrics collected by the agent. </p>
     */
    inline const Aws::Vector<Telemetry>& GetTelemetry() const{ return m_telemetry; }

    /**
     * <p>The Inspector application data metrics collected by the agent. </p>
     */
    inline void SetTelemetry(const Aws::Vector<Telemetry>& value) { m_telemetryHasBeenSet = true; m_telemetry = value; }

    /**
     * <p>The Inspector application data metrics collected by the agent. </p>
     */
    inline void SetTelemetry(Aws::Vector<Telemetry>&& value) { m_telemetryHasBeenSet = true; m_telemetry = value; }

    /**
     * <p>The Inspector application data metrics collected by the agent. </p>
     */
    inline Agent& WithTelemetry(const Aws::Vector<Telemetry>& value) { SetTelemetry(value); return *this;}

    /**
     * <p>The Inspector application data metrics collected by the agent. </p>
     */
    inline Agent& WithTelemetry(Aws::Vector<Telemetry>&& value) { SetTelemetry(value); return *this;}

    /**
     * <p>The Inspector application data metrics collected by the agent. </p>
     */
    inline Agent& AddTelemetry(const Telemetry& value) { m_telemetryHasBeenSet = true; m_telemetry.push_back(value); return *this; }

    /**
     * <p>The Inspector application data metrics collected by the agent. </p>
     */
    inline Agent& AddTelemetry(Telemetry&& value) { m_telemetryHasBeenSet = true; m_telemetry.push_back(value); return *this; }

  private:
    Aws::String m_agentId;
    bool m_agentIdHasBeenSet;
    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet;
    Aws::String m_agentHealth;
    bool m_agentHealthHasBeenSet;
    Aws::String m_agentHealthCode;
    bool m_agentHealthCodeHasBeenSet;
    Aws::String m_agentHealthDetails;
    bool m_agentHealthDetailsHasBeenSet;
    Aws::String m_autoScalingGroup;
    bool m_autoScalingGroupHasBeenSet;
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::Vector<Telemetry> m_telemetry;
    bool m_telemetryHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
