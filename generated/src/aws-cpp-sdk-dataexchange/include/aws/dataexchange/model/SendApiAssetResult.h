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
    AWS_DATAEXCHANGE_API SendApiAssetResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_DATAEXCHANGE_API SendApiAssetResult(SendApiAssetResult&&);
    AWS_DATAEXCHANGE_API SendApiAssetResult& operator=(SendApiAssetResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    SendApiAssetResult(const SendApiAssetResult&) = delete;
    SendApiAssetResult& operator=(const SendApiAssetResult&) = delete;


    AWS_DATAEXCHANGE_API SendApiAssetResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_DATAEXCHANGE_API SendApiAssetResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The response body from the underlying API tracked by the API asset.</p>
     */
    inline Aws::IOStream& GetBody() { return m_body.GetUnderlyingStream(); }

    /**
     * <p>The response body from the underlying API tracked by the API asset.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>The response headers from the underlying API tracked by the API asset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseHeaders() const{ return m_responseHeaders; }

    /**
     * <p>The response headers from the underlying API tracked by the API asset.</p>
     */
    inline void SetResponseHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_responseHeaders = value; }

    /**
     * <p>The response headers from the underlying API tracked by the API asset.</p>
     */
    inline void SetResponseHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_responseHeaders = std::move(value); }

    /**
     * <p>The response headers from the underlying API tracked by the API asset.</p>
     */
    inline SendApiAssetResult& WithResponseHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseHeaders(value); return *this;}

    /**
     * <p>The response headers from the underlying API tracked by the API asset.</p>
     */
    inline SendApiAssetResult& WithResponseHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseHeaders(std::move(value)); return *this;}

    /**
     * <p>The response headers from the underlying API tracked by the API asset.</p>
     */
    inline SendApiAssetResult& AddResponseHeaders(const Aws::String& key, const Aws::String& value) { m_responseHeaders.emplace(key, value); return *this; }

    /**
     * <p>The response headers from the underlying API tracked by the API asset.</p>
     */
    inline SendApiAssetResult& AddResponseHeaders(Aws::String&& key, const Aws::String& value) { m_responseHeaders.emplace(std::move(key), value); return *this; }

    /**
     * <p>The response headers from the underlying API tracked by the API asset.</p>
     */
    inline SendApiAssetResult& AddResponseHeaders(const Aws::String& key, Aws::String&& value) { m_responseHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The response headers from the underlying API tracked by the API asset.</p>
     */
    inline SendApiAssetResult& AddResponseHeaders(Aws::String&& key, Aws::String&& value) { m_responseHeaders.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The response headers from the underlying API tracked by the API asset.</p>
     */
    inline SendApiAssetResult& AddResponseHeaders(const char* key, Aws::String&& value) { m_responseHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The response headers from the underlying API tracked by the API asset.</p>
     */
    inline SendApiAssetResult& AddResponseHeaders(Aws::String&& key, const char* value) { m_responseHeaders.emplace(std::move(key), value); return *this; }

    /**
     * <p>The response headers from the underlying API tracked by the API asset.</p>
     */
    inline SendApiAssetResult& AddResponseHeaders(const char* key, const char* value) { m_responseHeaders.emplace(key, value); return *this; }

  private:

  Aws::Utils::Stream::ResponseStream m_body;

    Aws::Map<Aws::String, Aws::String> m_responseHeaders;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
