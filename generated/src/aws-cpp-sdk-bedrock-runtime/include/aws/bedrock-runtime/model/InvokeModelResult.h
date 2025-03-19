/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/PerformanceConfigLatency.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace BedrockRuntime
{
namespace Model
{
  class InvokeModelResult
  {
  public:
    AWS_BEDROCKRUNTIME_API InvokeModelResult() = default;
    AWS_BEDROCKRUNTIME_API InvokeModelResult(InvokeModelResult&&) = default;
    AWS_BEDROCKRUNTIME_API InvokeModelResult& operator=(InvokeModelResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    InvokeModelResult(const InvokeModelResult&) = delete;
    InvokeModelResult& operator=(const InvokeModelResult&) = delete;


    AWS_BEDROCKRUNTIME_API InvokeModelResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_BEDROCKRUNTIME_API InvokeModelResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>Inference response from the model in the format specified in the
     * <code>contentType</code> header. To see the format and content of the request
     * and response bodies for different models, refer to <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters</a>.</p>
     */
    inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The MIME type of the inference result.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    InvokeModelResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Model performance settings for the request.</p>
     */
    inline PerformanceConfigLatency GetPerformanceConfigLatency() const { return m_performanceConfigLatency; }
    inline void SetPerformanceConfigLatency(PerformanceConfigLatency value) { m_performanceConfigLatencyHasBeenSet = true; m_performanceConfigLatency = value; }
    inline InvokeModelResult& WithPerformanceConfigLatency(PerformanceConfigLatency value) { SetPerformanceConfigLatency(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    InvokeModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_body{};
    bool m_bodyHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    PerformanceConfigLatency m_performanceConfigLatency{PerformanceConfigLatency::NOT_SET};
    bool m_performanceConfigLatencyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
