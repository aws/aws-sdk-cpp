/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glacier/model/PartListElement.h>
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
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListPartsOutput">AWS
   * API Reference</a></p>
   */
  class ListPartsResult
  {
  public:
    AWS_GLACIER_API ListPartsResult() = default;
    AWS_GLACIER_API ListPartsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API ListPartsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the upload to which the parts are associated.</p>
     */
    inline const Aws::String& GetMultipartUploadId() const { return m_multipartUploadId; }
    template<typename MultipartUploadIdT = Aws::String>
    void SetMultipartUploadId(MultipartUploadIdT&& value) { m_multipartUploadIdHasBeenSet = true; m_multipartUploadId = std::forward<MultipartUploadIdT>(value); }
    template<typename MultipartUploadIdT = Aws::String>
    ListPartsResult& WithMultipartUploadId(MultipartUploadIdT&& value) { SetMultipartUploadId(std::forward<MultipartUploadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vault to which the multipart upload was
     * initiated.</p>
     */
    inline const Aws::String& GetVaultARN() const { return m_vaultARN; }
    template<typename VaultARNT = Aws::String>
    void SetVaultARN(VaultARNT&& value) { m_vaultARNHasBeenSet = true; m_vaultARN = std::forward<VaultARNT>(value); }
    template<typename VaultARNT = Aws::String>
    ListPartsResult& WithVaultARN(VaultARNT&& value) { SetVaultARN(std::forward<VaultARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline const Aws::String& GetArchiveDescription() const { return m_archiveDescription; }
    template<typename ArchiveDescriptionT = Aws::String>
    void SetArchiveDescription(ArchiveDescriptionT&& value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription = std::forward<ArchiveDescriptionT>(value); }
    template<typename ArchiveDescriptionT = Aws::String>
    ListPartsResult& WithArchiveDescription(ArchiveDescriptionT&& value) { SetArchiveDescription(std::forward<ArchiveDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part size in bytes. This is the same value that you specified in the
     * Initiate Multipart Upload request.</p>
     */
    inline long long GetPartSizeInBytes() const { return m_partSizeInBytes; }
    inline void SetPartSizeInBytes(long long value) { m_partSizeInBytesHasBeenSet = true; m_partSizeInBytes = value; }
    inline ListPartsResult& WithPartSizeInBytes(long long value) { SetPartSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    ListPartsResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the part sizes of the multipart upload. Each object in the array
     * contains a <code>RangeBytes</code> and <code>sha256-tree-hash</code> name/value
     * pair.</p>
     */
    inline const Aws::Vector<PartListElement>& GetParts() const { return m_parts; }
    template<typename PartsT = Aws::Vector<PartListElement>>
    void SetParts(PartsT&& value) { m_partsHasBeenSet = true; m_parts = std::forward<PartsT>(value); }
    template<typename PartsT = Aws::Vector<PartListElement>>
    ListPartsResult& WithParts(PartsT&& value) { SetParts(std::forward<PartsT>(value)); return *this;}
    template<typename PartsT = PartListElement>
    ListPartsResult& AddParts(PartsT&& value) { m_partsHasBeenSet = true; m_parts.emplace_back(std::forward<PartsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Parts request to obtain more jobs in the list.
     * If there are no more parts, this value is <code>null</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListPartsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPartsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_multipartUploadId;
    bool m_multipartUploadIdHasBeenSet = false;

    Aws::String m_vaultARN;
    bool m_vaultARNHasBeenSet = false;

    Aws::String m_archiveDescription;
    bool m_archiveDescriptionHasBeenSet = false;

    long long m_partSizeInBytes{0};
    bool m_partSizeInBytesHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Vector<PartListElement> m_parts;
    bool m_partsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
