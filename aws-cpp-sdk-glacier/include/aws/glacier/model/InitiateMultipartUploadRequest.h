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
#include <aws/glacier/GlacierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glacier
{
namespace Model
{

  /**
   * <p>Provides options for initiating a multipart upload to an Amazon S3 Glacier
   * vault.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InitiateMultipartUploadInput">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API InitiateMultipartUploadRequest : public GlacierRequest
  {
  public:
    InitiateMultipartUploadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InitiateMultipartUpload"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID. </p>
     */
    inline InitiateMultipartUploadRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID. </p>
     */
    inline InitiateMultipartUploadRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID. </p>
     */
    inline InitiateMultipartUploadRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }

    /**
     * <p>The name of the vault.</p>
     */
    inline bool VaultNameHasBeenSet() const { return m_vaultNameHasBeenSet; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const Aws::String& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(Aws::String&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::move(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const char* value) { m_vaultNameHasBeenSet = true; m_vaultName.assign(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline InitiateMultipartUploadRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline InitiateMultipartUploadRequest& WithVaultName(Aws::String&& value) { SetVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline InitiateMultipartUploadRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}


    /**
     * <p>The archive description that you are uploading in parts.</p> <p>The part size
     * must be a megabyte (1024 KB) multiplied by a power of 2, for example 1048576 (1
     * MB), 2097152 (2 MB), 4194304 (4 MB), 8388608 (8 MB), and so on. The minimum
     * allowable part size is 1 MB, and the maximum is 4 GB (4096 MB).</p>
     */
    inline const Aws::String& GetArchiveDescription() const{ return m_archiveDescription; }

    /**
     * <p>The archive description that you are uploading in parts.</p> <p>The part size
     * must be a megabyte (1024 KB) multiplied by a power of 2, for example 1048576 (1
     * MB), 2097152 (2 MB), 4194304 (4 MB), 8388608 (8 MB), and so on. The minimum
     * allowable part size is 1 MB, and the maximum is 4 GB (4096 MB).</p>
     */
    inline bool ArchiveDescriptionHasBeenSet() const { return m_archiveDescriptionHasBeenSet; }

    /**
     * <p>The archive description that you are uploading in parts.</p> <p>The part size
     * must be a megabyte (1024 KB) multiplied by a power of 2, for example 1048576 (1
     * MB), 2097152 (2 MB), 4194304 (4 MB), 8388608 (8 MB), and so on. The minimum
     * allowable part size is 1 MB, and the maximum is 4 GB (4096 MB).</p>
     */
    inline void SetArchiveDescription(const Aws::String& value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription = value; }

    /**
     * <p>The archive description that you are uploading in parts.</p> <p>The part size
     * must be a megabyte (1024 KB) multiplied by a power of 2, for example 1048576 (1
     * MB), 2097152 (2 MB), 4194304 (4 MB), 8388608 (8 MB), and so on. The minimum
     * allowable part size is 1 MB, and the maximum is 4 GB (4096 MB).</p>
     */
    inline void SetArchiveDescription(Aws::String&& value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription = std::move(value); }

    /**
     * <p>The archive description that you are uploading in parts.</p> <p>The part size
     * must be a megabyte (1024 KB) multiplied by a power of 2, for example 1048576 (1
     * MB), 2097152 (2 MB), 4194304 (4 MB), 8388608 (8 MB), and so on. The minimum
     * allowable part size is 1 MB, and the maximum is 4 GB (4096 MB).</p>
     */
    inline void SetArchiveDescription(const char* value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription.assign(value); }

    /**
     * <p>The archive description that you are uploading in parts.</p> <p>The part size
     * must be a megabyte (1024 KB) multiplied by a power of 2, for example 1048576 (1
     * MB), 2097152 (2 MB), 4194304 (4 MB), 8388608 (8 MB), and so on. The minimum
     * allowable part size is 1 MB, and the maximum is 4 GB (4096 MB).</p>
     */
    inline InitiateMultipartUploadRequest& WithArchiveDescription(const Aws::String& value) { SetArchiveDescription(value); return *this;}

    /**
     * <p>The archive description that you are uploading in parts.</p> <p>The part size
     * must be a megabyte (1024 KB) multiplied by a power of 2, for example 1048576 (1
     * MB), 2097152 (2 MB), 4194304 (4 MB), 8388608 (8 MB), and so on. The minimum
     * allowable part size is 1 MB, and the maximum is 4 GB (4096 MB).</p>
     */
    inline InitiateMultipartUploadRequest& WithArchiveDescription(Aws::String&& value) { SetArchiveDescription(std::move(value)); return *this;}

    /**
     * <p>The archive description that you are uploading in parts.</p> <p>The part size
     * must be a megabyte (1024 KB) multiplied by a power of 2, for example 1048576 (1
     * MB), 2097152 (2 MB), 4194304 (4 MB), 8388608 (8 MB), and so on. The minimum
     * allowable part size is 1 MB, and the maximum is 4 GB (4096 MB).</p>
     */
    inline InitiateMultipartUploadRequest& WithArchiveDescription(const char* value) { SetArchiveDescription(value); return *this;}


    /**
     * <p>The size of each part except the last, in bytes. The last part can be smaller
     * than this part size.</p>
     */
    inline const Aws::String& GetPartSize() const{ return m_partSize; }

    /**
     * <p>The size of each part except the last, in bytes. The last part can be smaller
     * than this part size.</p>
     */
    inline bool PartSizeHasBeenSet() const { return m_partSizeHasBeenSet; }

    /**
     * <p>The size of each part except the last, in bytes. The last part can be smaller
     * than this part size.</p>
     */
    inline void SetPartSize(const Aws::String& value) { m_partSizeHasBeenSet = true; m_partSize = value; }

    /**
     * <p>The size of each part except the last, in bytes. The last part can be smaller
     * than this part size.</p>
     */
    inline void SetPartSize(Aws::String&& value) { m_partSizeHasBeenSet = true; m_partSize = std::move(value); }

    /**
     * <p>The size of each part except the last, in bytes. The last part can be smaller
     * than this part size.</p>
     */
    inline void SetPartSize(const char* value) { m_partSizeHasBeenSet = true; m_partSize.assign(value); }

    /**
     * <p>The size of each part except the last, in bytes. The last part can be smaller
     * than this part size.</p>
     */
    inline InitiateMultipartUploadRequest& WithPartSize(const Aws::String& value) { SetPartSize(value); return *this;}

    /**
     * <p>The size of each part except the last, in bytes. The last part can be smaller
     * than this part size.</p>
     */
    inline InitiateMultipartUploadRequest& WithPartSize(Aws::String&& value) { SetPartSize(std::move(value)); return *this;}

    /**
     * <p>The size of each part except the last, in bytes. The last part can be smaller
     * than this part size.</p>
     */
    inline InitiateMultipartUploadRequest& WithPartSize(const char* value) { SetPartSize(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet;

    Aws::String m_archiveDescription;
    bool m_archiveDescriptionHasBeenSet;

    Aws::String m_partSize;
    bool m_partSizeHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
