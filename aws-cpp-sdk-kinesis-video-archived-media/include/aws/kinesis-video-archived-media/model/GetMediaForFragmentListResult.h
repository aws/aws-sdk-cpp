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
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API GetMediaForFragmentListResult
  {
  public:
    GetMediaForFragmentListResult();
    //We have to define these because Microsoft doesn't auto generate them
    GetMediaForFragmentListResult(GetMediaForFragmentListResult&&);
    GetMediaForFragmentListResult& operator=(GetMediaForFragmentListResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetMediaForFragmentListResult(const GetMediaForFragmentListResult&) = delete;
    GetMediaForFragmentListResult& operator=(const GetMediaForFragmentListResult&) = delete;


    GetMediaForFragmentListResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    GetMediaForFragmentListResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The content type of the requested media.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type of the requested media.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The content type of the requested media.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The content type of the requested media.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The content type of the requested media.</p>
     */
    inline GetMediaForFragmentListResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type of the requested media.</p>
     */
    inline GetMediaForFragmentListResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content type of the requested media.</p>
     */
    inline GetMediaForFragmentListResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The payload that Kinesis Video Streams returns is a sequence of chunks from
     * the specified stream. For information about the chunks, see <a
     * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/API_dataplane_PutMedia.html">PutMedia</a>.
     * The chunks that Kinesis Video Streams returns in the
     * <code>GetMediaForFragmentList</code> call also include the following additional
     * Matroska (MKV) tags: </p> <ul> <li> <p>AWS_KINESISVIDEO_FRAGMENT_NUMBER -
     * Fragment number returned in the chunk.</p> </li> <li>
     * <p>AWS_KINESISVIDEO_SERVER_SIDE_TIMESTAMP - Server-side timestamp of the
     * fragment.</p> </li> <li> <p>AWS_KINESISVIDEO_PRODUCER_SIDE_TIMESTAMP -
     * Producer-side timestamp of the fragment.</p> </li> </ul> <p>The following tags
     * will be included if an exception occurs:</p> <ul> <li>
     * <p>AWS_KINESISVIDEO_FRAGMENT_NUMBER - The number of the fragment that threw the
     * exception</p> </li> <li> <p>AWS_KINESISVIDEO_EXCEPTION_ERROR_CODE - The integer
     * code of the exception</p> </li> <li> <p>AWS_KINESISVIDEO_EXCEPTION_MESSAGE - A
     * text description of the exception</p> </li> </ul>
     */
    inline Aws::IOStream& GetPayload() { return m_payload.GetUnderlyingStream(); }

    /**
     * <p>The payload that Kinesis Video Streams returns is a sequence of chunks from
     * the specified stream. For information about the chunks, see <a
     * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/API_dataplane_PutMedia.html">PutMedia</a>.
     * The chunks that Kinesis Video Streams returns in the
     * <code>GetMediaForFragmentList</code> call also include the following additional
     * Matroska (MKV) tags: </p> <ul> <li> <p>AWS_KINESISVIDEO_FRAGMENT_NUMBER -
     * Fragment number returned in the chunk.</p> </li> <li>
     * <p>AWS_KINESISVIDEO_SERVER_SIDE_TIMESTAMP - Server-side timestamp of the
     * fragment.</p> </li> <li> <p>AWS_KINESISVIDEO_PRODUCER_SIDE_TIMESTAMP -
     * Producer-side timestamp of the fragment.</p> </li> </ul> <p>The following tags
     * will be included if an exception occurs:</p> <ul> <li>
     * <p>AWS_KINESISVIDEO_FRAGMENT_NUMBER - The number of the fragment that threw the
     * exception</p> </li> <li> <p>AWS_KINESISVIDEO_EXCEPTION_ERROR_CODE - The integer
     * code of the exception</p> </li> <li> <p>AWS_KINESISVIDEO_EXCEPTION_MESSAGE - A
     * text description of the exception</p> </li> </ul>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }

  private:

    Aws::String m_contentType;

  Aws::Utils::Stream::ResponseStream m_payload;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
