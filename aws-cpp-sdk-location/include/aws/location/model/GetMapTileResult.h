/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace LocationService
{
namespace Model
{
  class GetMapTileResult
  {
  public:
    AWS_LOCATIONSERVICE_API GetMapTileResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_LOCATIONSERVICE_API GetMapTileResult(GetMapTileResult&&);
    AWS_LOCATIONSERVICE_API GetMapTileResult& operator=(GetMapTileResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetMapTileResult(const GetMapTileResult&) = delete;
    GetMapTileResult& operator=(const GetMapTileResult&) = delete;


    AWS_LOCATIONSERVICE_API GetMapTileResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LOCATIONSERVICE_API GetMapTileResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>Contains Mapbox Vector Tile (MVT) data.</p>
     */
    inline Aws::IOStream& GetBlob() { return m_blob.GetUnderlyingStream(); }

    /**
     * <p>Contains Mapbox Vector Tile (MVT) data.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_blob = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>The map tile's content type. For example,
     * <code>application/vnd.mapbox-vector-tile</code>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The map tile's content type. For example,
     * <code>application/vnd.mapbox-vector-tile</code>.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The map tile's content type. For example,
     * <code>application/vnd.mapbox-vector-tile</code>.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The map tile's content type. For example,
     * <code>application/vnd.mapbox-vector-tile</code>.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The map tile's content type. For example,
     * <code>application/vnd.mapbox-vector-tile</code>.</p>
     */
    inline GetMapTileResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The map tile's content type. For example,
     * <code>application/vnd.mapbox-vector-tile</code>.</p>
     */
    inline GetMapTileResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The map tile's content type. For example,
     * <code>application/vnd.mapbox-vector-tile</code>.</p>
     */
    inline GetMapTileResult& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

  Aws::Utils::Stream::ResponseStream m_blob;

    Aws::String m_contentType;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
