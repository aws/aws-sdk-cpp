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
  class GetMediaForFragmentListResult
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetMediaForFragmentListResult() = default;
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetMediaForFragmentListResult(GetMediaForFragmentListResult&&) = default;
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetMediaForFragmentListResult& operator=(GetMediaForFragmentListResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetMediaForFragmentListResult(const GetMediaForFragmentListResult&) = delete;
    GetMediaForFragmentListResult& operator=(const GetMediaForFragmentListResult&) = delete;


    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetMediaForFragmentListResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetMediaForFragmentListResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The content type of the requested media.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    GetMediaForFragmentListResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
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
     * exception </p> </li> <li> <p>AWS_KINESISVIDEO_EXCEPTION_ERROR_CODE - The integer
     * code of the </p> </li> <li> <p>AWS_KINESISVIDEO_EXCEPTION_MESSAGE - A text
     * description of the exception </p> </li> </ul>
     */
    inline Aws::IOStream& GetPayload() const { return m_payload.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMediaForFragmentListResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_payload{};
    bool m_payloadHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
