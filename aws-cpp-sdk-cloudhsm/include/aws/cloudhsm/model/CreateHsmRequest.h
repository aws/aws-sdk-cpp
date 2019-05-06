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
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudhsm/model/SubscriptionType.h>
#include <utility>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <code>CreateHsm</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateHsmRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDHSM_API CreateHsmRequest : public CloudHSMRequest
  {
  public:
    CreateHsmRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHsm"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the subnet in your VPC in which to place the HSM.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The identifier of the subnet in your VPC in which to place the HSM.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The identifier of the subnet in your VPC in which to place the HSM.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The identifier of the subnet in your VPC in which to place the HSM.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The identifier of the subnet in your VPC in which to place the HSM.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The identifier of the subnet in your VPC in which to place the HSM.</p>
     */
    inline CreateHsmRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The identifier of the subnet in your VPC in which to place the HSM.</p>
     */
    inline CreateHsmRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subnet in your VPC in which to place the HSM.</p>
     */
    inline CreateHsmRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The SSH public key to install on the HSM.</p>
     */
    inline const Aws::String& GetSshKey() const{ return m_sshKey; }

    /**
     * <p>The SSH public key to install on the HSM.</p>
     */
    inline bool SshKeyHasBeenSet() const { return m_sshKeyHasBeenSet; }

    /**
     * <p>The SSH public key to install on the HSM.</p>
     */
    inline void SetSshKey(const Aws::String& value) { m_sshKeyHasBeenSet = true; m_sshKey = value; }

    /**
     * <p>The SSH public key to install on the HSM.</p>
     */
    inline void SetSshKey(Aws::String&& value) { m_sshKeyHasBeenSet = true; m_sshKey = std::move(value); }

    /**
     * <p>The SSH public key to install on the HSM.</p>
     */
    inline void SetSshKey(const char* value) { m_sshKeyHasBeenSet = true; m_sshKey.assign(value); }

    /**
     * <p>The SSH public key to install on the HSM.</p>
     */
    inline CreateHsmRequest& WithSshKey(const Aws::String& value) { SetSshKey(value); return *this;}

    /**
     * <p>The SSH public key to install on the HSM.</p>
     */
    inline CreateHsmRequest& WithSshKey(Aws::String&& value) { SetSshKey(std::move(value)); return *this;}

    /**
     * <p>The SSH public key to install on the HSM.</p>
     */
    inline CreateHsmRequest& WithSshKey(const char* value) { SetSshKey(value); return *this;}


    /**
     * <p>The IP address to assign to the HSM's ENI.</p> <p>If an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the
     * subnet.</p>
     */
    inline const Aws::String& GetEniIp() const{ return m_eniIp; }

    /**
     * <p>The IP address to assign to the HSM's ENI.</p> <p>If an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the
     * subnet.</p>
     */
    inline bool EniIpHasBeenSet() const { return m_eniIpHasBeenSet; }

    /**
     * <p>The IP address to assign to the HSM's ENI.</p> <p>If an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the
     * subnet.</p>
     */
    inline void SetEniIp(const Aws::String& value) { m_eniIpHasBeenSet = true; m_eniIp = value; }

    /**
     * <p>The IP address to assign to the HSM's ENI.</p> <p>If an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the
     * subnet.</p>
     */
    inline void SetEniIp(Aws::String&& value) { m_eniIpHasBeenSet = true; m_eniIp = std::move(value); }

    /**
     * <p>The IP address to assign to the HSM's ENI.</p> <p>If an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the
     * subnet.</p>
     */
    inline void SetEniIp(const char* value) { m_eniIpHasBeenSet = true; m_eniIp.assign(value); }

    /**
     * <p>The IP address to assign to the HSM's ENI.</p> <p>If an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the
     * subnet.</p>
     */
    inline CreateHsmRequest& WithEniIp(const Aws::String& value) { SetEniIp(value); return *this;}

    /**
     * <p>The IP address to assign to the HSM's ENI.</p> <p>If an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the
     * subnet.</p>
     */
    inline CreateHsmRequest& WithEniIp(Aws::String&& value) { SetEniIp(std::move(value)); return *this;}

    /**
     * <p>The IP address to assign to the HSM's ENI.</p> <p>If an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the
     * subnet.</p>
     */
    inline CreateHsmRequest& WithEniIp(const char* value) { SetEniIp(value); return *this;}


    /**
     * <p>The ARN of an IAM role to enable the AWS CloudHSM service to allocate an ENI
     * on your behalf.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The ARN of an IAM role to enable the AWS CloudHSM service to allocate an ENI
     * on your behalf.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role to enable the AWS CloudHSM service to allocate an ENI
     * on your behalf.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The ARN of an IAM role to enable the AWS CloudHSM service to allocate an ENI
     * on your behalf.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role to enable the AWS CloudHSM service to allocate an ENI
     * on your behalf.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role to enable the AWS CloudHSM service to allocate an ENI
     * on your behalf.</p>
     */
    inline CreateHsmRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role to enable the AWS CloudHSM service to allocate an ENI
     * on your behalf.</p>
     */
    inline CreateHsmRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role to enable the AWS CloudHSM service to allocate an ENI
     * on your behalf.</p>
     */
    inline CreateHsmRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The external ID from <code>IamRoleArn</code>, if present.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external ID from <code>IamRoleArn</code>, if present.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The external ID from <code>IamRoleArn</code>, if present.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The external ID from <code>IamRoleArn</code>, if present.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The external ID from <code>IamRoleArn</code>, if present.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The external ID from <code>IamRoleArn</code>, if present.</p>
     */
    inline CreateHsmRequest& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external ID from <code>IamRoleArn</code>, if present.</p>
     */
    inline CreateHsmRequest& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID from <code>IamRoleArn</code>, if present.</p>
     */
    inline CreateHsmRequest& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    
    inline const SubscriptionType& GetSubscriptionType() const{ return m_subscriptionType; }

    
    inline bool SubscriptionTypeHasBeenSet() const { return m_subscriptionTypeHasBeenSet; }

    
    inline void SetSubscriptionType(const SubscriptionType& value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = value; }

    
    inline void SetSubscriptionType(SubscriptionType&& value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = std::move(value); }

    
    inline CreateHsmRequest& WithSubscriptionType(const SubscriptionType& value) { SetSubscriptionType(value); return *this;}

    
    inline CreateHsmRequest& WithSubscriptionType(SubscriptionType&& value) { SetSubscriptionType(std::move(value)); return *this;}


    /**
     * <p>A user-defined token to ensure idempotence. Subsequent calls to this
     * operation with the same token will be ignored.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A user-defined token to ensure idempotence. Subsequent calls to this
     * operation with the same token will be ignored.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A user-defined token to ensure idempotence. Subsequent calls to this
     * operation with the same token will be ignored.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A user-defined token to ensure idempotence. Subsequent calls to this
     * operation with the same token will be ignored.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A user-defined token to ensure idempotence. Subsequent calls to this
     * operation with the same token will be ignored.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A user-defined token to ensure idempotence. Subsequent calls to this
     * operation with the same token will be ignored.</p>
     */
    inline CreateHsmRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A user-defined token to ensure idempotence. Subsequent calls to this
     * operation with the same token will be ignored.</p>
     */
    inline CreateHsmRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A user-defined token to ensure idempotence. Subsequent calls to this
     * operation with the same token will be ignored.</p>
     */
    inline CreateHsmRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline const Aws::String& GetSyslogIp() const{ return m_syslogIp; }

    /**
     * <p>The IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline bool SyslogIpHasBeenSet() const { return m_syslogIpHasBeenSet; }

    /**
     * <p>The IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline void SetSyslogIp(const Aws::String& value) { m_syslogIpHasBeenSet = true; m_syslogIp = value; }

    /**
     * <p>The IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline void SetSyslogIp(Aws::String&& value) { m_syslogIpHasBeenSet = true; m_syslogIp = std::move(value); }

    /**
     * <p>The IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline void SetSyslogIp(const char* value) { m_syslogIpHasBeenSet = true; m_syslogIp.assign(value); }

    /**
     * <p>The IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline CreateHsmRequest& WithSyslogIp(const Aws::String& value) { SetSyslogIp(value); return *this;}

    /**
     * <p>The IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline CreateHsmRequest& WithSyslogIp(Aws::String&& value) { SetSyslogIp(std::move(value)); return *this;}

    /**
     * <p>The IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline CreateHsmRequest& WithSyslogIp(const char* value) { SetSyslogIp(value); return *this;}

  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_sshKey;
    bool m_sshKeyHasBeenSet;

    Aws::String m_eniIp;
    bool m_eniIpHasBeenSet;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;

    SubscriptionType m_subscriptionType;
    bool m_subscriptionTypeHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_syslogIp;
    bool m_syslogIpHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
