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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{

  /**
   * <p>A list of in-progress multipart uploads for a vault.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/UploadListElement">AWS
   * API Reference</a></p>
   */
  class UploadListElement
  {
  public:
    AWS_GLACIER_API UploadListElement() = default;
    AWS_GLACIER_API UploadListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API UploadListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a multipart upload.</p>
     */
    inline const Aws::String& GetMultipartUploadId() const { return m_multipartUploadId; }
    inline bool MultipartUploadIdHasBeenSet() const { return m_multipartUploadIdHasBeenSet; }
    template<typename MultipartUploadIdT = Aws::String>
    void SetMultipartUploadId(MultipartUploadIdT&& value) { m_multipartUploadIdHasBeenSet = true; m_multipartUploadId = std::forward<MultipartUploadIdT>(value); }
    template<typename MultipartUploadIdT = Aws::String>
    UploadListElement& WithMultipartUploadId(MultipartUploadIdT&& value) { SetMultipartUploadId(std::forward<MultipartUploadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vault that contains the archive.</p>
     */
    inline const Aws::String& GetVaultARN() const { return m_vaultARN; }
    inline bool VaultARNHasBeenSet() const { return m_vaultARNHasBeenSet; }
    template<typename VaultARNT = Aws::String>
    void SetVaultARN(VaultARNT&& value) { m_vaultARNHasBeenSet = true; m_vaultARN = std::forward<VaultARNT>(value); }
    template<typename VaultARNT = Aws::String>
    UploadListElement& WithVaultARN(VaultARNT&& value) { SetVaultARN(std::forward<VaultARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline const Aws::String& GetArchiveDescription() const { return m_archiveDescription; }
    inline bool ArchiveDescriptionHasBeenSet() const { return m_archiveDescriptionHasBeenSet; }
    template<typename ArchiveDescriptionT = Aws::String>
    void SetArchiveDescription(ArchiveDescriptionT&& value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription = std::forward<ArchiveDescriptionT>(value); }
    template<typename ArchiveDescriptionT = Aws::String>
    UploadListElement& WithArchiveDescription(ArchiveDescriptionT&& value) { SetArchiveDescription(std::forward<ArchiveDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part size, in bytes, specified in the Initiate Multipart Upload request.
     * This is the size of all the parts in the upload except the last part, which may
     * be smaller than this size.</p>
     */
    inline long long GetPartSizeInBytes() const { return m_partSizeInBytes; }
    inline bool PartSizeInBytesHasBeenSet() const { return m_partSizeInBytesHasBeenSet; }
    inline void SetPartSizeInBytes(long long value) { m_partSizeInBytesHasBeenSet = true; m_partSizeInBytes = value; }
    inline UploadListElement& WithPartSizeInBytes(long long value) { SetPartSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    UploadListElement& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
