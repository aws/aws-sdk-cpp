/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/CustomOrchestrationTraceEvent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> The trace behavior for the custom orchestration. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/CustomOrchestrationTrace">AWS
   * API Reference</a></p>
   */
  class CustomOrchestrationTrace
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API CustomOrchestrationTrace();
    AWS_BEDROCKAGENTRUNTIME_API CustomOrchestrationTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API CustomOrchestrationTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The event details used with the custom orchestration. </p>
     */
    inline const CustomOrchestrationTraceEvent& GetEvent() const{ return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    inline void SetEvent(const CustomOrchestrationTraceEvent& value) { m_eventHasBeenSet = true; m_event = value; }
    inline void SetEvent(CustomOrchestrationTraceEvent&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }
    inline CustomOrchestrationTrace& WithEvent(const CustomOrchestrationTraceEvent& value) { SetEvent(value); return *this;}
    inline CustomOrchestrationTrace& WithEvent(CustomOrchestrationTraceEvent&& value) { SetEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the trace. </p>
     */
    inline const Aws::String& GetTraceId() const{ return m_traceId; }
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
    inline void SetTraceId(const Aws::String& value) { m_traceIdHasBeenSet = true; m_traceId = value; }
    inline void SetTraceId(Aws::String&& value) { m_traceIdHasBeenSet = true; m_traceId = std::move(value); }
    inline void SetTraceId(const char* value) { m_traceIdHasBeenSet = true; m_traceId.assign(value); }
    inline CustomOrchestrationTrace& WithTraceId(const Aws::String& value) { SetTraceId(value); return *this;}
    inline CustomOrchestrationTrace& WithTraceId(Aws::String&& value) { SetTraceId(std::move(value)); return *this;}
    inline CustomOrchestrationTrace& WithTraceId(const char* value) { SetTraceId(value); return *this;}
    ///@}
  private:

    CustomOrchestrationTraceEvent m_event;
    bool m_eventHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
