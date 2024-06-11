﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace KinesisVideoArchivedMedia
{
namespace Model
{
  class GetClipResult
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetClipResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetClipResult(GetClipResult&&);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetClipResult& operator=(GetClipResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetClipResult(const GetClipResult&) = delete;
    GetClipResult& operator=(const GetClipResult&) = delete;


    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetClipResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetClipResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The content type of the media in the requested clip.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentType.assign(value); }
    inline GetClipResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline GetClipResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline GetClipResult& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Traditional MP4 file that contains the media clip from the specified video
     * stream. The output will contain the first 100 MB or the first 200 fragments from
     * the specified start timestamp. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/limits.html">Kinesis
     * Video Streams Limits</a>. </p>
     */
    inline Aws::IOStream& GetPayload() const { return m_payload.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetClipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetClipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetClipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contentType;

    Aws::Utils::Stream::ResponseStream m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
