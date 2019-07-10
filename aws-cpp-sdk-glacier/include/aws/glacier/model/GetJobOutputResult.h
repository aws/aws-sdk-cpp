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
  class AWS_GLACIER_API GetJobOutputResult
  {
  public:
    GetJobOutputResult();
    //We have to define these because Microsoft doesn't auto generate them
    GetJobOutputResult(GetJobOutputResult&&);
    GetJobOutputResult& operator=(GetJobOutputResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetJobOutputResult(const GetJobOutputResult&) = delete;
    GetJobOutputResult& operator=(const GetJobOutputResult&) = delete;


    GetJobOutputResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    GetJobOutputResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The job data, either archive data or inventory data.</p>
     */
    inline Aws::IOStream& GetBody() { return m_body.GetUnderlyingStream(); }

    /**
     * <p>The job data, either archive data or inventory data.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }


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
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

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
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }

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
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }

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
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }

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
    inline GetJobOutputResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

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
    inline GetJobOutputResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

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
    inline GetJobOutputResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * <p>The HTTP response code for a job output request. The value depends on whether
     * a range was specified in the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP response code for a job output request. The value depends on whether
     * a range was specified in the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP response code for a job output request. The value depends on whether
     * a range was specified in the request.</p>
     */
    inline GetJobOutputResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The range of bytes returned by Amazon S3 Glacier. If only partial output is
     * downloaded, the response provides the range of bytes Amazon S3 Glacier returned.
     * For example, bytes 0-1048575/8388608 returns the first 1 MB from 8 MB.</p>
     */
    inline const Aws::String& GetContentRange() const{ return m_contentRange; }

    /**
     * <p>The range of bytes returned by Amazon S3 Glacier. If only partial output is
     * downloaded, the response provides the range of bytes Amazon S3 Glacier returned.
     * For example, bytes 0-1048575/8388608 returns the first 1 MB from 8 MB.</p>
     */
    inline void SetContentRange(const Aws::String& value) { m_contentRange = value; }

    /**
     * <p>The range of bytes returned by Amazon S3 Glacier. If only partial output is
     * downloaded, the response provides the range of bytes Amazon S3 Glacier returned.
     * For example, bytes 0-1048575/8388608 returns the first 1 MB from 8 MB.</p>
     */
    inline void SetContentRange(Aws::String&& value) { m_contentRange = std::move(value); }

    /**
     * <p>The range of bytes returned by Amazon S3 Glacier. If only partial output is
     * downloaded, the response provides the range of bytes Amazon S3 Glacier returned.
     * For example, bytes 0-1048575/8388608 returns the first 1 MB from 8 MB.</p>
     */
    inline void SetContentRange(const char* value) { m_contentRange.assign(value); }

    /**
     * <p>The range of bytes returned by Amazon S3 Glacier. If only partial output is
     * downloaded, the response provides the range of bytes Amazon S3 Glacier returned.
     * For example, bytes 0-1048575/8388608 returns the first 1 MB from 8 MB.</p>
     */
    inline GetJobOutputResult& WithContentRange(const Aws::String& value) { SetContentRange(value); return *this;}

    /**
     * <p>The range of bytes returned by Amazon S3 Glacier. If only partial output is
     * downloaded, the response provides the range of bytes Amazon S3 Glacier returned.
     * For example, bytes 0-1048575/8388608 returns the first 1 MB from 8 MB.</p>
     */
    inline GetJobOutputResult& WithContentRange(Aws::String&& value) { SetContentRange(std::move(value)); return *this;}

    /**
     * <p>The range of bytes returned by Amazon S3 Glacier. If only partial output is
     * downloaded, the response provides the range of bytes Amazon S3 Glacier returned.
     * For example, bytes 0-1048575/8388608 returns the first 1 MB from 8 MB.</p>
     */
    inline GetJobOutputResult& WithContentRange(const char* value) { SetContentRange(value); return *this;}


    /**
     * <p>Indicates the range units accepted. For more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html">RFC2616</a>. </p>
     */
    inline const Aws::String& GetAcceptRanges() const{ return m_acceptRanges; }

    /**
     * <p>Indicates the range units accepted. For more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html">RFC2616</a>. </p>
     */
    inline void SetAcceptRanges(const Aws::String& value) { m_acceptRanges = value; }

    /**
     * <p>Indicates the range units accepted. For more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html">RFC2616</a>. </p>
     */
    inline void SetAcceptRanges(Aws::String&& value) { m_acceptRanges = std::move(value); }

    /**
     * <p>Indicates the range units accepted. For more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html">RFC2616</a>. </p>
     */
    inline void SetAcceptRanges(const char* value) { m_acceptRanges.assign(value); }

    /**
     * <p>Indicates the range units accepted. For more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html">RFC2616</a>. </p>
     */
    inline GetJobOutputResult& WithAcceptRanges(const Aws::String& value) { SetAcceptRanges(value); return *this;}

    /**
     * <p>Indicates the range units accepted. For more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html">RFC2616</a>. </p>
     */
    inline GetJobOutputResult& WithAcceptRanges(Aws::String&& value) { SetAcceptRanges(std::move(value)); return *this;}

    /**
     * <p>Indicates the range units accepted. For more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html">RFC2616</a>. </p>
     */
    inline GetJobOutputResult& WithAcceptRanges(const char* value) { SetAcceptRanges(value); return *this;}


    /**
     * <p>The Content-Type depends on whether the job output is an archive or a vault
     * inventory. For archive data, the Content-Type is application/octet-stream. For
     * vault inventory, if you requested CSV format when you initiated the job, the
     * Content-Type is text/csv. Otherwise, by default, vault inventory is returned as
     * JSON, and the Content-Type is application/json.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The Content-Type depends on whether the job output is an archive or a vault
     * inventory. For archive data, the Content-Type is application/octet-stream. For
     * vault inventory, if you requested CSV format when you initiated the job, the
     * Content-Type is text/csv. Otherwise, by default, vault inventory is returned as
     * JSON, and the Content-Type is application/json.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The Content-Type depends on whether the job output is an archive or a vault
     * inventory. For archive data, the Content-Type is application/octet-stream. For
     * vault inventory, if you requested CSV format when you initiated the job, the
     * Content-Type is text/csv. Otherwise, by default, vault inventory is returned as
     * JSON, and the Content-Type is application/json.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The Content-Type depends on whether the job output is an archive or a vault
     * inventory. For archive data, the Content-Type is application/octet-stream. For
     * vault inventory, if you requested CSV format when you initiated the job, the
     * Content-Type is text/csv. Otherwise, by default, vault inventory is returned as
     * JSON, and the Content-Type is application/json.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The Content-Type depends on whether the job output is an archive or a vault
     * inventory. For archive data, the Content-Type is application/octet-stream. For
     * vault inventory, if you requested CSV format when you initiated the job, the
     * Content-Type is text/csv. Otherwise, by default, vault inventory is returned as
     * JSON, and the Content-Type is application/json.</p>
     */
    inline GetJobOutputResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The Content-Type depends on whether the job output is an archive or a vault
     * inventory. For archive data, the Content-Type is application/octet-stream. For
     * vault inventory, if you requested CSV format when you initiated the job, the
     * Content-Type is text/csv. Otherwise, by default, vault inventory is returned as
     * JSON, and the Content-Type is application/json.</p>
     */
    inline GetJobOutputResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The Content-Type depends on whether the job output is an archive or a vault
     * inventory. For archive data, the Content-Type is application/octet-stream. For
     * vault inventory, if you requested CSV format when you initiated the job, the
     * Content-Type is text/csv. Otherwise, by default, vault inventory is returned as
     * JSON, and the Content-Type is application/json.</p>
     */
    inline GetJobOutputResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The description of an archive.</p>
     */
    inline const Aws::String& GetArchiveDescription() const{ return m_archiveDescription; }

    /**
     * <p>The description of an archive.</p>
     */
    inline void SetArchiveDescription(const Aws::String& value) { m_archiveDescription = value; }

    /**
     * <p>The description of an archive.</p>
     */
    inline void SetArchiveDescription(Aws::String&& value) { m_archiveDescription = std::move(value); }

    /**
     * <p>The description of an archive.</p>
     */
    inline void SetArchiveDescription(const char* value) { m_archiveDescription.assign(value); }

    /**
     * <p>The description of an archive.</p>
     */
    inline GetJobOutputResult& WithArchiveDescription(const Aws::String& value) { SetArchiveDescription(value); return *this;}

    /**
     * <p>The description of an archive.</p>
     */
    inline GetJobOutputResult& WithArchiveDescription(Aws::String&& value) { SetArchiveDescription(std::move(value)); return *this;}

    /**
     * <p>The description of an archive.</p>
     */
    inline GetJobOutputResult& WithArchiveDescription(const char* value) { SetArchiveDescription(value); return *this;}

  private:

  Aws::Utils::Stream::ResponseStream m_body;

    Aws::String m_checksum;

    int m_status;

    Aws::String m_contentRange;

    Aws::String m_acceptRanges;

    Aws::String m_contentType;

    Aws::String m_archiveDescription;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
