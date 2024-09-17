/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/GlacierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Glacier
{
namespace Model
{

  /**
   * <p>Provides options to add an archive to a vault.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/UploadArchiveInput">AWS
   * API Reference</a></p>
   */
  class UploadArchiveRequest : public StreamingGlacierRequest
  {
  public:
    AWS_GLACIER_API UploadArchiveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UploadArchive"; }

    AWS_GLACIER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }
    inline bool VaultNameHasBeenSet() const { return m_vaultNameHasBeenSet; }
    inline void SetVaultName(const Aws::String& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }
    inline void SetVaultName(Aws::String&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::move(value); }
    inline void SetVaultName(const char* value) { m_vaultNameHasBeenSet = true; m_vaultName.assign(value); }
    inline UploadArchiveRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}
    inline UploadArchiveRequest& WithVaultName(Aws::String&& value) { SetVaultName(std::move(value)); return *this;}
    inline UploadArchiveRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline UploadArchiveRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline UploadArchiveRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline UploadArchiveRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description of the archive you are uploading.</p>
     */
    inline const Aws::String& GetArchiveDescription() const{ return m_archiveDescription; }
    inline bool ArchiveDescriptionHasBeenSet() const { return m_archiveDescriptionHasBeenSet; }
    inline void SetArchiveDescription(const Aws::String& value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription = value; }
    inline void SetArchiveDescription(Aws::String&& value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription = std::move(value); }
    inline void SetArchiveDescription(const char* value) { m_archiveDescriptionHasBeenSet = true; m_archiveDescription.assign(value); }
    inline UploadArchiveRequest& WithArchiveDescription(const Aws::String& value) { SetArchiveDescription(value); return *this;}
    inline UploadArchiveRequest& WithArchiveDescription(Aws::String&& value) { SetArchiveDescription(std::move(value)); return *this;}
    inline UploadArchiveRequest& WithArchiveDescription(const char* value) { SetArchiveDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA256 tree hash of the data being uploaded.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }
    inline UploadArchiveRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}
    inline UploadArchiveRequest& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}
    inline UploadArchiveRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}
    ///@}
  private:

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_archiveDescription;
    bool m_archiveDescriptionHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
