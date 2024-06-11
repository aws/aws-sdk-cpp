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
    AWS_GLACIER_API UploadListElement();
    AWS_GLACIER_API UploadListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API UploadListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a multipart upload.</p>
     */
    inline const Aws::String& GetMultipartUploadId() const{ return m_multipartUploadId; }
    inline bool MultipartUploadIdHasBeenSet() const { return m_multipartUploadIdHasBeenSet; }
    inline void SetMultipartUploadId(const Aws::String& value) { m_multipartUploadIdHasBeenSet = true; m_multipartUploadId = value; }
    inline void SetMultipartUploadId(Aws::String&& value) { m_multipartUploadIdHasBeenSet = true; m_multipartUploadId = std::move(value); }
    inline void SetMultipartUploadId(const char* value) { m_multipartUploadIdHasBeenSet = true; m_multipartUploadId.assign(value); }
    inline UploadListElement& WithMultipartUploadId(const Aws::String& value) { SetMultipartUploadId(value); return *this;}
    inline UploadListElement& WithMultipartUploadId(Aws::String&& value) { SetMultipartUploadId(std::move(value)); return *this;}
    inline UploadListElement& WithMultipartUploadId(const char* value) { SetMultipartUploadId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vault that contains the archive.</p>
     */
    inline const Aws::String& GetVaultARN() const{ return m_vaultARN; }
    inline bool VaultARNHasBeenSet() const { return m_vaultARNHasBeenSet; }
    inline void SetVaultARN(const Aws::String& value) { m_vaultARNHasBeenSet = true; m_vaultARN = value; }
    inline void SetVaultARN(Aws::String&& value) { m_vaultARNHasBeenSet = true; m_vaultARN = std::move(value); }
    inline void SetVaultARN(const char* value) { m_vaultARNHasBeenSet = true; m_vaultARN.assign(value); }
    inline UploadListElement& WithVaultARN(const Aws::String& value) { SetVaultARN(value); return *this;}
    inline UploadListElement& WithVaultARN(Aws::String&& value) { SetVaultARN(std::move(value)); return *this;}
    inline UploadListElement& WithVaultARN(const char* value) { SetVaultARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline const Aws::String& GetArchiveDescription() const{ return m_archiveDescription; }
    inline bool ArchiveDescriptionHasBeenSet() const { return m_archiveDescriptionHasBeenSet; }
    inline void SetArchiveDescription(const Aws::String& value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription = value; }
    inline void SetArchiveDescription(Aws::String&& value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription = std::move(value); }
    inline void SetArchiveDescription(const char* value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription.assign(value); }
    inline UploadListElement& WithArchiveDescription(const Aws::String& value) { SetArchiveDescription(value); return *this;}
    inline UploadListElement& WithArchiveDescription(Aws::String&& value) { SetArchiveDescription(std::move(value)); return *this;}
    inline UploadListElement& WithArchiveDescription(const char* value) { SetArchiveDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part size, in bytes, specified in the Initiate Multipart Upload request.
     * This is the size of all the parts in the upload except the last part, which may
     * be smaller than this size.</p>
     */
    inline long long GetPartSizeInBytes() const{ return m_partSizeInBytes; }
    inline bool PartSizeInBytesHasBeenSet() const { return m_partSizeInBytesHasBeenSet; }
    inline void SetPartSizeInBytes(long long value) { m_partSizeInBytesHasBeenSet = true; m_partSizeInBytes = value; }
    inline UploadListElement& WithPartSizeInBytes(long long value) { SetPartSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }
    inline UploadListElement& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline UploadListElement& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline UploadListElement& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}
  private:

    Aws::String m_multipartUploadId;
    bool m_multipartUploadIdHasBeenSet = false;

    Aws::String m_vaultARN;
    bool m_vaultARNHasBeenSet = false;

    Aws::String m_archiveDescription;
    bool m_archiveDescriptionHasBeenSet = false;

    long long m_partSizeInBytes;
    bool m_partSizeInBytesHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
