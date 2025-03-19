/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/GetJobOutputOutput">AWS
   * API Reference</a></p>
   */
  class GetJobOutputResult
  {
  public:
    AWS_GLACIER_API GetJobOutputResult() = default;
    AWS_GLACIER_API GetJobOutputResult(GetJobOutputResult&&) = default;
    AWS_GLACIER_API GetJobOutputResult& operator=(GetJobOutputResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetJobOutputResult(const GetJobOutputResult&) = delete;
    GetJobOutputResult& operator=(const GetJobOutputResult&) = delete;


    AWS_GLACIER_API GetJobOutputResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_GLACIER_API GetJobOutputResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The job data, either archive data or inventory data.</p>
     */
    inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The checksum of the data in the response. This header is returned only when
     * retrieving the output for an archive retrieval job. Furthermore, this header
     * appears only under the following conditions:</p> <ul> <li> <p>You get the entire
     * range of the archive.</p> </li> <li> <p>You request a range to return of the
     * archive that starts and ends on a multiple of 1 MB. For example, if you have an
     * 3.1 MB archive and you specify a range to return that starts at 1 MB and ends at
     * 2 MB, then the x-amz-sha256-tree-hash is returned as a response header.</p>
     * </li> <li> <p>You request a range of the archive to return that starts on a
     * multiple of 1 MB and goes to the end of the archive. For example, if you have a
     * 3.1 MB archive and you specify a range that starts at 2 MB and ends at 3.1 MB
     * (the end of the archive), then the x-amz-sha256-tree-hash is returned as a
     * response header.</p> </li> </ul>
     */
    inline const Aws::String& GetChecksum() const { return m_checksum; }
    template<typename ChecksumT = Aws::String>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Aws::String>
    GetJobOutputResult& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP response code for a job output request. The value depends on whether
     * a range was specified in the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetJobOutputResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of bytes returned by Amazon S3 Glacier. If only partial output is
     * downloaded, the response provides the range of bytes Amazon S3 Glacier returned.
     * For example, bytes 0-1048575/8388608 returns the first 1 MB from 8 MB.</p>
     */
    inline const Aws::String& GetContentRange() const { return m_contentRange; }
    template<typename ContentRangeT = Aws::String>
    void SetContentRange(ContentRangeT&& value) { m_contentRangeHasBeenSet = true; m_contentRange = std::forward<ContentRangeT>(value); }
    template<typename ContentRangeT = Aws::String>
    GetJobOutputResult& WithContentRange(ContentRangeT&& value) { SetContentRange(std::forward<ContentRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the range units accepted. For more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html">RFC2616</a>. </p>
     */
    inline const Aws::String& GetAcceptRanges() const { return m_acceptRanges; }
    template<typename AcceptRangesT = Aws::String>
    void SetAcceptRanges(AcceptRangesT&& value) { m_acceptRangesHasBeenSet = true; m_acceptRanges = std::forward<AcceptRangesT>(value); }
    template<typename AcceptRangesT = Aws::String>
    GetJobOutputResult& WithAcceptRanges(AcceptRangesT&& value) { SetAcceptRanges(std::forward<AcceptRangesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Content-Type depends on whether the job output is an archive or a vault
     * inventory. For archive data, the Content-Type is application/octet-stream. For
     * vault inventory, if you requested CSV format when you initiated the job, the
     * Content-Type is text/csv. Otherwise, by default, vault inventory is returned as
     * JSON, and the Content-Type is application/json.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    GetJobOutputResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of an archive.</p>
     */
    inline const Aws::String& GetArchiveDescription() const { return m_archiveDescription; }
    template<typename ArchiveDescriptionT = Aws::String>
    void SetArchiveDescription(ArchiveDescriptionT&& value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription = std::forward<ArchiveDescriptionT>(value); }
    template<typename ArchiveDescriptionT = Aws::String>
    GetJobOutputResult& WithArchiveDescription(ArchiveDescriptionT&& value) { SetArchiveDescription(std::forward<ArchiveDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJobOutputResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_body{};
    bool m_bodyHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_contentRange;
    bool m_contentRangeHasBeenSet = false;

    Aws::String m_acceptRanges;
    bool m_acceptRangesHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_archiveDescription;
    bool m_archiveDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
