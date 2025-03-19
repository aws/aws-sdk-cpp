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
    AWS_INSPECTOR_API AssessmentRunAgent() = default;
    AWS_INSPECTOR_API AssessmentRunAgent(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentRunAgent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS account of the EC2 instance where the agent is installed.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    AssessmentRunAgent& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the assessment run that is associated with the agent.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const { return m_assessmentRunArn; }
    inline bool AssessmentRunArnHasBeenSet() const { return m_assessmentRunArnHasBeenSet; }
    template<typename AssessmentRunArnT = Aws::String>
    void SetAssessmentRunArn(AssessmentRunArnT&& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = std::forward<AssessmentRunArnT>(value); }
    template<typename AssessmentRunArnT = Aws::String>
    AssessmentRunAgent& WithAssessmentRunArn(AssessmentRunArnT&& value) { SetAssessmentRunArn(std::forward<AssessmentRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current health state of the agent.</p>
     */
    inline AgentHealth GetAgentHealth() const { return m_agentHealth; }
    inline bool AgentHealthHasBeenSet() const { return m_agentHealthHasBeenSet; }
    inline void SetAgentHealth(AgentHealth value) { m_agentHealthHasBeenSet = true; m_agentHealth = value; }
    inline AssessmentRunAgent& WithAgentHealth(AgentHealth value) { SetAgentHealth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed health state of the agent.</p>
     */
    inline AgentHealthCode GetAgentHealthCode() const { return m_agentHealthCode; }
    inline bool AgentHealthCodeHasBeenSet() const { return m_agentHealthCodeHasBeenSet; }
    inline void SetAgentHealthCode(AgentHealthCode value) { m_agentHealthCodeHasBeenSet = true; m_agentHealthCode = value; }
    inline AssessmentRunAgent& WithAgentHealthCode(AgentHealthCode value) { SetAgentHealthCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the agent health code.</p>
     */
    inline const Aws::String& GetAgentHealthDetails() const { return m_agentHealthDetails; }
    inline bool AgentHealthDetailsHasBeenSet() const { return m_agentHealthDetailsHasBeenSet; }
    template<typename AgentHealthDetailsT = Aws::String>
    void SetAgentHealthDetails(AgentHealthDetailsT&& value) { m_agentHealthDetailsHasBeenSet = true; m_agentHealthDetails = std::forward<AgentHealthDetailsT>(value); }
    template<typename AgentHealthDetailsT = Aws::String>
    AssessmentRunAgent& WithAgentHealthDetails(AgentHealthDetailsT&& value) { SetAgentHealthDetails(std::forward<AgentHealthDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Auto Scaling group of the EC2 instance that is specified by the agent
     * ID.</p>
     */
    inline const Aws::String& GetAutoScalingGroup() const { return m_autoScalingGroup; }
    inline bool AutoScalingGroupHasBeenSet() const { return m_autoScalingGroupHasBeenSet; }
    template<typename AutoScalingGroupT = Aws::String>
    void SetAutoScalingGroup(AutoScalingGroupT&& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = std::forward<AutoScalingGroupT>(value); }
    template<typename AutoScalingGroupT = Aws::String>
    AssessmentRunAgent& WithAutoScalingGroup(AutoScalingGroupT&& value) { SetAutoScalingGroup(std::forward<AutoScalingGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Inspector application data metrics that are collected by the
     * agent.</p>
     */
    inline const Aws::Vector<TelemetryMetadata>& GetTelemetryMetadata() const { return m_telemetryMetadata; }
    inline bool TelemetryMetadataHasBeenSet() const { return m_telemetryMetadataHasBeenSet; }
    template<typename TelemetryMetadataT = Aws::Vector<TelemetryMetadata>>
    void SetTelemetryMetadata(TelemetryMetadataT&& value) { m_telemetryMetadataHasBeenSet = true; m_telemetryMetadata = std::forward<TelemetryMetadataT>(value); }
    template<typename TelemetryMetadataT = Aws::Vector<TelemetryMetadata>>
    AssessmentRunAgent& WithTelemetryMetadata(TelemetryMetadataT&& value) { SetTelemetryMetadata(std::forward<TelemetryMetadataT>(value)); return *this;}
    template<typename TelemetryMetadataT = TelemetryMetadata>
    AssessmentRunAgent& AddTelemetryMetadata(TelemetryMetadataT&& value) { m_telemetryMetadataHasBeenSet = true; m_telemetryMetadata.emplace_back(std::forward<TelemetryMetadataT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_assessmentRunArn;
    bool m_assessmentRunArnHasBeenSet = false;

    AgentHealth m_agentHealth{AgentHealth::NOT_SET};
    bool m_agentHealthHasBeenSet = false;

    AgentHealthCode m_agentHealthCode{AgentHealthCode::NOT_SET};
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
