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
   * <p>Provides options to upload a part of an archive in a multipart upload
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/UploadMultipartPartInput">AWS
   * API Reference</a></p>
   */
  class UploadMultipartPartRequest : public StreamingGlacierRequest
  {
  public:
    AWS_GLACIER_API UploadMultipartPartRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UploadMultipartPart"; }

    AWS_GLACIER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline UploadMultipartPartRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline UploadMultipartPartRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline UploadMultipartPartRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }
    inline bool VaultNameHasBeenSet() const { return m_vaultNameHasBeenSet; }
    inline void SetVaultName(const Aws::String& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }
    inline void SetVaultName(Aws::String&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::move(value); }
    inline void SetVaultName(const char* value) { m_vaultNameHasBeenSet = true; m_vaultName.assign(value); }
    inline UploadMultipartPartRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}
    inline UploadMultipartPartRequest& WithVaultName(Aws::String&& value) { SetVaultName(std::move(value)); return *this;}
    inline UploadMultipartPartRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload ID of the multipart upload.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }
    inline UploadMultipartPartRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}
    inline UploadMultipartPartRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}
    inline UploadMultipartPartRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}
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
    inline UploadMultipartPartRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}
    inline UploadMultipartPartRequest& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}
    inline UploadMultipartPartRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the range of bytes in the assembled archive that will be uploaded
     * in this part. Amazon S3 Glacier uses this information to assemble the archive in
     * the proper sequence. The format of this header follows RFC 2616. An example
     * header is Content-Range:bytes 0-4194303/ *.</p>
     */
    inline const Aws::String& GetRange() const{ return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    inline void SetRange(const Aws::String& value) { m_rangeHasBeenSet = true; m_range = value; }
    inline void SetRange(Aws::String&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }
    inline void SetRange(const char* value) { m_rangeHasBeenSet = true; m_range.assign(value); }
    inline UploadMultipartPartRequest& WithRange(const Aws::String& value) { SetRange(value); return *this;}
    inline UploadMultipartPartRequest& WithRange(Aws::String&& value) { SetRange(std::move(value)); return *this;}
    inline UploadMultipartPartRequest& WithRange(const char* value) { SetRange(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    Aws::String m_range;
    bool m_rangeHasBeenSet = false;

  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
