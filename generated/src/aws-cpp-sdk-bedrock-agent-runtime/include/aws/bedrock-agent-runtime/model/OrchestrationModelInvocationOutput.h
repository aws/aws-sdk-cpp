/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/Metadata.h>
#include <aws/bedrock-agent-runtime/model/RawResponse.h>
#include <aws/bedrock-agent-runtime/model/ReasoningContentBlock.h>
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
   * <p>The foundation model output from the orchestration step.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/OrchestrationModelInvocationOutput">AWS
   * API Reference</a></p>
   */
  class OrchestrationModelInvocationOutput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationModelInvocationOutput() = default;
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationModelInvocationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationModelInvocationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the foundation model output from the orchestration
     * step.</p>
     */
    inline const Metadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Metadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Metadata>
    OrchestrationModelInvocationOutput& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details of the raw response from the foundation model output.</p>
     */
    inline const RawResponse& GetRawResponse() const { return m_rawResponse; }
    inline bool RawResponseHasBeenSet() const { return m_rawResponseHasBeenSet; }
    template<typename RawResponseT = RawResponse>
    void SetRawResponse(RawResponseT&& value) { m_rawResponseHasBeenSet = true; m_rawResponse = std::forward<RawResponseT>(value); }
    template<typename RawResponseT = RawResponse>
    OrchestrationModelInvocationOutput& WithRawResponse(RawResponseT&& value) { SetRawResponse(std::forward<RawResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains content about the reasoning that the model made during the
     * orchestration step. </p>
     */
    inline const ReasoningContentBlock& GetReasoningContent() const { return m_reasoningContent; }
    inline bool ReasoningContentHasBeenSet() const { return m_reasoningContentHasBeenSet; }
    template<typename ReasoningContentT = ReasoningContentBlock>
    void SetReasoningContent(ReasoningContentT&& value) { m_reasoningContentHasBeenSet = true; m_reasoningContent = std::forward<ReasoningContentT>(value); }
    template<typename ReasoningContentT = ReasoningContentBlock>
    OrchestrationModelInvocationOutput& WithReasoningContent(ReasoningContentT&& value) { SetReasoningContent(std::forward<ReasoningContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline const Aws::String& GetTraceId() const { return m_traceId; }
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
    template<typename TraceIdT = Aws::String>
    void SetTraceId(TraceIdT&& value) { m_traceIdHasBeenSet = true; m_traceId = std::forward<TraceIdT>(value); }
    template<typename TraceIdT = Aws::String>
    OrchestrationModelInvocationOutput& WithTraceId(TraceIdT&& value) { SetTraceId(std::forward<TraceIdT>(value)); return *this;}
    ///@}
  private:

    Metadata m_metadata;
    bool m_metadataHasBeenSet = false;

    RawResponse m_rawResponse;
    bool m_rawResponseHasBeenSet = false;

    ReasoningContentBlock m_reasoningContent;
    bool m_reasoningContentHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
