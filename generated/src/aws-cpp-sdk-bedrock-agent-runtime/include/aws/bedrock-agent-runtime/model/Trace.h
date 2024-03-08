/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FailureTrace.h>
#include <aws/bedrock-agent-runtime/model/OrchestrationTrace.h>
#include <aws/bedrock-agent-runtime/model/PostProcessingTrace.h>
#include <aws/bedrock-agent-runtime/model/PreProcessingTrace.h>
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


    /**
     * <p>Contains information about the failure of the interaction.</p>
     */
    inline const FailureTrace& GetFailureTrace() const{ return m_failureTrace; }

    /**
     * <p>Contains information about the failure of the interaction.</p>
     */
    inline bool FailureTraceHasBeenSet() const { return m_failureTraceHasBeenSet; }

    /**
     * <p>Contains information about the failure of the interaction.</p>
     */
    inline void SetFailureTrace(const FailureTrace& value) { m_failureTraceHasBeenSet = true; m_failureTrace = value; }

    /**
     * <p>Contains information about the failure of the interaction.</p>
     */
    inline void SetFailureTrace(FailureTrace&& value) { m_failureTraceHasBeenSet = true; m_failureTrace = std::move(value); }

    /**
     * <p>Contains information about the failure of the interaction.</p>
     */
    inline Trace& WithFailureTrace(const FailureTrace& value) { SetFailureTrace(value); return *this;}

    /**
     * <p>Contains information about the failure of the interaction.</p>
     */
    inline Trace& WithFailureTrace(FailureTrace&& value) { SetFailureTrace(std::move(value)); return *this;}


    /**
     * <p>Details about the orchestration step, in which the agent determines the order
     * in which actions are executed and which knowledge bases are retrieved.</p>
     */
    inline const OrchestrationTrace& GetOrchestrationTrace() const{ return m_orchestrationTrace; }

    /**
     * <p>Details about the orchestration step, in which the agent determines the order
     * in which actions are executed and which knowledge bases are retrieved.</p>
     */
    inline bool OrchestrationTraceHasBeenSet() const { return m_orchestrationTraceHasBeenSet; }

    /**
     * <p>Details about the orchestration step, in which the agent determines the order
     * in which actions are executed and which knowledge bases are retrieved.</p>
     */
    inline void SetOrchestrationTrace(const OrchestrationTrace& value) { m_orchestrationTraceHasBeenSet = true; m_orchestrationTrace = value; }

    /**
     * <p>Details about the orchestration step, in which the agent determines the order
     * in which actions are executed and which knowledge bases are retrieved.</p>
     */
    inline void SetOrchestrationTrace(OrchestrationTrace&& value) { m_orchestrationTraceHasBeenSet = true; m_orchestrationTrace = std::move(value); }

    /**
     * <p>Details about the orchestration step, in which the agent determines the order
     * in which actions are executed and which knowledge bases are retrieved.</p>
     */
    inline Trace& WithOrchestrationTrace(const OrchestrationTrace& value) { SetOrchestrationTrace(value); return *this;}

    /**
     * <p>Details about the orchestration step, in which the agent determines the order
     * in which actions are executed and which knowledge bases are retrieved.</p>
     */
    inline Trace& WithOrchestrationTrace(OrchestrationTrace&& value) { SetOrchestrationTrace(std::move(value)); return *this;}


    /**
     * <p>Details about the post-processing step, in which the agent shapes the
     * response..</p>
     */
    inline const PostProcessingTrace& GetPostProcessingTrace() const{ return m_postProcessingTrace; }

    /**
     * <p>Details about the post-processing step, in which the agent shapes the
     * response..</p>
     */
    inline bool PostProcessingTraceHasBeenSet() const { return m_postProcessingTraceHasBeenSet; }

    /**
     * <p>Details about the post-processing step, in which the agent shapes the
     * response..</p>
     */
    inline void SetPostProcessingTrace(const PostProcessingTrace& value) { m_postProcessingTraceHasBeenSet = true; m_postProcessingTrace = value; }

    /**
     * <p>Details about the post-processing step, in which the agent shapes the
     * response..</p>
     */
    inline void SetPostProcessingTrace(PostProcessingTrace&& value) { m_postProcessingTraceHasBeenSet = true; m_postProcessingTrace = std::move(value); }

    /**
     * <p>Details about the post-processing step, in which the agent shapes the
     * response..</p>
     */
    inline Trace& WithPostProcessingTrace(const PostProcessingTrace& value) { SetPostProcessingTrace(value); return *this;}

    /**
     * <p>Details about the post-processing step, in which the agent shapes the
     * response..</p>
     */
    inline Trace& WithPostProcessingTrace(PostProcessingTrace&& value) { SetPostProcessingTrace(std::move(value)); return *this;}


    /**
     * <p>Details about the pre-processing step, in which the agent contextualizes and
     * categorizes user inputs.</p>
     */
    inline const PreProcessingTrace& GetPreProcessingTrace() const{ return m_preProcessingTrace; }

    /**
     * <p>Details about the pre-processing step, in which the agent contextualizes and
     * categorizes user inputs.</p>
     */
    inline bool PreProcessingTraceHasBeenSet() const { return m_preProcessingTraceHasBeenSet; }

    /**
     * <p>Details about the pre-processing step, in which the agent contextualizes and
     * categorizes user inputs.</p>
     */
    inline void SetPreProcessingTrace(const PreProcessingTrace& value) { m_preProcessingTraceHasBeenSet = true; m_preProcessingTrace = value; }

    /**
     * <p>Details about the pre-processing step, in which the agent contextualizes and
     * categorizes user inputs.</p>
     */
    inline void SetPreProcessingTrace(PreProcessingTrace&& value) { m_preProcessingTraceHasBeenSet = true; m_preProcessingTrace = std::move(value); }

    /**
     * <p>Details about the pre-processing step, in which the agent contextualizes and
     * categorizes user inputs.</p>
     */
    inline Trace& WithPreProcessingTrace(const PreProcessingTrace& value) { SetPreProcessingTrace(value); return *this;}

    /**
     * <p>Details about the pre-processing step, in which the agent contextualizes and
     * categorizes user inputs.</p>
     */
    inline Trace& WithPreProcessingTrace(PreProcessingTrace&& value) { SetPreProcessingTrace(std::move(value)); return *this;}

  private:

    FailureTrace m_failureTrace;
    bool m_failureTraceHasBeenSet = false;

    OrchestrationTrace m_orchestrationTrace;
    bool m_orchestrationTraceHasBeenSet = false;

    PostProcessingTrace m_postProcessingTrace;
    bool m_postProcessingTraceHasBeenSet = false;

    PreProcessingTrace m_preProcessingTrace;
    bool m_preProcessingTraceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
