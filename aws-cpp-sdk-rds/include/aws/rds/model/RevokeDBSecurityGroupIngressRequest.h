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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RevokeDBSecurityGroupIngressMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API RevokeDBSecurityGroupIngressRequest : public RDSRequest
  {
  public:
    RevokeDBSecurityGroupIngressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeDBSecurityGroupIngress"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB security group to revoke ingress from.</p>
     */
    inline const Aws::String& GetDBSecurityGroupName() const{ return m_dBSecurityGroupName; }

    /**
     * <p>The name of the DB security group to revoke ingress from.</p>
     */
    inline bool DBSecurityGroupNameHasBeenSet() const { return m_dBSecurityGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB security group to revoke ingress from.</p>
     */
    inline void SetDBSecurityGroupName(const Aws::String& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = value; }

    /**
     * <p>The name of the DB security group to revoke ingress from.</p>
     */
    inline void SetDBSecurityGroupName(Aws::String&& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = std::move(value); }

    /**
     * <p>The name of the DB security group to revoke ingress from.</p>
     */
    inline void SetDBSecurityGroupName(const char* value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName.assign(value); }

    /**
     * <p>The name of the DB security group to revoke ingress from.</p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithDBSecurityGroupName(const Aws::String& value) { SetDBSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the DB security group to revoke ingress from.</p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithDBSecurityGroupName(Aws::String&& value) { SetDBSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB security group to revoke ingress from.</p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithDBSecurityGroupName(const char* value) { SetDBSecurityGroupName(value); return *this;}


    /**
     * <p> The IP range to revoke access from. Must be a valid CIDR range. If
     * <code>CIDRIP</code> is specified, <code>EC2SecurityGroupName</code>,
     * <code>EC2SecurityGroupId</code> and <code>EC2SecurityGroupOwnerId</code> can't
     * be provided. </p>
     */
    inline const Aws::String& GetCIDRIP() const{ return m_cIDRIP; }

    /**
     * <p> The IP range to revoke access from. Must be a valid CIDR range. If
     * <code>CIDRIP</code> is specified, <code>EC2SecurityGroupName</code>,
     * <code>EC2SecurityGroupId</code> and <code>EC2SecurityGroupOwnerId</code> can't
     * be provided. </p>
     */
    inline bool CIDRIPHasBeenSet() const { return m_cIDRIPHasBeenSet; }

    /**
     * <p> The IP range to revoke access from. Must be a valid CIDR range. If
     * <code>CIDRIP</code> is specified, <code>EC2SecurityGroupName</code>,
     * <code>EC2SecurityGroupId</code> and <code>EC2SecurityGroupOwnerId</code> can't
     * be provided. </p>
     */
    inline void SetCIDRIP(const Aws::String& value) { m_cIDRIPHasBeenSet = true; m_cIDRIP = value; }

    /**
     * <p> The IP range to revoke access from. Must be a valid CIDR range. If
     * <code>CIDRIP</code> is specified, <code>EC2SecurityGroupName</code>,
     * <code>EC2SecurityGroupId</code> and <code>EC2SecurityGroupOwnerId</code> can't
     * be provided. </p>
     */
    inline void SetCIDRIP(Aws::String&& value) { m_cIDRIPHasBeenSet = true; m_cIDRIP = std::move(value); }

    /**
     * <p> The IP range to revoke access from. Must be a valid CIDR range. If
     * <code>CIDRIP</code> is specified, <code>EC2SecurityGroupName</code>,
     * <code>EC2SecurityGroupId</code> and <code>EC2SecurityGroupOwnerId</code> can't
     * be provided. </p>
     */
    inline void SetCIDRIP(const char* value) { m_cIDRIPHasBeenSet = true; m_cIDRIP.assign(value); }

    /**
     * <p> The IP range to revoke access from. Must be a valid CIDR range. If
     * <code>CIDRIP</code> is specified, <code>EC2SecurityGroupName</code>,
     * <code>EC2SecurityGroupId</code> and <code>EC2SecurityGroupOwnerId</code> can't
     * be provided. </p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithCIDRIP(const Aws::String& value) { SetCIDRIP(value); return *this;}

    /**
     * <p> The IP range to revoke access from. Must be a valid CIDR range. If
     * <code>CIDRIP</code> is specified, <code>EC2SecurityGroupName</code>,
     * <code>EC2SecurityGroupId</code> and <code>EC2SecurityGroupOwnerId</code> can't
     * be provided. </p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithCIDRIP(Aws::String&& value) { SetCIDRIP(std::move(value)); return *this;}

    /**
     * <p> The IP range to revoke access from. Must be a valid CIDR range. If
     * <code>CIDRIP</code> is specified, <code>EC2SecurityGroupName</code>,
     * <code>EC2SecurityGroupId</code> and <code>EC2SecurityGroupOwnerId</code> can't
     * be provided. </p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithCIDRIP(const char* value) { SetCIDRIP(value); return *this;}


    /**
     * <p> The name of the EC2 security group to revoke access from. For VPC DB
     * security groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline const Aws::String& GetEC2SecurityGroupName() const{ return m_eC2SecurityGroupName; }

    /**
     * <p> The name of the EC2 security group to revoke access from. For VPC DB
     * security groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline bool EC2SecurityGroupNameHasBeenSet() const { return m_eC2SecurityGroupNameHasBeenSet; }

    /**
     * <p> The name of the EC2 security group to revoke access from. For VPC DB
     * security groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline void SetEC2SecurityGroupName(const Aws::String& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = value; }

    /**
     * <p> The name of the EC2 security group to revoke access from. For VPC DB
     * security groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline void SetEC2SecurityGroupName(Aws::String&& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = std::move(value); }

    /**
     * <p> The name of the EC2 security group to revoke access from. For VPC DB
     * security groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline void SetEC2SecurityGroupName(const char* value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName.assign(value); }

    /**
     * <p> The name of the EC2 security group to revoke access from. For VPC DB
     * security groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithEC2SecurityGroupName(const Aws::String& value) { SetEC2SecurityGroupName(value); return *this;}

    /**
     * <p> The name of the EC2 security group to revoke access from. For VPC DB
     * security groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithEC2SecurityGroupName(Aws::String&& value) { SetEC2SecurityGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the EC2 security group to revoke access from. For VPC DB
     * security groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithEC2SecurityGroupName(const char* value) { SetEC2SecurityGroupName(value); return *this;}


    /**
     * <p> The id of the EC2 security group to revoke access from. For VPC DB security
     * groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline const Aws::String& GetEC2SecurityGroupId() const{ return m_eC2SecurityGroupId; }

    /**
     * <p> The id of the EC2 security group to revoke access from. For VPC DB security
     * groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline bool EC2SecurityGroupIdHasBeenSet() const { return m_eC2SecurityGroupIdHasBeenSet; }

    /**
     * <p> The id of the EC2 security group to revoke access from. For VPC DB security
     * groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline void SetEC2SecurityGroupId(const Aws::String& value) { m_eC2SecurityGroupIdHasBeenSet = true; m_eC2SecurityGroupId = value; }

    /**
     * <p> The id of the EC2 security group to revoke access from. For VPC DB security
     * groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline void SetEC2SecurityGroupId(Aws::String&& value) { m_eC2SecurityGroupIdHasBeenSet = true; m_eC2SecurityGroupId = std::move(value); }

    /**
     * <p> The id of the EC2 security group to revoke access from. For VPC DB security
     * groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline void SetEC2SecurityGroupId(const char* value) { m_eC2SecurityGroupIdHasBeenSet = true; m_eC2SecurityGroupId.assign(value); }

    /**
     * <p> The id of the EC2 security group to revoke access from. For VPC DB security
     * groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithEC2SecurityGroupId(const Aws::String& value) { SetEC2SecurityGroupId(value); return *this;}

    /**
     * <p> The id of the EC2 security group to revoke access from. For VPC DB security
     * groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithEC2SecurityGroupId(Aws::String&& value) { SetEC2SecurityGroupId(std::move(value)); return *this;}

    /**
     * <p> The id of the EC2 security group to revoke access from. For VPC DB security
     * groups, <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * EC2SecurityGroupOwnerId and either <code>EC2SecurityGroupName</code> or
     * <code>EC2SecurityGroupId</code> must be provided. </p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithEC2SecurityGroupId(const char* value) { SetEC2SecurityGroupId(value); return *this;}


    /**
     * <p> The AWS Account Number of the owner of the EC2 security group specified in
     * the <code>EC2SecurityGroupName</code> parameter. The AWS Access Key ID is not an
     * acceptable value. For VPC DB security groups, <code>EC2SecurityGroupId</code>
     * must be provided. Otherwise, EC2SecurityGroupOwnerId and either
     * <code>EC2SecurityGroupName</code> or <code>EC2SecurityGroupId</code> must be
     * provided. </p>
     */
    inline const Aws::String& GetEC2SecurityGroupOwnerId() const{ return m_eC2SecurityGroupOwnerId; }

    /**
     * <p> The AWS Account Number of the owner of the EC2 security group specified in
     * the <code>EC2SecurityGroupName</code> parameter. The AWS Access Key ID is not an
     * acceptable value. For VPC DB security groups, <code>EC2SecurityGroupId</code>
     * must be provided. Otherwise, EC2SecurityGroupOwnerId and either
     * <code>EC2SecurityGroupName</code> or <code>EC2SecurityGroupId</code> must be
     * provided. </p>
     */
    inline bool EC2SecurityGroupOwnerIdHasBeenSet() const { return m_eC2SecurityGroupOwnerIdHasBeenSet; }

    /**
     * <p> The AWS Account Number of the owner of the EC2 security group specified in
     * the <code>EC2SecurityGroupName</code> parameter. The AWS Access Key ID is not an
     * acceptable value. For VPC DB security groups, <code>EC2SecurityGroupId</code>
     * must be provided. Otherwise, EC2SecurityGroupOwnerId and either
     * <code>EC2SecurityGroupName</code> or <code>EC2SecurityGroupId</code> must be
     * provided. </p>
     */
    inline void SetEC2SecurityGroupOwnerId(const Aws::String& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = value; }

    /**
     * <p> The AWS Account Number of the owner of the EC2 security group specified in
     * the <code>EC2SecurityGroupName</code> parameter. The AWS Access Key ID is not an
     * acceptable value. For VPC DB security groups, <code>EC2SecurityGroupId</code>
     * must be provided. Otherwise, EC2SecurityGroupOwnerId and either
     * <code>EC2SecurityGroupName</code> or <code>EC2SecurityGroupId</code> must be
     * provided. </p>
     */
    inline void SetEC2SecurityGroupOwnerId(Aws::String&& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = std::move(value); }

    /**
     * <p> The AWS Account Number of the owner of the EC2 security group specified in
     * the <code>EC2SecurityGroupName</code> parameter. The AWS Access Key ID is not an
     * acceptable value. For VPC DB security groups, <code>EC2SecurityGroupId</code>
     * must be provided. Otherwise, EC2SecurityGroupOwnerId and either
     * <code>EC2SecurityGroupName</code> or <code>EC2SecurityGroupId</code> must be
     * provided. </p>
     */
    inline void SetEC2SecurityGroupOwnerId(const char* value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId.assign(value); }

    /**
     * <p> The AWS Account Number of the owner of the EC2 security group specified in
     * the <code>EC2SecurityGroupName</code> parameter. The AWS Access Key ID is not an
     * acceptable value. For VPC DB security groups, <code>EC2SecurityGroupId</code>
     * must be provided. Otherwise, EC2SecurityGroupOwnerId and either
     * <code>EC2SecurityGroupName</code> or <code>EC2SecurityGroupId</code> must be
     * provided. </p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(const Aws::String& value) { SetEC2SecurityGroupOwnerId(value); return *this;}

    /**
     * <p> The AWS Account Number of the owner of the EC2 security group specified in
     * the <code>EC2SecurityGroupName</code> parameter. The AWS Access Key ID is not an
     * acceptable value. For VPC DB security groups, <code>EC2SecurityGroupId</code>
     * must be provided. Otherwise, EC2SecurityGroupOwnerId and either
     * <code>EC2SecurityGroupName</code> or <code>EC2SecurityGroupId</code> must be
     * provided. </p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(Aws::String&& value) { SetEC2SecurityGroupOwnerId(std::move(value)); return *this;}

    /**
     * <p> The AWS Account Number of the owner of the EC2 security group specified in
     * the <code>EC2SecurityGroupName</code> parameter. The AWS Access Key ID is not an
     * acceptable value. For VPC DB security groups, <code>EC2SecurityGroupId</code>
     * must be provided. Otherwise, EC2SecurityGroupOwnerId and either
     * <code>EC2SecurityGroupName</code> or <code>EC2SecurityGroupId</code> must be
     * provided. </p>
     */
    inline RevokeDBSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(const char* value) { SetEC2SecurityGroupOwnerId(value); return *this;}

  private:

    Aws::String m_dBSecurityGroupName;
    bool m_dBSecurityGroupNameHasBeenSet;

    Aws::String m_cIDRIP;
    bool m_cIDRIPHasBeenSet;

    Aws::String m_eC2SecurityGroupName;
    bool m_eC2SecurityGroupNameHasBeenSet;

    Aws::String m_eC2SecurityGroupId;
    bool m_eC2SecurityGroupIdHasBeenSet;

    Aws::String m_eC2SecurityGroupOwnerId;
    bool m_eC2SecurityGroupOwnerIdHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
