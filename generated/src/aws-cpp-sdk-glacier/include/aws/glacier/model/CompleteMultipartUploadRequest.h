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
   * <p>Provides options to complete a multipart upload operation. This informs
   * Amazon Glacier that all the archive parts have been uploaded and Amazon S3
   * Glacier (Glacier) can now assemble the archive from the uploaded parts. After
   * assembling and saving the archive to the vault, Glacier returns the URI path of
   * the newly created archive resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/CompleteMultipartUploadInput">AWS
   * API Reference</a></p>
   */
  class CompleteMultipartUploadRequest : public GlacierRequest
  {
  public:
    AWS_GLACIER_API CompleteMultipartUploadRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CompleteMultipartUpload"; }

    AWS_GLACIER_API Aws::String SerializePayload() const override;

    AWS_GLACIER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CompleteMultipartUploadRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
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
    CompleteMultipartUploadRequest& WithVaultName(VaultNameT&& value) { SetVaultName(std::forward<VaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload ID of the multipart upload.</p>
     */
    inline const Aws::String& GetUploadId() const { return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    template<typename UploadIdT = Aws::String>
    void SetUploadId(UploadIdT&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::forward<UploadIdT>(value); }
    template<typename UploadIdT = Aws::String>
    CompleteMultipartUploadRequest& WithUploadId(UploadIdT&& value) { SetUploadId(std::forward<UploadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size, in bytes, of the entire archive. This value should be the sum
     * of all the sizes of the individual parts that you uploaded.</p>
     */
    inline const Aws::String& GetArchiveSize() const { return m_archiveSize; }
    inline bool ArchiveSizeHasBeenSet() const { return m_archiveSizeHasBeenSet; }
    template<typename ArchiveSizeT = Aws::String>
    void SetArchiveSize(ArchiveSizeT&& value) { m_archiveSizeHasBeenSet = true; m_archiveSize = std::forward<ArchiveSizeT>(value); }
    template<typename ArchiveSizeT = Aws::String>
    CompleteMultipartUploadRequest& WithArchiveSize(ArchiveSizeT&& value) { SetArchiveSize(std::forward<ArchiveSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA256 tree hash of the entire archive. It is the tree hash of SHA256
     * tree hash of the individual parts. If the value you specify in the request does
     * not match the SHA256 tree hash of the final assembled archive as computed by
     * Amazon S3 Glacier (Glacier), Glacier returns an error and the request fails.</p>
     */
    inline const Aws::String& GetChecksum() const { return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    template<typename ChecksumT = Aws::String>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Aws::String>
    CompleteMultipartUploadRequest& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    Aws::String m_archiveSize;
    bool m_archiveSizeHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
