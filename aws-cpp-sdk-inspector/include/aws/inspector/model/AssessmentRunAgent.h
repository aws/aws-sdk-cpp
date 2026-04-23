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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/AgentHealth.h>
#include <aws/inspector/model/AgentHealthCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/TelemetryMetadata.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about an Amazon Inspector agent. This data type is used
   * as a response element in the <a>ListAssessmentRunAgents</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AssessmentRunAgent">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API AssessmentRunAgent
  {
  public:
    AssessmentRunAgent();
    AssessmentRunAgent(Aws::Utils::Json::JsonView jsonValue);
    AssessmentRunAgent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>The AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>The AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline AssessmentRunAgent& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline AssessmentRunAgent& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline AssessmentRunAgent& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>The ARN of the assessment run that is associated with the agent.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const{ return m_assessmentRunArn; }

    /**
     * <p>The ARN of the assessment run that is associated with the agent.</p>
     */
    inline bool AssessmentRunArnHasBeenSet() const { return m_assessmentRunArnHasBeenSet; }

    /**
     * <p>The ARN of the assessment run that is associated with the agent.</p>
     */
    inline void SetAssessmentRunArn(const Aws::String& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = value; }

    /**
     * <p>The ARN of the assessment run that is associated with the agent.</p>
     */
    inline void SetAssessmentRunArn(Aws::String&& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = std::move(value); }

    /**
     * <p>The ARN of the assessment run that is associated with the agent.</p>
     */
    inline void SetAssessmentRunArn(const char* value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn.assign(value); }

    /**
     * <p>The ARN of the assessment run that is associated with the agent.</p>
     */
    inline AssessmentRunAgent& WithAssessmentRunArn(const Aws::String& value) { SetAssessmentRunArn(value); return *this;}

    /**
     * <p>The ARN of the assessment run that is associated with the agent.</p>
     */
    inline AssessmentRunAgent& WithAssessmentRunArn(Aws::String&& value) { SetAssessmentRunArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment run that is associated with the agent.</p>
     */
    inline AssessmentRunAgent& WithAssessmentRunArn(const char* value) { SetAssessmentRunArn(value); return *this;}


    /**
     * <p>The current health state of the agent.</p>
     */
    inline const AgentHealth& GetAgentHealth() const{ return m_agentHealth; }

    /**
     * <p>The current health state of the agent.</p>
     */
    inline bool AgentHealthHasBeenSet() const { return m_agentHealthHasBeenSet; }

    /**
     * <p>The current health state of the agent.</p>
     */
    inline void SetAgentHealth(const AgentHealth& value) { m_agentHealthHasBeenSet = true; m_agentHealth = value; }

    /**
     * <p>The current health state of the agent.</p>
     */
    inline void SetAgentHealth(AgentHealth&& value) { m_agentHealthHasBeenSet = true; m_agentHealth = std::move(value); }

    /**
     * <p>The current health state of the agent.</p>
     */
    inline AssessmentRunAgent& WithAgentHealth(const AgentHealth& value) { SetAgentHealth(value); return *this;}

    /**
     * <p>The current health state of the agent.</p>
     */
    inline AssessmentRunAgent& WithAgentHealth(AgentHealth&& value) { SetAgentHealth(std::move(value)); return *this;}


    /**
     * <p>The detailed health state of the agent.</p>
     */
    inline const AgentHealthCode& GetAgentHealthCode() const{ return m_agentHealthCode; }

    /**
     * <p>The detailed health state of the agent.</p>
     */
    inline bool AgentHealthCodeHasBeenSet() const { return m_agentHealthCodeHasBeenSet; }

    /**
     * <p>The detailed health state of the agent.</p>
     */
    inline void SetAgentHealthCode(const AgentHealthCode& value) { m_agentHealthCodeHasBeenSet = true; m_agentHealthCode = value; }

    /**
     * <p>The detailed health state of the agent.</p>
     */
    inline void SetAgentHealthCode(AgentHealthCode&& value) { m_agentHealthCodeHasBeenSet = true; m_agentHealthCode = std::move(value); }

    /**
     * <p>The detailed health state of the agent.</p>
     */
    inline AssessmentRunAgent& WithAgentHealthCode(const AgentHealthCode& value) { SetAgentHealthCode(value); return *this;}

    /**
     * <p>The detailed health state of the agent.</p>
     */
    inline AssessmentRunAgent& WithAgentHealthCode(AgentHealthCode&& value) { SetAgentHealthCode(std::move(value)); return *this;}


    /**
     * <p>The description for the agent health code.</p>
     */
    inline const Aws::String& GetAgentHealthDetails() const{ return m_agentHealthDetails; }

    /**
     * <p>The description for the agent health code.</p>
     */
    inline bool AgentHealthDetailsHasBeenSet() const { return m_agentHealthDetailsHasBeenSet; }

    /**
     * <p>The description for the agent health code.</p>
     */
    inline void SetAgentHealthDetails(const Aws::String& value) { m_agentHealthDetailsHasBeenSet = true; m_agentHealthDetails = value; }

    /**
     * <p>The description for the agent health code.</p>
     */
    inline void SetAgentHealthDetails(Aws::String&& value) { m_agentHealthDetailsHasBeenSet = true; m_agentHealthDetails = std::move(value); }

    /**
     * <p>The description for the agent health code.</p>
     */
    inline void SetAgentHealthDetails(const char* value) { m_agentHealthDetailsHasBeenSet = true; m_agentHealthDetails.assign(value); }

    /**
     * <p>The description for the agent health code.</p>
     */
    inline AssessmentRunAgent& WithAgentHealthDetails(const Aws::String& value) { SetAgentHealthDetails(value); return *this;}

    /**
     * <p>The description for the agent health code.</p>
     */
    inline AssessmentRunAgent& WithAgentHealthDetails(Aws::String&& value) { SetAgentHealthDetails(std::move(value)); return *this;}

    /**
     * <p>The description for the agent health code.</p>
     */
    inline AssessmentRunAgent& WithAgentHealthDetails(const char* value) { SetAgentHealthDetails(value); return *this;}


    /**
     * <p>The Auto Scaling group of the EC2 instance that is specified by the agent
     * ID.</p>
     */
    inline const Aws::String& GetAutoScalingGroup() const{ return m_autoScalingGroup; }

    /**
     * <p>The Auto Scaling group of the EC2 instance that is specified by the agent
     * ID.</p>
     */
    inline bool AutoScalingGroupHasBeenSet() const { return m_autoScalingGroupHasBeenSet; }

    /**
     * <p>The Auto Scaling group of the EC2 instance that is specified by the agent
     * ID.</p>
     */
    inline void SetAutoScalingGroup(const Aws::String& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = value; }

    /**
     * <p>The Auto Scaling group of the EC2 instance that is specified by the agent
     * ID.</p>
     */
    inline void SetAutoScalingGroup(Aws::String&& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = std::move(value); }

    /**
     * <p>The Auto Scaling group of the EC2 instance that is specified by the agent
     * ID.</p>
     */
    inline void SetAutoScalingGroup(const char* value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup.assign(value); }

    /**
     * <p>The Auto Scaling group of the EC2 instance that is specified by the agent
     * ID.</p>
     */
    inline AssessmentRunAgent& WithAutoScalingGroup(const Aws::String& value) { SetAutoScalingGroup(value); return *this;}

    /**
     * <p>The Auto Scaling group of the EC2 instance that is specified by the agent
     * ID.</p>
     */
    inline AssessmentRunAgent& WithAutoScalingGroup(Aws::String&& value) { SetAutoScalingGroup(std::move(value)); return *this;}

    /**
     * <p>The Auto Scaling group of the EC2 instance that is specified by the agent
     * ID.</p>
     */
    inline AssessmentRunAgent& WithAutoScalingGroup(const char* value) { SetAutoScalingGroup(value); return *this;}


    /**
     * <p>The Amazon Inspector application data metrics that are collected by the
     * agent.</p>
     */
    inline const Aws::Vector<TelemetryMetadata>& GetTelemetryMetadata() const{ return m_telemetryMetadata; }

    /**
     * <p>The Amazon Inspector application data metrics that are collected by the
     * agent.</p>
     */
    inline bool TelemetryMetadataHasBeenSet() const { return m_telemetryMetadataHasBeenSet; }

    /**
     * <p>The Amazon Inspector application data metrics that are collected by the
     * agent.</p>
     */
    inline void SetTelemetryMetadata(const Aws::Vector<TelemetryMetadata>& value) { m_telemetryMetadataHasBeenSet = true; m_telemetryMetadata = value; }

    /**
     * <p>The Amazon Inspector application data metrics that are collected by the
     * agent.</p>
     */
    inline void SetTelemetryMetadata(Aws::Vector<TelemetryMetadata>&& value) { m_telemetryMetadataHasBeenSet = true; m_telemetryMetadata = std::move(value); }

    /**
     * <p>The Amazon Inspector application data metrics that are collected by the
     * agent.</p>
     */
    inline AssessmentRunAgent& WithTelemetryMetadata(const Aws::Vector<TelemetryMetadata>& value) { SetTelemetryMetadata(value); return *this;}

    /**
     * <p>The Amazon Inspector application data metrics that are collected by the
     * agent.</p>
     */
    inline AssessmentRunAgent& WithTelemetryMetadata(Aws::Vector<TelemetryMetadata>&& value) { SetTelemetryMetadata(std::move(value)); return *this;}

    /**
     * <p>The Amazon Inspector application data metrics that are collected by the
     * agent.</p>
     */
    inline AssessmentRunAgent& AddTelemetryMetadata(const TelemetryMetadata& value) { m_telemetryMetadataHasBeenSet = true; m_telemetryMetadata.push_back(value); return *this; }

    /**
     * <p>The Amazon Inspector application data metrics that are collected by the
     * agent.</p>
     */
    inline AssessmentRunAgent& AddTelemetryMetadata(TelemetryMetadata&& value) { m_telemetryMetadataHasBeenSet = true; m_telemetryMetadata.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet;

    Aws::String m_assessmentRunArn;
    bool m_assessmentRunArnHasBeenSet;

    AgentHealth m_agentHealth;
    bool m_agentHealthHasBeenSet;

    AgentHealthCode m_agentHealthCode;
    bool m_agentHealthCodeHasBeenSet;

    Aws::String m_agentHealthDetails;
    bool m_agentHealthDetailsHasBeenSet;

    Aws::String m_autoScalingGroup;
    bool m_autoScalingGroupHasBeenSet;

    Aws::Vector<TelemetryMetadata> m_telemetryMetadata;
    bool m_telemetryMetadataHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
