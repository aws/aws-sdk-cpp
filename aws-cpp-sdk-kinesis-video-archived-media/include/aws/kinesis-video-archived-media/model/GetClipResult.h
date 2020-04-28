/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API GetClipResult
  {
  public:
    GetClipResult();
    //We have to define these because Microsoft doesn't auto generate them
    GetClipResult(GetClipResult&&);
    GetClipResult& operator=(GetClipResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetClipResult(const GetClipResult&) = delete;
    GetClipResult& operator=(const GetClipResult&) = delete;


    GetClipResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    GetClipResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The content type of the media in the requested clip.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type of the media in the requested clip.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The content type of the media in the requested clip.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The content type of the media in the requested clip.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The content type of the media in the requested clip.</p>
     */
    inline GetClipResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type of the media in the requested clip.</p>
     */
    inline GetClipResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content type of the media in the requested clip.</p>
     */
    inline GetClipResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>Traditional MP4 file that contains the media clip from the specified video
     * stream. The output will contain the first 100 MB or the first 200 fragments from
     * the specified start timestamp. For more information, see <a href="Kinesis Video
     * Streams Limits">Kinesis Video Streams Limits</a>. </p>
     */
    inline Aws::IOStream& GetPayload() { return m_payload.GetUnderlyingStream(); }

    /**
     * <p>Traditional MP4 file that contains the media clip from the specified video
     * stream. The output will contain the first 100 MB or the first 200 fragments from
     * the specified start timestamp. For more information, see <a href="Kinesis Video
     * Streams Limits">Kinesis Video Streams Limits</a>. </p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }

  private:

    Aws::String m_contentType;

  Aws::Utils::Stream::ResponseStream m_payload;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
