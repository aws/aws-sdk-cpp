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
    AWS_EC2_API GetInstanceTpmEkPubRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstanceTpmEkPub"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the instance for which to get the public endorsement key.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    GetInstanceTpmEkPubRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required public endorsement key type.</p>
     */
    inline EkPubKeyType GetKeyType() const { return m_keyType; }
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }
    inline void SetKeyType(EkPubKeyType value) { m_keyTypeHasBeenSet = true; m_keyType = value; }
    inline GetInstanceTpmEkPubRequest& WithKeyType(EkPubKeyType value) { SetKeyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required public endorsement key format. Specify <code>der</code> for a
     * DER-encoded public key that is compatible with OpenSSL. Specify
     * <code>tpmt</code> for a TPM 2.0 format that is compatible with tpm2-tools. The
     * returned key is base64 encoded.</p>
     */
    inline EkPubKeyFormat GetKeyFormat() const { return m_keyFormat; }
    inline bool KeyFormatHasBeenSet() const { return m_keyFormatHasBeenSet; }
    inline void SetKeyFormat(EkPubKeyFormat value) { m_keyFormatHasBeenSet = true; m_keyFormat = value; }
    inline GetInstanceTpmEkPubRequest& WithKeyFormat(EkPubKeyFormat value) { SetKeyFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this parameter to verify whether the request will succeed, without
     * actually making the request. If the request will succeed, the response is
     * <code>DryRunOperation</code>. Otherwise, the response is
     * <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline GetInstanceTpmEkPubRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    EkPubKeyType m_keyType{EkPubKeyType::NOT_SET};
    bool m_keyTypeHasBeenSet = false;

    EkPubKeyFormat m_keyFormat{EkPubKeyFormat::NOT_SET};
    bool m_keyFormatHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
