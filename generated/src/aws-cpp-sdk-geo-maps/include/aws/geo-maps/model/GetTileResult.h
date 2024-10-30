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
    AWS_GEOMAPS_API GetTileResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_GEOMAPS_API GetTileResult(GetTileResult&&);
    AWS_GEOMAPS_API GetTileResult& operator=(GetTileResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetTileResult(const GetTileResult&) = delete;
    GetTileResult& operator=(const GetTileResult&) = delete;


    AWS_GEOMAPS_API GetTileResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_GEOMAPS_API GetTileResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The blob represents a vector tile in <code>mvt</code> format for the
     * <code>GetTile</code> API.</p>
     */
    inline Aws::IOStream& GetBlob() const { return m_blob.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_blob = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>Header that represents the format of the response. The response returns the
     * following as the HTTP body.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentType.assign(value); }
    inline GetTileResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline GetTileResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline GetTileResult& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Header that instructs caching configuration for the client.</p>
     */
    inline const Aws::String& GetCacheControl() const{ return m_cacheControl; }
    inline void SetCacheControl(const Aws::String& value) { m_cacheControl = value; }
    inline void SetCacheControl(Aws::String&& value) { m_cacheControl = std::move(value); }
    inline void SetCacheControl(const char* value) { m_cacheControl.assign(value); }
    inline GetTileResult& WithCacheControl(const Aws::String& value) { SetCacheControl(value); return *this;}
    inline GetTileResult& WithCacheControl(Aws::String&& value) { SetCacheControl(std::move(value)); return *this;}
    inline GetTileResult& WithCacheControl(const char* value) { SetCacheControl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the request is charged at.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline GetTileResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline GetTileResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline GetTileResult& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the request is charged at.</p>
     */
    inline const Aws::String& GetPricingBucket() const{ return m_pricingBucket; }
    inline void SetPricingBucket(const Aws::String& value) { m_pricingBucket = value; }
    inline void SetPricingBucket(Aws::String&& value) { m_pricingBucket = std::move(value); }
    inline void SetPricingBucket(const char* value) { m_pricingBucket.assign(value); }
    inline GetTileResult& WithPricingBucket(const Aws::String& value) { SetPricingBucket(value); return *this;}
    inline GetTileResult& WithPricingBucket(Aws::String&& value) { SetPricingBucket(std::move(value)); return *this;}
    inline GetTileResult& WithPricingBucket(const char* value) { SetPricingBucket(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_blob;

    Aws::String m_contentType;

    Aws::String m_cacheControl;

    Aws::String m_eTag;

    Aws::String m_pricingBucket;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GeoMaps
} // namespace Aws
