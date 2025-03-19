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
  class GetTileResult
  {
  public:
    AWS_GEOMAPS_API GetTileResult() = default;
    AWS_GEOMAPS_API GetTileResult(GetTileResult&&) = default;
    AWS_GEOMAPS_API GetTileResult& operator=(GetTileResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetTileResult(const GetTileResult&) = delete;
    GetTileResult& operator=(const GetTileResult&) = delete;


    AWS_GEOMAPS_API GetTileResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_GEOMAPS_API GetTileResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The blob represents a vector tile in <code>mvt</code> or a raster tile in an
     * image format.</p>
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
    GetTileResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Header that instructs caching configuration for the client.</p>
     */
    inline const Aws::String& GetCacheControl() const { return m_cacheControl; }
    template<typename CacheControlT = Aws::String>
    void SetCacheControl(CacheControlT&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = std::forward<CacheControlT>(value); }
    template<typename CacheControlT = Aws::String>
    GetTileResult& WithCacheControl(CacheControlT&& value) { SetCacheControl(std::forward<CacheControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the request is charged at.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    GetTileResult& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the request is charged at.</p>
     */
    inline const Aws::String& GetPricingBucket() const { return m_pricingBucket; }
    template<typename PricingBucketT = Aws::String>
    void SetPricingBucket(PricingBucketT&& value) { m_pricingBucketHasBeenSet = true; m_pricingBucket = std::forward<PricingBucketT>(value); }
    template<typename PricingBucketT = Aws::String>
    GetTileResult& WithPricingBucket(PricingBucketT&& value) { SetPricingBucket(std::forward<PricingBucketT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_pricingBucket;
    bool m_pricingBucketHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoMaps
} // namespace Aws
