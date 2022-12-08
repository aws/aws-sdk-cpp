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
  class GetMapGlyphsResult
  {
  public:
    AWS_LOCATIONSERVICE_API GetMapGlyphsResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_LOCATIONSERVICE_API GetMapGlyphsResult(GetMapGlyphsResult&&);
    AWS_LOCATIONSERVICE_API GetMapGlyphsResult& operator=(GetMapGlyphsResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetMapGlyphsResult(const GetMapGlyphsResult&) = delete;
    GetMapGlyphsResult& operator=(const GetMapGlyphsResult&) = delete;


    AWS_LOCATIONSERVICE_API GetMapGlyphsResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LOCATIONSERVICE_API GetMapGlyphsResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The blob's content type.</p>
     */
    inline Aws::IOStream& GetBlob() { return m_blob.GetUnderlyingStream(); }

    /**
     * <p>The blob's content type.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_blob = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>The map glyph content type. For example,
     * <code>application/octet-stream</code>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The map glyph content type. For example,
     * <code>application/octet-stream</code>.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The map glyph content type. For example,
     * <code>application/octet-stream</code>.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The map glyph content type. For example,
     * <code>application/octet-stream</code>.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The map glyph content type. For example,
     * <code>application/octet-stream</code>.</p>
     */
    inline GetMapGlyphsResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The map glyph content type. For example,
     * <code>application/octet-stream</code>.</p>
     */
    inline GetMapGlyphsResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The map glyph content type. For example,
     * <code>application/octet-stream</code>.</p>
     */
    inline GetMapGlyphsResult& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

  Aws::Utils::Stream::ResponseStream m_blob;

    Aws::String m_contentType;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
