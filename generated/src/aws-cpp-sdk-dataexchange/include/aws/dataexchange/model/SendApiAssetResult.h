/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace DataExchange
{
namespace Model
{
  class SendApiAssetResult
  {
  public:
    AWS_DATAEXCHANGE_API SendApiAssetResult() = default;
    AWS_DATAEXCHANGE_API SendApiAssetResult(SendApiAssetResult&&) = default;
    AWS_DATAEXCHANGE_API SendApiAssetResult& operator=(SendApiAssetResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    SendApiAssetResult(const SendApiAssetResult&) = delete;
    SendApiAssetResult& operator=(const SendApiAssetResult&) = delete;


    AWS_DATAEXCHANGE_API SendApiAssetResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_DATAEXCHANGE_API SendApiAssetResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The response body from the underlying API tracked by the API asset.</p>
     */
    inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The response headers from the underlying API tracked by the API asset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseHeaders() const { return m_responseHeaders; }
    template<typename ResponseHeadersT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseHeaders(ResponseHeadersT&& value) { m_responseHeadersHasBeenSet = true; m_responseHeaders = std::forward<ResponseHeadersT>(value); }
    template<typename ResponseHeadersT = Aws::Map<Aws::String, Aws::String>>
    SendApiAssetResult& WithResponseHeaders(ResponseHeadersT&& value) { SetResponseHeaders(std::forward<ResponseHeadersT>(value)); return *this;}
    template<typename ResponseHeadersKeyT = Aws::String, typename ResponseHeadersValueT = Aws::String>
    SendApiAssetResult& AddResponseHeaders(ResponseHeadersKeyT&& key, ResponseHeadersValueT&& value) {
      m_responseHeadersHasBeenSet = true; m_responseHeaders.emplace(std::forward<ResponseHeadersKeyT>(key), std::forward<ResponseHeadersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SendApiAssetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_body;
    bool m_bodyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseHeaders;
    bool m_responseHeadersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
