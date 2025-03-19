/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-media/KinesisVideoMedia_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace KinesisVideoMedia
{
namespace Model
{
  class GetMediaResult
  {
  public:
    AWS_KINESISVIDEOMEDIA_API GetMediaResult() = default;
    AWS_KINESISVIDEOMEDIA_API GetMediaResult(GetMediaResult&&) = default;
    AWS_KINESISVIDEOMEDIA_API GetMediaResult& operator=(GetMediaResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetMediaResult(const GetMediaResult&) = delete;
    GetMediaResult& operator=(const GetMediaResult&) = delete;


    AWS_KINESISVIDEOMEDIA_API GetMediaResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_KINESISVIDEOMEDIA_API GetMediaResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The content type of the requested media.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    GetMediaResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The payload Kinesis Video Streams returns is a sequence of chunks from the
     * specified stream. For information about the chunks, see . The chunks that
     * Kinesis Video Streams returns in the <code>GetMedia</code> call also include the
     * following additional Matroska (MKV) tags: </p> <ul> <li>
     * <p>AWS_KINESISVIDEO_CONTINUATION_TOKEN (UTF-8 string) - In the event your
     * <code>GetMedia</code> call terminates, you can use this continuation token in
     * your next request to get the next chunk where the last request terminated.</p>
     * </li> <li> <p>AWS_KINESISVIDEO_MILLIS_BEHIND_NOW (UTF-8 string) - Client
     * applications can use this tag value to determine how far behind the chunk
     * returned in the response is from the latest chunk on the stream. </p> </li> <li>
     * <p>AWS_KINESISVIDEO_FRAGMENT_NUMBER - Fragment number returned in the chunk.</p>
     * </li> <li> <p>AWS_KINESISVIDEO_SERVER_TIMESTAMP - Server timestamp of the
     * fragment.</p> </li> <li> <p>AWS_KINESISVIDEO_PRODUCER_TIMESTAMP - Producer
     * timestamp of the fragment.</p> </li> </ul> <p>The following tags will be present
     * if an error occurs:</p> <ul> <li> <p>AWS_KINESISVIDEO_ERROR_CODE - String
     * description of an error that caused GetMedia to stop.</p> </li> <li>
     * <p>AWS_KINESISVIDEO_ERROR_ID: Integer code of the error.</p> </li> </ul> <p>The
     * error codes are as follows:</p> <ul> <li> <p>3002 - Error writing to the
     * stream</p> </li> <li> <p>4000 - Requested fragment is not found</p> </li> <li>
     * <p>4500 - Access denied for the stream's KMS key</p> </li> <li> <p>4501 -
     * Stream's KMS key is disabled</p> </li> <li> <p>4502 - Validation error on the
     * stream's KMS key</p> </li> <li> <p>4503 - KMS key specified in the stream is
     * unavailable</p> </li> <li> <p>4504 - Invalid usage of the KMS key specified in
     * the stream</p> </li> <li> <p>4505 - Invalid state of the KMS key specified in
     * the stream</p> </li> <li> <p>4506 - Unable to find the KMS key specified in the
     * stream</p> </li> <li> <p>5000 - Internal error</p> </li> </ul>
     */
    inline Aws::IOStream& GetPayload() const { return m_payload.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMediaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
} // namespace KinesisVideoMedia
} // namespace Aws
