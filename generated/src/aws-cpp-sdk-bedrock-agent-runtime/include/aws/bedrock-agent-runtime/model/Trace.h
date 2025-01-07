/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/CustomOrchestrationTrace.h>
#include <aws/bedrock-agent-runtime/model/FailureTrace.h>
#include <aws/bedrock-agent-runtime/model/GuardrailTrace.h>
#include <aws/bedrock-agent-runtime/model/OrchestrationTrace.h>
#include <aws/bedrock-agent-runtime/model/PostProcessingTrace.h>
#include <aws/bedrock-agent-runtime/model/PreProcessingTrace.h>
#include <aws/bedrock-agent-runtime/model/RoutingClassifierTrace.h>
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
    AWS_BEDROCKAGENTRUNTIME_API Trace();
    AWS_BEDROCKAGENTRUNTIME_API Trace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Trace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Details about the custom orchestration step in which the agent determines
     * the order in which actions are executed. </p>
     */
    inline const CustomOrchestrationTrace& GetCustomOrchestrationTrace() const{ return m_customOrchestrationTrace; }
    inline bool CustomOrchestrationTraceHasBeenSet() const { return m_customOrchestrationTraceHasBeenSet; }
    inline void SetCustomOrchestrationTrace(const CustomOrchestrationTrace& value) { m_customOrchestrationTraceHasBeenSet = true; m_customOrchestrationTrace = value; }
    inline void SetCustomOrchestrationTrace(CustomOrchestrationTrace&& value) { m_customOrchestrationTraceHasBeenSet = true; m_customOrchestrationTrace = std::move(value); }
    inline Trace& WithCustomOrchestrationTrace(const CustomOrchestrationTrace& value) { SetCustomOrchestrationTrace(value); return *this;}
    inline Trace& WithCustomOrchestrationTrace(CustomOrchestrationTrace&& value) { SetCustomOrchestrationTrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the failure of the interaction.</p>
     */
    inline const FailureTrace& GetFailureTrace() const{ return m_failureTrace; }
    inline bool FailureTraceHasBeenSet() const { return m_failureTraceHasBeenSet; }
    inline void SetFailureTrace(const FailureTrace& value) { m_failureTraceHasBeenSet = true; m_failureTrace = value; }
    inline void SetFailureTrace(FailureTrace&& value) { m_failureTraceHasBeenSet = true; m_failureTrace = std::move(value); }
    inline Trace& WithFailureTrace(const FailureTrace& value) { SetFailureTrace(value); return *this;}
    inline Trace& WithFailureTrace(FailureTrace&& value) { SetFailureTrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trace details for a trace defined in the Guardrail filter.</p>
     */
    inline const GuardrailTrace& GetGuardrailTrace() const{ return m_guardrailTrace; }
    inline bool GuardrailTraceHasBeenSet() const { return m_guardrailTraceHasBeenSet; }
    inline void SetGuardrailTrace(const GuardrailTrace& value) { m_guardrailTraceHasBeenSet = true; m_guardrailTrace = value; }
    inline void SetGuardrailTrace(GuardrailTrace&& value) { m_guardrailTraceHasBeenSet = true; m_guardrailTrace = std::move(value); }
    inline Trace& WithGuardrailTrace(const GuardrailTrace& value) { SetGuardrailTrace(value); return *this;}
    inline Trace& WithGuardrailTrace(GuardrailTrace&& value) { SetGuardrailTrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the orchestration step, in which the agent determines the order
     * in which actions are executed and which knowledge bases are retrieved.</p>
     */
    inline const OrchestrationTrace& GetOrchestrationTrace() const{ return m_orchestrationTrace; }
    inline bool OrchestrationTraceHasBeenSet() const { return m_orchestrationTraceHasBeenSet; }
    inline void SetOrchestrationTrace(const OrchestrationTrace& value) { m_orchestrationTraceHasBeenSet = true; m_orchestrationTrace = value; }
    inline void SetOrchestrationTrace(OrchestrationTrace&& value) { m_orchestrationTraceHasBeenSet = true; m_orchestrationTrace = std::move(value); }
    inline Trace& WithOrchestrationTrace(const OrchestrationTrace& value) { SetOrchestrationTrace(value); return *this;}
    inline Trace& WithOrchestrationTrace(OrchestrationTrace&& value) { SetOrchestrationTrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the post-processing step, in which the agent shapes the
     * response..</p>
     */
    inline const PostProcessingTrace& GetPostProcessingTrace() const{ return m_postProcessingTrace; }
    inline bool PostProcessingTraceHasBeenSet() const { return m_postProcessingTraceHasBeenSet; }
    inline void SetPostProcessingTrace(const PostProcessingTrace& value) { m_postProcessingTraceHasBeenSet = true; m_postProcessingTrace = value; }
    inline void SetPostProcessingTrace(PostProcessingTrace&& value) { m_postProcessingTraceHasBeenSet = true; m_postProcessingTrace = std::move(value); }
    inline Trace& WithPostProcessingTrace(const PostProcessingTrace& value) { SetPostProcessingTrace(value); return *this;}
    inline Trace& WithPostProcessingTrace(PostProcessingTrace&& value) { SetPostProcessingTrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the pre-processing step, in which the agent contextualizes and
     * categorizes user inputs.</p>
     */
    inline const PreProcessingTrace& GetPreProcessingTrace() const{ return m_preProcessingTrace; }
    inline bool PreProcessingTraceHasBeenSet() const { return m_preProcessingTraceHasBeenSet; }
    inline void SetPreProcessingTrace(const PreProcessingTrace& value) { m_preProcessingTraceHasBeenSet = true; m_preProcessingTrace = value; }
    inline void SetPreProcessingTrace(PreProcessingTrace&& value) { m_preProcessingTraceHasBeenSet = true; m_preProcessingTrace = std::move(value); }
    inline Trace& WithPreProcessingTrace(const PreProcessingTrace& value) { SetPreProcessingTrace(value); return *this;}
    inline Trace& WithPreProcessingTrace(PreProcessingTrace&& value) { SetPreProcessingTrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A routing classifier's trace.</p>
     */
    inline const RoutingClassifierTrace& GetRoutingClassifierTrace() const{ return m_routingClassifierTrace; }
    inline bool RoutingClassifierTraceHasBeenSet() const { return m_routingClassifierTraceHasBeenSet; }
    inline void SetRoutingClassifierTrace(const RoutingClassifierTrace& value) { m_routingClassifierTraceHasBeenSet = true; m_routingClassifierTrace = value; }
    inline void SetRoutingClassifierTrace(RoutingClassifierTrace&& value) { m_routingClassifierTraceHasBeenSet = true; m_routingClassifierTrace = std::move(value); }
    inline Trace& WithRoutingClassifierTrace(const RoutingClassifierTrace& value) { SetRoutingClassifierTrace(value); return *this;}
    inline Trace& WithRoutingClassifierTrace(RoutingClassifierTrace&& value) { SetRoutingClassifierTrace(std::move(value)); return *this;}
    ///@}
  private:

    CustomOrchestrationTrace m_customOrchestrationTrace;
    bool m_customOrchestrationTraceHasBeenSet = false;

    FailureTrace m_failureTrace;
    bool m_failureTraceHasBeenSet = false;

    GuardrailTrace m_guardrailTrace;
    bool m_guardrailTraceHasBeenSet = false;

    OrchestrationTrace m_orchestrationTrace;
    bool m_orchestrationTraceHasBeenSet = false;

    PostProcessingTrace m_postProcessingTrace;
    bool m_postProcessingTraceHasBeenSet = false;

    PreProcessingTrace m_preProcessingTrace;
    bool m_preProcessingTraceHasBeenSet = false;

    RoutingClassifierTrace m_routingClassifierTrace;
    bool m_routingClassifierTraceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
