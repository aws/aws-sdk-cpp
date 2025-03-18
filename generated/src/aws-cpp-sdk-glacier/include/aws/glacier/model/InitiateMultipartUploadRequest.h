/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InitiateMultipartUploadRequest : public GlacierRequest
  {
  public:
    AWS_GLACIER_API InitiateMultipartUploadRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InitiateMultipartUpload"; }

    AWS_GLACIER_API Aws::String SerializePayload() const override;

    AWS_GLACIER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    InitiateMultipartUploadRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const { return m_vaultName; }
    inline bool VaultNameHasBeenSet() const { return m_vaultNameHasBeenSet; }
    template<typename VaultNameT = Aws::String>
    void SetVaultName(VaultNameT&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::forward<VaultNameT>(value); }
    template<typename VaultNameT = Aws::String>
    InitiateMultipartUploadRequest& WithVaultName(VaultNameT&& value) { SetVaultName(std::forward<VaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The archive description that you are uploading in parts.</p> <p>The part size
     * must be a megabyte (1024 KB) multiplied by a power of 2, for example 1048576 (1
     * MB), 2097152 (2 MB), 4194304 (4 MB), 8388608 (8 MB), and so on. The minimum
     * allowable part size is 1 MB, and the maximum is 4 GB (4096 MB).</p>
     */
    inline const Aws::String& GetArchiveDescription() const { return m_archiveDescription; }
    inline bool ArchiveDescriptionHasBeenSet() const { return m_archiveDescriptionHasBeenSet; }
    template<typename ArchiveDescriptionT = Aws::String>
    void SetArchiveDescription(ArchiveDescriptionT&& value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription = std::forward<ArchiveDescriptionT>(value); }
    template<typename ArchiveDescriptionT = Aws::String>
    InitiateMultipartUploadRequest& WithArchiveDescription(ArchiveDescriptionT&& value) { SetArchiveDescription(std::forward<ArchiveDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of each part except the last, in bytes. The last part can be smaller
     * than this part size.</p>
     */
    inline const Aws::String& GetPartSize() const { return m_partSize; }
    inline bool PartSizeHasBeenSet() const { return m_partSizeHasBeenSet; }
    template<typename PartSizeT = Aws::String>
    void SetPartSize(PartSizeT&& value) { m_partSizeHasBeenSet = true; m_partSize = std::forward<PartSizeT>(value); }
    template<typename PartSizeT = Aws::String>
    InitiateMultipartUploadRequest& WithPartSize(PartSizeT&& value) { SetPartSize(std::forward<PartSizeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet = false;

    Aws::String m_archiveDescription;
    bool m_archiveDescriptionHasBeenSet = false;

    Aws::String m_partSize;
    bool m_partSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
