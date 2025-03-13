/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace GeoMaps
{
namespace Model
{
  class GetSpritesResult
  {
  public:
    AWS_GEOMAPS_API GetSpritesResult() = default;
    AWS_GEOMAPS_API GetSpritesResult(GetSpritesResult&&) = default;
    AWS_GEOMAPS_API GetSpritesResult& operator=(GetSpritesResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetSpritesResult(const GetSpritesResult&) = delete;
    GetSpritesResult& operator=(const GetSpritesResult&) = delete;


    AWS_GEOMAPS_API GetSpritesResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_GEOMAPS_API GetSpritesResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The body of the sprite sheet or JSON offset file (image/png or
     * application/json, depending on input).</p>
     */
    inline Aws::IOStream& GetBlob() const { return m_blob.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_blob = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>Header that represents the format of the response. The response returns the
     * following as the HTTP body.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    GetSpritesResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Header that instructs caching configuration for the client.</p>
     */
    inline const Aws::String& GetCacheControl() const { return m_cacheControl; }
    template<typename CacheControlT = Aws::String>
    void SetCacheControl(CacheControlT&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = std::forward<CacheControlT>(value); }
    template<typename CacheControlT = Aws::String>
    GetSpritesResult& WithCacheControl(CacheControlT&& value) { SetCacheControl(std::forward<CacheControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sprite's Etag.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    GetSpritesResult& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSpritesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_blob{};
    bool m_blobHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_cacheControl;
    bool m_cacheControlHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoMaps
} // namespace Aws
