/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/GuardrailAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/Metadata.h>
#include <aws/bedrock-agent-runtime/model/GuardrailAssessment.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>The trace details used in the Guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailTrace">AWS
   * API Reference</a></p>
   */
  class GuardrailTrace
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailTrace() = default;
    AWS_BEDROCKAGENTRUNTIME_API GuardrailTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The trace action details used with the Guardrail.</p>
     */
    inline GuardrailAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(GuardrailAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GuardrailTrace& WithAction(GuardrailAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the trace Id used in the Guardrail Trace.</p>
     */
    inline const Aws::String& GetTraceId() const { return m_traceId; }
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
    template<typename TraceIdT = Aws::String>
    void SetTraceId(TraceIdT&& value) { m_traceIdHasBeenSet = true; m_traceId = std::forward<TraceIdT>(value); }
    template<typename TraceIdT = Aws::String>
    GuardrailTrace& WithTraceId(TraceIdT&& value) { SetTraceId(std::forward<TraceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the input assessments used in the Guardrail Trace.</p>
     */
    inline const Aws::Vector<GuardrailAssessment>& GetInputAssessments() const { return m_inputAssessments; }
    inline bool InputAssessmentsHasBeenSet() const { return m_inputAssessmentsHasBeenSet; }
    template<typename InputAssessmentsT = Aws::Vector<GuardrailAssessment>>
    void SetInputAssessments(InputAssessmentsT&& value) { m_inputAssessmentsHasBeenSet = true; m_inputAssessments = std::forward<InputAssessmentsT>(value); }
    template<typename InputAssessmentsT = Aws::Vector<GuardrailAssessment>>
    GuardrailTrace& WithInputAssessments(InputAssessmentsT&& value) { SetInputAssessments(std::forward<InputAssessmentsT>(value)); return *this;}
    template<typename InputAssessmentsT = GuardrailAssessment>
    GuardrailTrace& AddInputAssessments(InputAssessmentsT&& value) { m_inputAssessmentsHasBeenSet = true; m_inputAssessments.emplace_back(std::forward<InputAssessmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the output assessments used in the Guardrail Trace.</p>
     */
    inline const Aws::Vector<GuardrailAssessment>& GetOutputAssessments() const { return m_outputAssessments; }
    inline bool OutputAssessmentsHasBeenSet() const { return m_outputAssessmentsHasBeenSet; }
    template<typename OutputAssessmentsT = Aws::Vector<GuardrailAssessment>>
    void SetOutputAssessments(OutputAssessmentsT&& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments = std::forward<OutputAssessmentsT>(value); }
    template<typename OutputAssessmentsT = Aws::Vector<GuardrailAssessment>>
    GuardrailTrace& WithOutputAssessments(OutputAssessmentsT&& value) { SetOutputAssessments(std::forward<OutputAssessmentsT>(value)); return *this;}
    template<typename OutputAssessmentsT = GuardrailAssessment>
    GuardrailTrace& AddOutputAssessments(OutputAssessmentsT&& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments.emplace_back(std::forward<OutputAssessmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the Guardrail output.</p>
     */
    inline const Metadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Metadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Metadata>
    GuardrailTrace& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}
  private:

    GuardrailAction m_action{GuardrailAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;

    Aws::Vector<GuardrailAssessment> m_inputAssessments;
    bool m_inputAssessmentsHasBeenSet = false;

    Aws::Vector<GuardrailAssessment> m_outputAssessments;
    bool m_outputAssessmentsHasBeenSet = false;

    Metadata m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
