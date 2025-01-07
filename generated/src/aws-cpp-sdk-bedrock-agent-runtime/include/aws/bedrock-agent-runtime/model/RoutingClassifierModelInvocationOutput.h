/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/Metadata.h>
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
   * <p>Invocation output from a routing classifier model.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RoutingClassifierModelInvocationOutput">AWS
   * API Reference</a></p>
   */
  class RoutingClassifierModelInvocationOutput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RoutingClassifierModelInvocationOutput();
    AWS_BEDROCKAGENTRUNTIME_API RoutingClassifierModelInvocationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RoutingClassifierModelInvocationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The invocation's metadata.</p>
     */
    inline const Metadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Metadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Metadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline RoutingClassifierModelInvocationOutput& WithMetadata(const Metadata& value) { SetMetadata(value); return *this;}
    inline RoutingClassifierModelInvocationOutput& WithMetadata(Metadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation's raw response.</p>
     */
    inline const RawResponse& GetRawResponse() const{ return m_rawResponse; }
    inline bool RawResponseHasBeenSet() const { return m_rawResponseHasBeenSet; }
    inline void SetRawResponse(const RawResponse& value) { m_rawResponseHasBeenSet = true; m_rawResponse = value; }
    inline void SetRawResponse(RawResponse&& value) { m_rawResponseHasBeenSet = true; m_rawResponse = std::move(value); }
    inline RoutingClassifierModelInvocationOutput& WithRawResponse(const RawResponse& value) { SetRawResponse(value); return *this;}
    inline RoutingClassifierModelInvocationOutput& WithRawResponse(RawResponse&& value) { SetRawResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation's trace ID.</p>
     */
    inline const Aws::String& GetTraceId() const{ return m_traceId; }
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
    inline void SetTraceId(const Aws::String& value) { m_traceIdHasBeenSet = true; m_traceId = value; }
    inline void SetTraceId(Aws::String&& value) { m_traceIdHasBeenSet = true; m_traceId = std::move(value); }
    inline void SetTraceId(const char* value) { m_traceIdHasBeenSet = true; m_traceId.assign(value); }
    inline RoutingClassifierModelInvocationOutput& WithTraceId(const Aws::String& value) { SetTraceId(value); return *this;}
    inline RoutingClassifierModelInvocationOutput& WithTraceId(Aws::String&& value) { SetTraceId(std::move(value)); return *this;}
    inline RoutingClassifierModelInvocationOutput& WithTraceId(const char* value) { SetTraceId(value); return *this;}
    ///@}
  private:

    Metadata m_metadata;
    bool m_metadataHasBeenSet = false;

    RawResponse m_rawResponse;
    bool m_rawResponseHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
