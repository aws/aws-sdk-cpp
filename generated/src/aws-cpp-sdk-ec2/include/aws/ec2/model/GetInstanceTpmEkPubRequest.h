/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/EkPubKeyType.h>
#include <aws/ec2/model/EkPubKeyFormat.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class GetInstanceTpmEkPubRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetInstanceTpmEkPubRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstanceTpmEkPub"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the instance for which to get the public endorsement key.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance for which to get the public endorsement key.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance for which to get the public endorsement key.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance for which to get the public endorsement key.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance for which to get the public endorsement key.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance for which to get the public endorsement key.</p>
     */
    inline GetInstanceTpmEkPubRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance for which to get the public endorsement key.</p>
     */
    inline GetInstanceTpmEkPubRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance for which to get the public endorsement key.</p>
     */
    inline GetInstanceTpmEkPubRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The required public endorsement key type.</p>
     */
    inline const EkPubKeyType& GetKeyType() const{ return m_keyType; }

    /**
     * <p>The required public endorsement key type.</p>
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * <p>The required public endorsement key type.</p>
     */
    inline void SetKeyType(const EkPubKeyType& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>The required public endorsement key type.</p>
     */
    inline void SetKeyType(EkPubKeyType&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * <p>The required public endorsement key type.</p>
     */
    inline GetInstanceTpmEkPubRequest& WithKeyType(const EkPubKeyType& value) { SetKeyType(value); return *this;}

    /**
     * <p>The required public endorsement key type.</p>
     */
    inline GetInstanceTpmEkPubRequest& WithKeyType(EkPubKeyType&& value) { SetKeyType(std::move(value)); return *this;}


    /**
     * <p>The required public endorsement key format. Specify <code>der</code> for a
     * DER-encoded public key that is compatible with OpenSSL. Specify
     * <code>tpmt</code> for a TPM 2.0 format that is compatible with tpm2-tools. The
     * returned key is base64 encoded.</p>
     */
    inline const EkPubKeyFormat& GetKeyFormat() const{ return m_keyFormat; }

    /**
     * <p>The required public endorsement key format. Specify <code>der</code> for a
     * DER-encoded public key that is compatible with OpenSSL. Specify
     * <code>tpmt</code> for a TPM 2.0 format that is compatible with tpm2-tools. The
     * returned key is base64 encoded.</p>
     */
    inline bool KeyFormatHasBeenSet() const { return m_keyFormatHasBeenSet; }

    /**
     * <p>The required public endorsement key format. Specify <code>der</code> for a
     * DER-encoded public key that is compatible with OpenSSL. Specify
     * <code>tpmt</code> for a TPM 2.0 format that is compatible with tpm2-tools. The
     * returned key is base64 encoded.</p>
     */
    inline void SetKeyFormat(const EkPubKeyFormat& value) { m_keyFormatHasBeenSet = true; m_keyFormat = value; }

    /**
     * <p>The required public endorsement key format. Specify <code>der</code> for a
     * DER-encoded public key that is compatible with OpenSSL. Specify
     * <code>tpmt</code> for a TPM 2.0 format that is compatible with tpm2-tools. The
     * returned key is base64 encoded.</p>
     */
    inline void SetKeyFormat(EkPubKeyFormat&& value) { m_keyFormatHasBeenSet = true; m_keyFormat = std::move(value); }

    /**
     * <p>The required public endorsement key format. Specify <code>der</code> for a
     * DER-encoded public key that is compatible with OpenSSL. Specify
     * <code>tpmt</code> for a TPM 2.0 format that is compatible with tpm2-tools. The
     * returned key is base64 encoded.</p>
     */
    inline GetInstanceTpmEkPubRequest& WithKeyFormat(const EkPubKeyFormat& value) { SetKeyFormat(value); return *this;}

    /**
     * <p>The required public endorsement key format. Specify <code>der</code> for a
     * DER-encoded public key that is compatible with OpenSSL. Specify
     * <code>tpmt</code> for a TPM 2.0 format that is compatible with tpm2-tools. The
     * returned key is base64 encoded.</p>
     */
    inline GetInstanceTpmEkPubRequest& WithKeyFormat(EkPubKeyFormat&& value) { SetKeyFormat(std::move(value)); return *this;}


    /**
     * <p>Specify this parameter to verify whether the request will succeed, without
     * actually making the request. If the request will succeed, the response is
     * <code>DryRunOperation</code>. Otherwise, the response is
     * <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Specify this parameter to verify whether the request will succeed, without
     * actually making the request. If the request will succeed, the response is
     * <code>DryRunOperation</code>. Otherwise, the response is
     * <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Specify this parameter to verify whether the request will succeed, without
     * actually making the request. If the request will succeed, the response is
     * <code>DryRunOperation</code>. Otherwise, the response is
     * <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Specify this parameter to verify whether the request will succeed, without
     * actually making the request. If the request will succeed, the response is
     * <code>DryRunOperation</code>. Otherwise, the response is
     * <code>UnauthorizedOperation</code>.</p>
     */
    inline GetInstanceTpmEkPubRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    EkPubKeyType m_keyType;
    bool m_keyTypeHasBeenSet = false;

    EkPubKeyFormat m_keyFormat;
    bool m_keyFormatHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
