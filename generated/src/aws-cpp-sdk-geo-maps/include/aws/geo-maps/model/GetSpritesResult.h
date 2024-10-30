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
    AWS_GEOMAPS_API GetSpritesResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_GEOMAPS_API GetSpritesResult(GetSpritesResult&&);
    AWS_GEOMAPS_API GetSpritesResult& operator=(GetSpritesResult&&);
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
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentType.assign(value); }
    inline GetSpritesResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline GetSpritesResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline GetSpritesResult& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Header that instructs caching configuration for the client.</p>
     */
    inline const Aws::String& GetCacheControl() const{ return m_cacheControl; }
    inline void SetCacheControl(const Aws::String& value) { m_cacheControl = value; }
    inline void SetCacheControl(Aws::String&& value) { m_cacheControl = std::move(value); }
    inline void SetCacheControl(const char* value) { m_cacheControl.assign(value); }
    inline GetSpritesResult& WithCacheControl(const Aws::String& value) { SetCacheControl(value); return *this;}
    inline GetSpritesResult& WithCacheControl(Aws::String&& value) { SetCacheControl(std::move(value)); return *this;}
    inline GetSpritesResult& WithCacheControl(const char* value) { SetCacheControl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sprite's Etag.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline GetSpritesResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline GetSpritesResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline GetSpritesResult& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSpritesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSpritesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSpritesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_blob;

    Aws::String m_contentType;

    Aws::String m_cacheControl;

    Aws::String m_eTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GeoMaps
} // namespace Aws
