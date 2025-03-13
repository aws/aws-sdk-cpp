/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p> <p>For
   * information about the underlying REST API, see <a
   * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-archive-post.html">Upload
   * Archive</a>. For conceptual information, see <a
   * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/working-with-archives.html">Working
   * with Archives in Amazon S3 Glacier</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ArchiveCreationOutput">AWS
   * API Reference</a></p>
   */
  class CompleteMultipartUploadResult
  {
  public:
    AWS_GLACIER_API CompleteMultipartUploadResult() = default;
    AWS_GLACIER_API CompleteMultipartUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API CompleteMultipartUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The relative URI path of the newly added archive resource.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    CompleteMultipartUploadResult& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The checksum of the archive computed by Amazon S3 Glacier.</p>
     */
    inline const Aws::String& GetChecksum() const { return m_checksum; }
    template<typename ChecksumT = Aws::String>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Aws::String>
    CompleteMultipartUploadResult& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the archive. This value is also included as part of the
     * location.</p>
     */
    inline const Aws::String& GetArchiveId() const { return m_archiveId; }
    template<typename ArchiveIdT = Aws::String>
    void SetArchiveId(ArchiveIdT&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::forward<ArchiveIdT>(value); }
    template<typename ArchiveIdT = Aws::String>
    CompleteMultipartUploadResult& WithArchiveId(ArchiveIdT&& value) { SetArchiveId(std::forward<ArchiveIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CompleteMultipartUploadResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
