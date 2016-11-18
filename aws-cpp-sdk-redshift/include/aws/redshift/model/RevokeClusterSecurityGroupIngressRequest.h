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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_REDSHIFT_API RevokeClusterSecurityGroupIngressRequest : public RedshiftRequest
  {
  public:
    RevokeClusterSecurityGroupIngressRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the security Group from which to revoke the ingress rule.</p>
     */
    inline const Aws::String& GetClusterSecurityGroupName() const{ return m_clusterSecurityGroupName; }

    /**
     * <p>The name of the security Group from which to revoke the ingress rule.</p>
     */
    inline void SetClusterSecurityGroupName(const Aws::String& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = value; }

    /**
     * <p>The name of the security Group from which to revoke the ingress rule.</p>
     */
    inline void SetClusterSecurityGroupName(Aws::String&& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = value; }

    /**
     * <p>The name of the security Group from which to revoke the ingress rule.</p>
     */
    inline void SetClusterSecurityGroupName(const char* value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName.assign(value); }

    /**
     * <p>The name of the security Group from which to revoke the ingress rule.</p>
     */
    inline RevokeClusterSecurityGroupIngressRequest& WithClusterSecurityGroupName(const Aws::String& value) { SetClusterSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the security Group from which to revoke the ingress rule.</p>
     */
    inline RevokeClusterSecurityGroupIngressRequest& WithClusterSecurityGroupName(Aws::String&& value) { SetClusterSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the security Group from which to revoke the ingress rule.</p>
     */
    inline RevokeClusterSecurityGroupIngressRequest& WithClusterSecurityGroupName(const char* value) { SetClusterSecurityGroupName(value); return *this;}

    /**
     * <p>The IP range for which to revoke access. This range must be a valid Classless
     * Inter-Domain Routing (CIDR) block of IP addresses. If <code>CIDRIP</code> is
     * specified, <code>EC2SecurityGroupName</code> and
     * <code>EC2SecurityGroupOwnerId</code> cannot be provided. </p>
     */
    inline const Aws::String& GetCIDRIP() const{ return m_cIDRIP; }

    /**
     * <p>The IP range for which to revoke access. This range must be a valid Classless
     * Inter-Domain Routing (CIDR) block of IP addresses. If <code>CIDRIP</code> is
     * specified, <code>EC2SecurityGroupName</code> and
     * <code>EC2SecurityGroupOwnerId</code> cannot be provided. </p>
     */
    inline void SetCIDRIP(const Aws::String& value) { m_cIDRIPHasBeenSet = true; m_cIDRIP = value; }

    /**
     * <p>The IP range for which to revoke access. This range must be a valid Classless
     * Inter-Domain Routing (CIDR) block of IP addresses. If <code>CIDRIP</code> is
     * specified, <code>EC2SecurityGroupName</code> and
     * <code>EC2SecurityGroupOwnerId</code> cannot be provided. </p>
     */
    inline void SetCIDRIP(Aws::String&& value) { m_cIDRIPHasBeenSet = true; m_cIDRIP = value; }

    /**
     * <p>The IP range for which to revoke access. This range must be a valid Classless
     * Inter-Domain Routing (CIDR) block of IP addresses. If <code>CIDRIP</code> is
     * specified, <code>EC2SecurityGroupName</code> and
     * <code>EC2SecurityGroupOwnerId</code> cannot be provided. </p>
     */
    inline void SetCIDRIP(const char* value) { m_cIDRIPHasBeenSet = true; m_cIDRIP.assign(value); }

    /**
     * <p>The IP range for which to revoke access. This range must be a valid Classless
     * Inter-Domain Routing (CIDR) block of IP addresses. If <code>CIDRIP</code> is
     * specified, <code>EC2SecurityGroupName</code> and
     * <code>EC2SecurityGroupOwnerId</code> cannot be provided. </p>
     */
    inline RevokeClusterSecurityGroupIngressRequest& WithCIDRIP(const Aws::String& value) { SetCIDRIP(value); return *this;}

    /**
     * <p>The IP range for which to revoke access. This range must be a valid Classless
     * Inter-Domain Routing (CIDR) block of IP addresses. If <code>CIDRIP</code> is
     * specified, <code>EC2SecurityGroupName</code> and
     * <code>EC2SecurityGroupOwnerId</code> cannot be provided. </p>
     */
    inline RevokeClusterSecurityGroupIngressRequest& WithCIDRIP(Aws::String&& value) { SetCIDRIP(value); return *this;}

    /**
     * <p>The IP range for which to revoke access. This range must be a valid Classless
     * Inter-Domain Routing (CIDR) block of IP addresses. If <code>CIDRIP</code> is
     * specified, <code>EC2SecurityGroupName</code> and
     * <code>EC2SecurityGroupOwnerId</code> cannot be provided. </p>
     */
    inline RevokeClusterSecurityGroupIngressRequest& WithCIDRIP(const char* value) { SetCIDRIP(value); return *this;}

    /**
     * <p>The name of the EC2 Security Group whose access is to be revoked. If
     * <code>EC2SecurityGroupName</code> is specified,
     * <code>EC2SecurityGroupOwnerId</code> must also be provided and
     * <code>CIDRIP</code> cannot be provided. </p>
     */
    inline const Aws::String& GetEC2SecurityGroupName() const{ return m_eC2SecurityGroupName; }

    /**
     * <p>The name of the EC2 Security Group whose access is to be revoked. If
     * <code>EC2SecurityGroupName</code> is specified,
     * <code>EC2SecurityGroupOwnerId</code> must also be provided and
     * <code>CIDRIP</code> cannot be provided. </p>
     */
    inline void SetEC2SecurityGroupName(const Aws::String& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = value; }

    /**
     * <p>The name of the EC2 Security Group whose access is to be revoked. If
     * <code>EC2SecurityGroupName</code> is specified,
     * <code>EC2SecurityGroupOwnerId</code> must also be provided and
     * <code>CIDRIP</code> cannot be provided. </p>
     */
    inline void SetEC2SecurityGroupName(Aws::String&& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = value; }

    /**
     * <p>The name of the EC2 Security Group whose access is to be revoked. If
     * <code>EC2SecurityGroupName</code> is specified,
     * <code>EC2SecurityGroupOwnerId</code> must also be provided and
     * <code>CIDRIP</code> cannot be provided. </p>
     */
    inline void SetEC2SecurityGroupName(const char* value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName.assign(value); }

    /**
     * <p>The name of the EC2 Security Group whose access is to be revoked. If
     * <code>EC2SecurityGroupName</code> is specified,
     * <code>EC2SecurityGroupOwnerId</code> must also be provided and
     * <code>CIDRIP</code> cannot be provided. </p>
     */
    inline RevokeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupName(const Aws::String& value) { SetEC2SecurityGroupName(value); return *this;}

    /**
     * <p>The name of the EC2 Security Group whose access is to be revoked. If
     * <code>EC2SecurityGroupName</code> is specified,
     * <code>EC2SecurityGroupOwnerId</code> must also be provided and
     * <code>CIDRIP</code> cannot be provided. </p>
     */
    inline RevokeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupName(Aws::String&& value) { SetEC2SecurityGroupName(value); return *this;}

    /**
     * <p>The name of the EC2 Security Group whose access is to be revoked. If
     * <code>EC2SecurityGroupName</code> is specified,
     * <code>EC2SecurityGroupOwnerId</code> must also be provided and
     * <code>CIDRIP</code> cannot be provided. </p>
     */
    inline RevokeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupName(const char* value) { SetEC2SecurityGroupName(value); return *this;}

    /**
     * <p>The AWS account number of the owner of the security group specified in the
     * <code>EC2SecurityGroupName</code> parameter. The AWS access key ID is not an
     * acceptable value. If <code>EC2SecurityGroupOwnerId</code> is specified,
     * <code>EC2SecurityGroupName</code> must also be provided. and <code>CIDRIP</code>
     * cannot be provided. </p> <p>Example: <code>111122223333</code> </p>
     */
    inline const Aws::String& GetEC2SecurityGroupOwnerId() const{ return m_eC2SecurityGroupOwnerId; }

    /**
     * <p>The AWS account number of the owner of the security group specified in the
     * <code>EC2SecurityGroupName</code> parameter. The AWS access key ID is not an
     * acceptable value. If <code>EC2SecurityGroupOwnerId</code> is specified,
     * <code>EC2SecurityGroupName</code> must also be provided. and <code>CIDRIP</code>
     * cannot be provided. </p> <p>Example: <code>111122223333</code> </p>
     */
    inline void SetEC2SecurityGroupOwnerId(const Aws::String& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = value; }

    /**
     * <p>The AWS account number of the owner of the security group specified in the
     * <code>EC2SecurityGroupName</code> parameter. The AWS access key ID is not an
     * acceptable value. If <code>EC2SecurityGroupOwnerId</code> is specified,
     * <code>EC2SecurityGroupName</code> must also be provided. and <code>CIDRIP</code>
     * cannot be provided. </p> <p>Example: <code>111122223333</code> </p>
     */
    inline void SetEC2SecurityGroupOwnerId(Aws::String&& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = value; }

    /**
     * <p>The AWS account number of the owner of the security group specified in the
     * <code>EC2SecurityGroupName</code> parameter. The AWS access key ID is not an
     * acceptable value. If <code>EC2SecurityGroupOwnerId</code> is specified,
     * <code>EC2SecurityGroupName</code> must also be provided. and <code>CIDRIP</code>
     * cannot be provided. </p> <p>Example: <code>111122223333</code> </p>
     */
    inline void SetEC2SecurityGroupOwnerId(const char* value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId.assign(value); }

    /**
     * <p>The AWS account number of the owner of the security group specified in the
     * <code>EC2SecurityGroupName</code> parameter. The AWS access key ID is not an
     * acceptable value. If <code>EC2SecurityGroupOwnerId</code> is specified,
     * <code>EC2SecurityGroupName</code> must also be provided. and <code>CIDRIP</code>
     * cannot be provided. </p> <p>Example: <code>111122223333</code> </p>
     */
    inline RevokeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(const Aws::String& value) { SetEC2SecurityGroupOwnerId(value); return *this;}

    /**
     * <p>The AWS account number of the owner of the security group specified in the
     * <code>EC2SecurityGroupName</code> parameter. The AWS access key ID is not an
     * acceptable value. If <code>EC2SecurityGroupOwnerId</code> is specified,
     * <code>EC2SecurityGroupName</code> must also be provided. and <code>CIDRIP</code>
     * cannot be provided. </p> <p>Example: <code>111122223333</code> </p>
     */
    inline RevokeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(Aws::String&& value) { SetEC2SecurityGroupOwnerId(value); return *this;}

    /**
     * <p>The AWS account number of the owner of the security group specified in the
     * <code>EC2SecurityGroupName</code> parameter. The AWS access key ID is not an
     * acceptable value. If <code>EC2SecurityGroupOwnerId</code> is specified,
     * <code>EC2SecurityGroupName</code> must also be provided. and <code>CIDRIP</code>
     * cannot be provided. </p> <p>Example: <code>111122223333</code> </p>
     */
    inline RevokeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(const char* value) { SetEC2SecurityGroupOwnerId(value); return *this;}

  private:
    Aws::String m_clusterSecurityGroupName;
    bool m_clusterSecurityGroupNameHasBeenSet;
    Aws::String m_cIDRIP;
    bool m_cIDRIPHasBeenSet;
    Aws::String m_eC2SecurityGroupName;
    bool m_eC2SecurityGroupNameHasBeenSet;
    Aws::String m_eC2SecurityGroupOwnerId;
    bool m_eC2SecurityGroupOwnerIdHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
