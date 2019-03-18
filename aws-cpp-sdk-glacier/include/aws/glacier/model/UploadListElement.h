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
  class AWS_GLACIER_API UploadListElement
  {
  public:
    UploadListElement();
    UploadListElement(Aws::Utils::Json::JsonView jsonValue);
    UploadListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a multipart upload.</p>
     */
    inline const Aws::String& GetMultipartUploadId() const{ return m_multipartUploadId; }

    /**
     * <p>The ID of a multipart upload.</p>
     */
    inline bool MultipartUploadIdHasBeenSet() const { return m_multipartUploadIdHasBeenSet; }

    /**
     * <p>The ID of a multipart upload.</p>
     */
    inline void SetMultipartUploadId(const Aws::String& value) { m_multipartUploadIdHasBeenSet = true; m_multipartUploadId = value; }

    /**
     * <p>The ID of a multipart upload.</p>
     */
    inline void SetMultipartUploadId(Aws::String&& value) { m_multipartUploadIdHasBeenSet = true; m_multipartUploadId = std::move(value); }

    /**
     * <p>The ID of a multipart upload.</p>
     */
    inline void SetMultipartUploadId(const char* value) { m_multipartUploadIdHasBeenSet = true; m_multipartUploadId.assign(value); }

    /**
     * <p>The ID of a multipart upload.</p>
     */
    inline UploadListElement& WithMultipartUploadId(const Aws::String& value) { SetMultipartUploadId(value); return *this;}

    /**
     * <p>The ID of a multipart upload.</p>
     */
    inline UploadListElement& WithMultipartUploadId(Aws::String&& value) { SetMultipartUploadId(std::move(value)); return *this;}

    /**
     * <p>The ID of a multipart upload.</p>
     */
    inline UploadListElement& WithMultipartUploadId(const char* value) { SetMultipartUploadId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the vault that contains the archive.</p>
     */
    inline const Aws::String& GetVaultARN() const{ return m_vaultARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault that contains the archive.</p>
     */
    inline bool VaultARNHasBeenSet() const { return m_vaultARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault that contains the archive.</p>
     */
    inline void SetVaultARN(const Aws::String& value) { m_vaultARNHasBeenSet = true; m_vaultARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault that contains the archive.</p>
     */
    inline void SetVaultARN(Aws::String&& value) { m_vaultARNHasBeenSet = true; m_vaultARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault that contains the archive.</p>
     */
    inline void SetVaultARN(const char* value) { m_vaultARNHasBeenSet = true; m_vaultARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault that contains the archive.</p>
     */
    inline UploadListElement& WithVaultARN(const Aws::String& value) { SetVaultARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vault that contains the archive.</p>
     */
    inline UploadListElement& WithVaultARN(Aws::String&& value) { SetVaultARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vault that contains the archive.</p>
     */
    inline UploadListElement& WithVaultARN(const char* value) { SetVaultARN(value); return *this;}


    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline const Aws::String& GetArchiveDescription() const{ return m_archiveDescription; }

    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline bool ArchiveDescriptionHasBeenSet() const { return m_archiveDescriptionHasBeenSet; }

    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline void SetArchiveDescription(const Aws::String& value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription = value; }

    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline void SetArchiveDescription(Aws::String&& value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription = std::move(value); }

    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline void SetArchiveDescription(const char* value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription.assign(value); }

    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline UploadListElement& WithArchiveDescription(const Aws::String& value) { SetArchiveDescription(value); return *this;}

    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline UploadListElement& WithArchiveDescription(Aws::String&& value) { SetArchiveDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline UploadListElement& WithArchiveDescription(const char* value) { SetArchiveDescription(value); return *this;}


    /**
     * <p>The part size, in bytes, specified in the Initiate Multipart Upload request.
     * This is the size of all the parts in the upload except the last part, which may
     * be smaller than this size.</p>
     */
    inline long long GetPartSizeInBytes() const{ return m_partSizeInBytes; }

    /**
     * <p>The part size, in bytes, specified in the Initiate Multipart Upload request.
     * This is the size of all the parts in the upload except the last part, which may
     * be smaller than this size.</p>
     */
    inline bool PartSizeInBytesHasBeenSet() const { return m_partSizeInBytesHasBeenSet; }

    /**
     * <p>The part size, in bytes, specified in the Initiate Multipart Upload request.
     * This is the size of all the parts in the upload except the last part, which may
     * be smaller than this size.</p>
     */
    inline void SetPartSizeInBytes(long long value) { m_partSizeInBytesHasBeenSet = true; m_partSizeInBytes = value; }

    /**
     * <p>The part size, in bytes, specified in the Initiate Multipart Upload request.
     * This is the size of all the parts in the upload except the last part, which may
     * be smaller than this size.</p>
     */
    inline UploadListElement& WithPartSizeInBytes(long long value) { SetPartSizeInBytes(value); return *this;}


    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline UploadListElement& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline UploadListElement& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline UploadListElement& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}

  private:

    Aws::String m_multipartUploadId;
    bool m_multipartUploadIdHasBeenSet;

    Aws::String m_vaultARN;
    bool m_vaultARNHasBeenSet;

    Aws::String m_archiveDescription;
    bool m_archiveDescriptionHasBeenSet;

    long long m_partSizeInBytes;
    bool m_partSizeInBytesHasBeenSet;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
