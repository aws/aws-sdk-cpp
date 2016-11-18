﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/Array.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{

  /**
   * <p>Provides options to upload a part of an archive in a multipart upload
   * operation.</p>
   */
  class AWS_GLACIER_API UploadMultipartPartRequest : public StreamingGlacierRequest
  {
  public:
    UploadMultipartPartRequest();
    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline UploadMultipartPartRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline UploadMultipartPartRequest& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline UploadMultipartPartRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const Aws::String& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(Aws::String&& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const char* value) { m_vaultNameHasBeenSet = true; m_vaultName.assign(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline UploadMultipartPartRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline UploadMultipartPartRequest& WithVaultName(Aws::String&& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline UploadMultipartPartRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}

    /**
     * <p>The upload ID of the multipart upload.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p>The upload ID of the multipart upload.</p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * <p>The upload ID of the multipart upload.</p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * <p>The upload ID of the multipart upload.</p>
     */
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }

    /**
     * <p>The upload ID of the multipart upload.</p>
     */
    inline UploadMultipartPartRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p>The upload ID of the multipart upload.</p>
     */
    inline UploadMultipartPartRequest& WithUploadId(Aws::String&& value) { SetUploadId(value); return *this;}

    /**
     * <p>The upload ID of the multipart upload.</p>
     */
    inline UploadMultipartPartRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}

    /**
     * <p>The SHA256 tree hash of the data being uploaded. </p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>The SHA256 tree hash of the data being uploaded. </p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * <p>The SHA256 tree hash of the data being uploaded. </p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * <p>The SHA256 tree hash of the data being uploaded. </p>
     */
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }

    /**
     * <p>The SHA256 tree hash of the data being uploaded. </p>
     */
    inline UploadMultipartPartRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>The SHA256 tree hash of the data being uploaded. </p>
     */
    inline UploadMultipartPartRequest& WithChecksum(Aws::String&& value) { SetChecksum(value); return *this;}

    /**
     * <p>The SHA256 tree hash of the data being uploaded. </p>
     */
    inline UploadMultipartPartRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}

    /**
     * <p>Identifies the range of bytes in the assembled archive that will be uploaded
     * in this part. Amazon Glacier uses this information to assemble the archive in
     * the proper sequence. The format of this header follows RFC 2616. An example
     * header is Content-Range:bytes 0-4194303/ *.</p>
     */
    inline const Aws::String& GetRange() const{ return m_range; }

    /**
     * <p>Identifies the range of bytes in the assembled archive that will be uploaded
     * in this part. Amazon Glacier uses this information to assemble the archive in
     * the proper sequence. The format of this header follows RFC 2616. An example
     * header is Content-Range:bytes 0-4194303/ *.</p>
     */
    inline void SetRange(const Aws::String& value) { m_rangeHasBeenSet = true; m_range = value; }

    /**
     * <p>Identifies the range of bytes in the assembled archive that will be uploaded
     * in this part. Amazon Glacier uses this information to assemble the archive in
     * the proper sequence. The format of this header follows RFC 2616. An example
     * header is Content-Range:bytes 0-4194303/ *.</p>
     */
    inline void SetRange(Aws::String&& value) { m_rangeHasBeenSet = true; m_range = value; }

    /**
     * <p>Identifies the range of bytes in the assembled archive that will be uploaded
     * in this part. Amazon Glacier uses this information to assemble the archive in
     * the proper sequence. The format of this header follows RFC 2616. An example
     * header is Content-Range:bytes 0-4194303/ *.</p>
     */
    inline void SetRange(const char* value) { m_rangeHasBeenSet = true; m_range.assign(value); }

    /**
     * <p>Identifies the range of bytes in the assembled archive that will be uploaded
     * in this part. Amazon Glacier uses this information to assemble the archive in
     * the proper sequence. The format of this header follows RFC 2616. An example
     * header is Content-Range:bytes 0-4194303/ *.</p>
     */
    inline UploadMultipartPartRequest& WithRange(const Aws::String& value) { SetRange(value); return *this;}

    /**
     * <p>Identifies the range of bytes in the assembled archive that will be uploaded
     * in this part. Amazon Glacier uses this information to assemble the archive in
     * the proper sequence. The format of this header follows RFC 2616. An example
     * header is Content-Range:bytes 0-4194303/ *.</p>
     */
    inline UploadMultipartPartRequest& WithRange(Aws::String&& value) { SetRange(value); return *this;}

    /**
     * <p>Identifies the range of bytes in the assembled archive that will be uploaded
     * in this part. Amazon Glacier uses this information to assemble the archive in
     * the proper sequence. The format of this header follows RFC 2616. An example
     * header is Content-Range:bytes 0-4194303/ *.</p>
     */
    inline UploadMultipartPartRequest& WithRange(const char* value) { SetRange(value); return *this;}

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet;
    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet;
    Aws::String m_checksum;
    bool m_checksumHasBeenSet;
    Aws::String m_range;
    bool m_rangeHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
