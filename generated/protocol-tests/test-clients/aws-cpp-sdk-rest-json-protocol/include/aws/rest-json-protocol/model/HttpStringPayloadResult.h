/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace RestJsonProtocol
{
namespace Model
{
  class HttpStringPayloadResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API HttpStringPayloadResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_RESTJSONPROTOCOL_API HttpStringPayloadResult(HttpStringPayloadResult&&);
    AWS_RESTJSONPROTOCOL_API HttpStringPayloadResult& operator=(HttpStringPayloadResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    HttpStringPayloadResult(const HttpStringPayloadResult&) = delete;
    HttpStringPayloadResult& operator=(const HttpStringPayloadResult&) = delete;


    AWS_RESTJSONPROTOCOL_API HttpStringPayloadResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_RESTJSONPROTOCOL_API HttpStringPayloadResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    
    inline Aws::IOStream& GetPayload() const { return m_payload.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline HttpStringPayloadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpStringPayloadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpStringPayloadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
