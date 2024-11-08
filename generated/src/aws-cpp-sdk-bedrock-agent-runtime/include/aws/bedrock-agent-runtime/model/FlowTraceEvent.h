/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FlowTrace.h>
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
   * <p>Contains information about a trace, which tracks an input or output for a
   * node in the flow. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-trace.html">Track
   * each step in your prompt flow by viewing its trace in Amazon
   * Bedrock</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowTraceEvent">AWS
   * API Reference</a></p>
   */
  class FlowTraceEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceEvent();
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The trace object containing information about an input or output for a node
     * in the flow.</p>
     */
    inline const FlowTrace& GetTrace() const{ return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    inline void SetTrace(const FlowTrace& value) { m_traceHasBeenSet = true; m_trace = value; }
    inline void SetTrace(FlowTrace&& value) { m_traceHasBeenSet = true; m_trace = std::move(value); }
    inline FlowTraceEvent& WithTrace(const FlowTrace& value) { SetTrace(value); return *this;}
    inline FlowTraceEvent& WithTrace(FlowTrace&& value) { SetTrace(std::move(value)); return *this;}
    ///@}
  private:

    FlowTrace m_trace;
    bool m_traceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
