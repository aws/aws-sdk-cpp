/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/GuardrailTrace.h>
#include <aws/bedrock-agent-runtime/model/PreProcessingTrace.h>
#include <aws/bedrock-agent-runtime/model/OrchestrationTrace.h>
#include <aws/bedrock-agent-runtime/model/PostProcessingTrace.h>
#include <aws/bedrock-agent-runtime/model/RoutingClassifierTrace.h>
#include <aws/bedrock-agent-runtime/model/FailureTrace.h>
#include <aws/bedrock-agent-runtime/model/CustomOrchestrationTrace.h>
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
   * <p>Contains one part of the agent's reasoning process and results from calling
   * API actions and querying knowledge bases. You can use the trace to understand
   * how the agent arrived at the response it provided the customer. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-enablement">Trace
   * enablement</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Trace">AWS
   * API Reference</a></p>
   */
  class Trace
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Trace() = default;
    AWS_BEDROCKAGENTRUNTIME_API Trace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Trace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The trace details for a trace defined in the Guardrail filter.</p>
     */
    inline const GuardrailTrace& GetGuardrailTrace() const { return m_guardrailTrace; }
    inline bool GuardrailTraceHasBeenSet() const { return m_guardrailTraceHasBeenSet; }
    template<typename GuardrailTraceT = GuardrailTrace>
    void SetGuardrailTrace(GuardrailTraceT&& value) { m_guardrailTraceHasBeenSet = true; m_guardrailTrace = std::forward<GuardrailTraceT>(value); }
    template<typename GuardrailTraceT = GuardrailTrace>
    Trace& WithGuardrailTrace(GuardrailTraceT&& value) { SetGuardrailTrace(std::forward<GuardrailTraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the pre-processing step, in which the agent contextualizes and
     * categorizes user inputs.</p>
     */
    inline const PreProcessingTrace& GetPreProcessingTrace() const { return m_preProcessingTrace; }
    inline bool PreProcessingTraceHasBeenSet() const { return m_preProcessingTraceHasBeenSet; }
    template<typename PreProcessingTraceT = PreProcessingTrace>
    void SetPreProcessingTrace(PreProcessingTraceT&& value) { m_preProcessingTraceHasBeenSet = true; m_preProcessingTrace = std::forward<PreProcessingTraceT>(value); }
    template<typename PreProcessingTraceT = PreProcessingTrace>
    Trace& WithPreProcessingTrace(PreProcessingTraceT&& value) { SetPreProcessingTrace(std::forward<PreProcessingTraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the orchestration step, in which the agent determines the order
     * in which actions are executed and which knowledge bases are retrieved.</p>
     */
    inline const OrchestrationTrace& GetOrchestrationTrace() const { return m_orchestrationTrace; }
    inline bool OrchestrationTraceHasBeenSet() const { return m_orchestrationTraceHasBeenSet; }
    template<typename OrchestrationTraceT = OrchestrationTrace>
    void SetOrchestrationTrace(OrchestrationTraceT&& value) { m_orchestrationTraceHasBeenSet = true; m_orchestrationTrace = std::forward<OrchestrationTraceT>(value); }
    template<typename OrchestrationTraceT = OrchestrationTrace>
    Trace& WithOrchestrationTrace(OrchestrationTraceT&& value) { SetOrchestrationTrace(std::forward<OrchestrationTraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the post-processing step, in which the agent shapes the
     * response..</p>
     */
    inline const PostProcessingTrace& GetPostProcessingTrace() const { return m_postProcessingTrace; }
    inline bool PostProcessingTraceHasBeenSet() const { return m_postProcessingTraceHasBeenSet; }
    template<typename PostProcessingTraceT = PostProcessingTrace>
    void SetPostProcessingTrace(PostProcessingTraceT&& value) { m_postProcessingTraceHasBeenSet = true; m_postProcessingTrace = std::forward<PostProcessingTraceT>(value); }
    template<typename PostProcessingTraceT = PostProcessingTrace>
    Trace& WithPostProcessingTrace(PostProcessingTraceT&& value) { SetPostProcessingTrace(std::forward<PostProcessingTraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A routing classifier's trace.</p>
     */
    inline const RoutingClassifierTrace& GetRoutingClassifierTrace() const { return m_routingClassifierTrace; }
    inline bool RoutingClassifierTraceHasBeenSet() const { return m_routingClassifierTraceHasBeenSet; }
    template<typename RoutingClassifierTraceT = RoutingClassifierTrace>
    void SetRoutingClassifierTrace(RoutingClassifierTraceT&& value) { m_routingClassifierTraceHasBeenSet = true; m_routingClassifierTrace = std::forward<RoutingClassifierTraceT>(value); }
    template<typename RoutingClassifierTraceT = RoutingClassifierTrace>
    Trace& WithRoutingClassifierTrace(RoutingClassifierTraceT&& value) { SetRoutingClassifierTrace(std::forward<RoutingClassifierTraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the failure of the interaction.</p>
     */
    inline const FailureTrace& GetFailureTrace() const { return m_failureTrace; }
    inline bool FailureTraceHasBeenSet() const { return m_failureTraceHasBeenSet; }
    template<typename FailureTraceT = FailureTrace>
    void SetFailureTrace(FailureTraceT&& value) { m_failureTraceHasBeenSet = true; m_failureTrace = std::forward<FailureTraceT>(value); }
    template<typename FailureTraceT = FailureTrace>
    Trace& WithFailureTrace(FailureTraceT&& value) { SetFailureTrace(std::forward<FailureTraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about the custom orchestration step in which the agent determines
     * the order in which actions are executed. </p>
     */
    inline const CustomOrchestrationTrace& GetCustomOrchestrationTrace() const { return m_customOrchestrationTrace; }
    inline bool CustomOrchestrationTraceHasBeenSet() const { return m_customOrchestrationTraceHasBeenSet; }
    template<typename CustomOrchestrationTraceT = CustomOrchestrationTrace>
    void SetCustomOrchestrationTrace(CustomOrchestrationTraceT&& value) { m_customOrchestrationTraceHasBeenSet = true; m_customOrchestrationTrace = std::forward<CustomOrchestrationTraceT>(value); }
    template<typename CustomOrchestrationTraceT = CustomOrchestrationTrace>
    Trace& WithCustomOrchestrationTrace(CustomOrchestrationTraceT&& value) { SetCustomOrchestrationTrace(std::forward<CustomOrchestrationTraceT>(value)); return *this;}
    ///@}
  private:

    GuardrailTrace m_guardrailTrace;
    bool m_guardrailTraceHasBeenSet = false;

    PreProcessingTrace m_preProcessingTrace;
    bool m_preProcessingTraceHasBeenSet = false;

    OrchestrationTrace m_orchestrationTrace;
    bool m_orchestrationTraceHasBeenSet = false;

    PostProcessingTrace m_postProcessingTrace;
    bool m_postProcessingTraceHasBeenSet = false;

    RoutingClassifierTrace m_routingClassifierTrace;
    bool m_routingClassifierTraceHasBeenSet = false;

    FailureTrace m_failureTrace;
    bool m_failureTraceHasBeenSet = false;

    CustomOrchestrationTrace m_customOrchestrationTrace;
    bool m_customOrchestrationTraceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
