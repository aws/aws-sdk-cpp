/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/Metadata.h>
#include <aws/bedrock-agent-runtime/model/PostProcessingParsedResponse.h>
#include <aws/bedrock-agent-runtime/model/RawResponse.h>
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
   * <p>The foundation model output from the post-processing step.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/PostProcessingModelInvocationOutput">AWS
   * API Reference</a></p>
   */
  class PostProcessingModelInvocationOutput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PostProcessingModelInvocationOutput();
    AWS_BEDROCKAGENTRUNTIME_API PostProcessingModelInvocationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API PostProcessingModelInvocationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Contains information about the foundation model output from the
     * post-processing step. </p>
     */
    inline const Metadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Metadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Metadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline PostProcessingModelInvocationOutput& WithMetadata(const Metadata& value) { SetMetadata(value); return *this;}
    inline PostProcessingModelInvocationOutput& WithMetadata(Metadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the response from the Lambda parsing of the output of the
     * post-processing step.</p>
     */
    inline const PostProcessingParsedResponse& GetParsedResponse() const{ return m_parsedResponse; }
    inline bool ParsedResponseHasBeenSet() const { return m_parsedResponseHasBeenSet; }
    inline void SetParsedResponse(const PostProcessingParsedResponse& value) { m_parsedResponseHasBeenSet = true; m_parsedResponse = value; }
    inline void SetParsedResponse(PostProcessingParsedResponse&& value) { m_parsedResponseHasBeenSet = true; m_parsedResponse = std::move(value); }
    inline PostProcessingModelInvocationOutput& WithParsedResponse(const PostProcessingParsedResponse& value) { SetParsedResponse(value); return *this;}
    inline PostProcessingModelInvocationOutput& WithParsedResponse(PostProcessingParsedResponse&& value) { SetParsedResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details of the raw response from the foundation model output. </p>
     */
    inline const RawResponse& GetRawResponse() const{ return m_rawResponse; }
    inline bool RawResponseHasBeenSet() const { return m_rawResponseHasBeenSet; }
    inline void SetRawResponse(const RawResponse& value) { m_rawResponseHasBeenSet = true; m_rawResponse = value; }
    inline void SetRawResponse(RawResponse&& value) { m_rawResponseHasBeenSet = true; m_rawResponse = std::move(value); }
    inline PostProcessingModelInvocationOutput& WithRawResponse(const RawResponse& value) { SetRawResponse(value); return *this;}
    inline PostProcessingModelInvocationOutput& WithRawResponse(RawResponse&& value) { SetRawResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline const Aws::String& GetTraceId() const{ return m_traceId; }
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
    inline void SetTraceId(const Aws::String& value) { m_traceIdHasBeenSet = true; m_traceId = value; }
    inline void SetTraceId(Aws::String&& value) { m_traceIdHasBeenSet = true; m_traceId = std::move(value); }
    inline void SetTraceId(const char* value) { m_traceIdHasBeenSet = true; m_traceId.assign(value); }
    inline PostProcessingModelInvocationOutput& WithTraceId(const Aws::String& value) { SetTraceId(value); return *this;}
    inline PostProcessingModelInvocationOutput& WithTraceId(Aws::String&& value) { SetTraceId(std::move(value)); return *this;}
    inline PostProcessingModelInvocationOutput& WithTraceId(const char* value) { SetTraceId(value); return *this;}
    ///@}
  private:

    Metadata m_metadata;
    bool m_metadataHasBeenSet = false;

    PostProcessingParsedResponse m_parsedResponse;
    bool m_parsedResponseHasBeenSet = false;

    RawResponse m_rawResponse;
    bool m_rawResponseHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
