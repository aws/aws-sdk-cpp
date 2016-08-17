/*
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

namespace Aws
{
namespace Glacier
{
namespace Model
{

  /**
   * <p>Provides options for downloading output of an Amazon Glacier job.</p>
   */
  class AWS_GLACIER_API GetJobOutputRequest : public GlacierRequest
  {
  public:
    GetJobOutputRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline GetJobOutputRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline GetJobOutputRequest& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline GetJobOutputRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

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
    inline GetJobOutputRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline GetJobOutputRequest& WithVaultName(Aws::String&& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline GetJobOutputRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline GetJobOutputRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline GetJobOutputRequest& WithJobId(Aws::String&& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline GetJobOutputRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify "Range: bytes=0-1048575". By
     * default, this operation downloads the entire output. </p>
     */
    inline const Aws::String& GetRange() const{ return m_range; }

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify "Range: bytes=0-1048575". By
     * default, this operation downloads the entire output. </p>
     */
    inline void SetRange(const Aws::String& value) { m_rangeHasBeenSet = true; m_range = value; }

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify "Range: bytes=0-1048575". By
     * default, this operation downloads the entire output. </p>
     */
    inline void SetRange(Aws::String&& value) { m_rangeHasBeenSet = true; m_range = value; }

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify "Range: bytes=0-1048575". By
     * default, this operation downloads the entire output. </p>
     */
    inline void SetRange(const char* value) { m_rangeHasBeenSet = true; m_range.assign(value); }

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify "Range: bytes=0-1048575". By
     * default, this operation downloads the entire output. </p>
     */
    inline GetJobOutputRequest& WithRange(const Aws::String& value) { SetRange(value); return *this;}

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify "Range: bytes=0-1048575". By
     * default, this operation downloads the entire output. </p>
     */
    inline GetJobOutputRequest& WithRange(Aws::String&& value) { SetRange(value); return *this;}

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify "Range: bytes=0-1048575". By
     * default, this operation downloads the entire output. </p>
     */
    inline GetJobOutputRequest& WithRange(const char* value) { SetRange(value); return *this;}

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet;
    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
    Aws::String m_range;
    bool m_rangeHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
