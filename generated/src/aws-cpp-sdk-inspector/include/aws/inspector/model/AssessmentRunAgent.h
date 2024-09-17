/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AssessmentRunAgent
  {
  public:
    AWS_INSPECTOR_API AssessmentRunAgent();
    AWS_INSPECTOR_API AssessmentRunAgent(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentRunAgent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline AssessmentRunAgent& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline AssessmentRunAgent& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline AssessmentRunAgent& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the assessment run that is associated with the agent.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const{ return m_assessmentRunArn; }
    inline bool AssessmentRunArnHasBeenSet() const { return m_assessmentRunArnHasBeenSet; }
    inline void SetAssessmentRunArn(const Aws::String& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = value; }
    inline void SetAssessmentRunArn(Aws::String&& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = std::move(value); }
    inline void SetAssessmentRunArn(const char* value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn.assign(value); }
    inline AssessmentRunAgent& WithAssessmentRunArn(const Aws::String& value) { SetAssessmentRunArn(value); return *this;}
    inline AssessmentRunAgent& WithAssessmentRunArn(Aws::String&& value) { SetAssessmentRunArn(std::move(value)); return *this;}
    inline AssessmentRunAgent& WithAssessmentRunArn(const char* value) { SetAssessmentRunArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current health state of the agent.</p>
     */
    inline const AgentHealth& GetAgentHealth() const{ return m_agentHealth; }
    inline bool AgentHealthHasBeenSet() const { return m_agentHealthHasBeenSet; }
    inline void SetAgentHealth(const AgentHealth& value) { m_agentHealthHasBeenSet = true; m_agentHealth = value; }
    inline void SetAgentHealth(AgentHealth&& value) { m_agentHealthHasBeenSet = true; m_agentHealth = std::move(value); }
    inline AssessmentRunAgent& WithAgentHealth(const AgentHealth& value) { SetAgentHealth(value); return *this;}
    inline AssessmentRunAgent& WithAgentHealth(AgentHealth&& value) { SetAgentHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed health state of the agent.</p>
     */
    inline const AgentHealthCode& GetAgentHealthCode() const{ return m_agentHealthCode; }
    inline bool AgentHealthCodeHasBeenSet() const { return m_agentHealthCodeHasBeenSet; }
    inline void SetAgentHealthCode(const AgentHealthCode& value) { m_agentHealthCodeHasBeenSet = true; m_agentHealthCode = value; }
    inline void SetAgentHealthCode(AgentHealthCode&& value) { m_agentHealthCodeHasBeenSet = true; m_agentHealthCode = std::move(value); }
    inline AssessmentRunAgent& WithAgentHealthCode(const AgentHealthCode& value) { SetAgentHealthCode(value); return *this;}
    inline AssessmentRunAgent& WithAgentHealthCode(AgentHealthCode&& value) { SetAgentHealthCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the agent health code.</p>
     */
    inline const Aws::String& GetAgentHealthDetails() const{ return m_agentHealthDetails; }
    inline bool AgentHealthDetailsHasBeenSet() const { return m_agentHealthDetailsHasBeenSet; }
    inline void SetAgentHealthDetails(const Aws::String& value) { m_agentHealthDetailsHasBeenSet = true; m_agentHealthDetails = value; }
    inline void SetAgentHealthDetails(Aws::String&& value) { m_agentHealthDetailsHasBeenSet = true; m_agentHealthDetails = std::move(value); }
    inline void SetAgentHealthDetails(const char* value) { m_agentHealthDetailsHasBeenSet = true; m_agentHealthDetails.assign(value); }
    inline AssessmentRunAgent& WithAgentHealthDetails(const Aws::String& value) { SetAgentHealthDetails(value); return *this;}
    inline AssessmentRunAgent& WithAgentHealthDetails(Aws::String&& value) { SetAgentHealthDetails(std::move(value)); return *this;}
    inline AssessmentRunAgent& WithAgentHealthDetails(const char* value) { SetAgentHealthDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Auto Scaling group of the EC2 instance that is specified by the agent
     * ID.</p>
     */
    inline const Aws::String& GetAutoScalingGroup() const{ return m_autoScalingGroup; }
    inline bool AutoScalingGroupHasBeenSet() const { return m_autoScalingGroupHasBeenSet; }
    inline void SetAutoScalingGroup(const Aws::String& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = value; }
    inline void SetAutoScalingGroup(Aws::String&& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = std::move(value); }
    inline void SetAutoScalingGroup(const char* value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup.assign(value); }
    inline AssessmentRunAgent& WithAutoScalingGroup(const Aws::String& value) { SetAutoScalingGroup(value); return *this;}
    inline AssessmentRunAgent& WithAutoScalingGroup(Aws::String&& value) { SetAutoScalingGroup(std::move(value)); return *this;}
    inline AssessmentRunAgent& WithAutoScalingGroup(const char* value) { SetAutoScalingGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Inspector application data metrics that are collected by the
     * agent.</p>
     */
    inline const Aws::Vector<TelemetryMetadata>& GetTelemetryMetadata() const{ return m_telemetryMetadata; }
    inline bool TelemetryMetadataHasBeenSet() const { return m_telemetryMetadataHasBeenSet; }
    inline void SetTelemetryMetadata(const Aws::Vector<TelemetryMetadata>& value) { m_telemetryMetadataHasBeenSet = true; m_telemetryMetadata = value; }
    inline void SetTelemetryMetadata(Aws::Vector<TelemetryMetadata>&& value) { m_telemetryMetadataHasBeenSet = true; m_telemetryMetadata = std::move(value); }
    inline AssessmentRunAgent& WithTelemetryMetadata(const Aws::Vector<TelemetryMetadata>& value) { SetTelemetryMetadata(value); return *this;}
    inline AssessmentRunAgent& WithTelemetryMetadata(Aws::Vector<TelemetryMetadata>&& value) { SetTelemetryMetadata(std::move(value)); return *this;}
    inline AssessmentRunAgent& AddTelemetryMetadata(const TelemetryMetadata& value) { m_telemetryMetadataHasBeenSet = true; m_telemetryMetadata.push_back(value); return *this; }
    inline AssessmentRunAgent& AddTelemetryMetadata(TelemetryMetadata&& value) { m_telemetryMetadataHasBeenSet = true; m_telemetryMetadata.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_assessmentRunArn;
    bool m_assessmentRunArnHasBeenSet = false;

    AgentHealth m_agentHealth;
    bool m_agentHealthHasBeenSet = false;

    AgentHealthCode m_agentHealthCode;
    bool m_agentHealthCodeHasBeenSet = false;

    Aws::String m_agentHealthDetails;
    bool m_agentHealthDetailsHasBeenSet = false;

    Aws::String m_autoScalingGroup;
    bool m_autoScalingGroupHasBeenSet = false;

    Aws::Vector<TelemetryMetadata> m_telemetryMetadata;
    bool m_telemetryMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
