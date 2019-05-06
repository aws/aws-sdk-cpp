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
#include <utility>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>ModifyHsm</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyHsmRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDHSM_API ModifyHsmRequest : public CloudHSMRequest
  {
  public:
    ModifyHsmRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyHsm"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the HSM to modify.</p>
     */
    inline const Aws::String& GetHsmArn() const{ return m_hsmArn; }

    /**
     * <p>The ARN of the HSM to modify.</p>
     */
    inline bool HsmArnHasBeenSet() const { return m_hsmArnHasBeenSet; }

    /**
     * <p>The ARN of the HSM to modify.</p>
     */
    inline void SetHsmArn(const Aws::String& value) { m_hsmArnHasBeenSet = true; m_hsmArn = value; }

    /**
     * <p>The ARN of the HSM to modify.</p>
     */
    inline void SetHsmArn(Aws::String&& value) { m_hsmArnHasBeenSet = true; m_hsmArn = std::move(value); }

    /**
     * <p>The ARN of the HSM to modify.</p>
     */
    inline void SetHsmArn(const char* value) { m_hsmArnHasBeenSet = true; m_hsmArn.assign(value); }

    /**
     * <p>The ARN of the HSM to modify.</p>
     */
    inline ModifyHsmRequest& WithHsmArn(const Aws::String& value) { SetHsmArn(value); return *this;}

    /**
     * <p>The ARN of the HSM to modify.</p>
     */
    inline ModifyHsmRequest& WithHsmArn(Aws::String&& value) { SetHsmArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the HSM to modify.</p>
     */
    inline ModifyHsmRequest& WithHsmArn(const char* value) { SetHsmArn(value); return *this;}


    /**
     * <p>The new identifier of the subnet that the HSM is in. The new subnet must be
     * in the same Availability Zone as the current subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The new identifier of the subnet that the HSM is in. The new subnet must be
     * in the same Availability Zone as the current subnet.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The new identifier of the subnet that the HSM is in. The new subnet must be
     * in the same Availability Zone as the current subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The new identifier of the subnet that the HSM is in. The new subnet must be
     * in the same Availability Zone as the current subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The new identifier of the subnet that the HSM is in. The new subnet must be
     * in the same Availability Zone as the current subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The new identifier of the subnet that the HSM is in. The new subnet must be
     * in the same Availability Zone as the current subnet.</p>
     */
    inline ModifyHsmRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The new identifier of the subnet that the HSM is in. The new subnet must be
     * in the same Availability Zone as the current subnet.</p>
     */
    inline ModifyHsmRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The new identifier of the subnet that the HSM is in. The new subnet must be
     * in the same Availability Zone as the current subnet.</p>
     */
    inline ModifyHsmRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The new IP address for the elastic network interface (ENI) attached to the
     * HSM.</p> <p>If the HSM is moved to a different subnet, and an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the new
     * subnet.</p>
     */
    inline const Aws::String& GetEniIp() const{ return m_eniIp; }

    /**
     * <p>The new IP address for the elastic network interface (ENI) attached to the
     * HSM.</p> <p>If the HSM is moved to a different subnet, and an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the new
     * subnet.</p>
     */
    inline bool EniIpHasBeenSet() const { return m_eniIpHasBeenSet; }

    /**
     * <p>The new IP address for the elastic network interface (ENI) attached to the
     * HSM.</p> <p>If the HSM is moved to a different subnet, and an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the new
     * subnet.</p>
     */
    inline void SetEniIp(const Aws::String& value) { m_eniIpHasBeenSet = true; m_eniIp = value; }

    /**
     * <p>The new IP address for the elastic network interface (ENI) attached to the
     * HSM.</p> <p>If the HSM is moved to a different subnet, and an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the new
     * subnet.</p>
     */
    inline void SetEniIp(Aws::String&& value) { m_eniIpHasBeenSet = true; m_eniIp = std::move(value); }

    /**
     * <p>The new IP address for the elastic network interface (ENI) attached to the
     * HSM.</p> <p>If the HSM is moved to a different subnet, and an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the new
     * subnet.</p>
     */
    inline void SetEniIp(const char* value) { m_eniIpHasBeenSet = true; m_eniIp.assign(value); }

    /**
     * <p>The new IP address for the elastic network interface (ENI) attached to the
     * HSM.</p> <p>If the HSM is moved to a different subnet, and an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the new
     * subnet.</p>
     */
    inline ModifyHsmRequest& WithEniIp(const Aws::String& value) { SetEniIp(value); return *this;}

    /**
     * <p>The new IP address for the elastic network interface (ENI) attached to the
     * HSM.</p> <p>If the HSM is moved to a different subnet, and an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the new
     * subnet.</p>
     */
    inline ModifyHsmRequest& WithEniIp(Aws::String&& value) { SetEniIp(std::move(value)); return *this;}

    /**
     * <p>The new IP address for the elastic network interface (ENI) attached to the
     * HSM.</p> <p>If the HSM is moved to a different subnet, and an IP address is not
     * specified, an IP address will be randomly chosen from the CIDR range of the new
     * subnet.</p>
     */
    inline ModifyHsmRequest& WithEniIp(const char* value) { SetEniIp(value); return *this;}


    /**
     * <p>The new IAM role ARN.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The new IAM role ARN.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The new IAM role ARN.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The new IAM role ARN.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The new IAM role ARN.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The new IAM role ARN.</p>
     */
    inline ModifyHsmRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The new IAM role ARN.</p>
     */
    inline ModifyHsmRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The new IAM role ARN.</p>
     */
    inline ModifyHsmRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The new external ID.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The new external ID.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The new external ID.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The new external ID.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The new external ID.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The new external ID.</p>
     */
    inline ModifyHsmRequest& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The new external ID.</p>
     */
    inline ModifyHsmRequest& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The new external ID.</p>
     */
    inline ModifyHsmRequest& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The new IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline const Aws::String& GetSyslogIp() const{ return m_syslogIp; }

    /**
     * <p>The new IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline bool SyslogIpHasBeenSet() const { return m_syslogIpHasBeenSet; }

    /**
     * <p>The new IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline void SetSyslogIp(const Aws::String& value) { m_syslogIpHasBeenSet = true; m_syslogIp = value; }

    /**
     * <p>The new IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline void SetSyslogIp(Aws::String&& value) { m_syslogIpHasBeenSet = true; m_syslogIp = std::move(value); }

    /**
     * <p>The new IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline void SetSyslogIp(const char* value) { m_syslogIpHasBeenSet = true; m_syslogIp.assign(value); }

    /**
     * <p>The new IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline ModifyHsmRequest& WithSyslogIp(const Aws::String& value) { SetSyslogIp(value); return *this;}

    /**
     * <p>The new IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline ModifyHsmRequest& WithSyslogIp(Aws::String&& value) { SetSyslogIp(std::move(value)); return *this;}

    /**
     * <p>The new IP address for the syslog monitoring server. The AWS CloudHSM service
     * only supports one syslog monitoring server.</p>
     */
    inline ModifyHsmRequest& WithSyslogIp(const char* value) { SetSyslogIp(value); return *this;}

  private:

    Aws::String m_hsmArn;
    bool m_hsmArnHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_eniIp;
    bool m_eniIpHasBeenSet;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;

    Aws::String m_syslogIp;
    bool m_syslogIpHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
