﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_BEDROCKRUNTIME_API InvokeModelResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_BEDROCKRUNTIME_API InvokeModelResult(InvokeModelResult&&);
    AWS_BEDROCKRUNTIME_API InvokeModelResult& operator=(InvokeModelResult&&);
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
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentType.assign(value); }
    inline InvokeModelResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline InvokeModelResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline InvokeModelResult& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InvokeModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InvokeModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InvokeModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_body;

    Aws::String m_contentType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
