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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpPermission.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for AuthorizeSecurityGroupEgress.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AuthorizeSecurityGroupEgressRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AuthorizeSecurityGroupEgressRequest : public EC2Request
  {
  public:
    AuthorizeSecurityGroupEgressRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeSecurityGroupEgress"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of the security group.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>One or more sets of IP permissions. You can't specify a destination security
     * group and a CIDR IP address range in the same set of permissions.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissions() const{ return m_ipPermissions; }

    /**
     * <p>One or more sets of IP permissions. You can't specify a destination security
     * group and a CIDR IP address range in the same set of permissions.</p>
     */
    inline void SetIpPermissions(const Aws::Vector<IpPermission>& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = value; }

    /**
     * <p>One or more sets of IP permissions. You can't specify a destination security
     * group and a CIDR IP address range in the same set of permissions.</p>
     */
    inline void SetIpPermissions(Aws::Vector<IpPermission>&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = std::move(value); }

    /**
     * <p>One or more sets of IP permissions. You can't specify a destination security
     * group and a CIDR IP address range in the same set of permissions.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithIpPermissions(const Aws::Vector<IpPermission>& value) { SetIpPermissions(value); return *this;}

    /**
     * <p>One or more sets of IP permissions. You can't specify a destination security
     * group and a CIDR IP address range in the same set of permissions.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithIpPermissions(Aws::Vector<IpPermission>&& value) { SetIpPermissions(std::move(value)); return *this;}

    /**
     * <p>One or more sets of IP permissions. You can't specify a destination security
     * group and a CIDR IP address range in the same set of permissions.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& AddIpPermissions(const IpPermission& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(value); return *this; }

    /**
     * <p>One or more sets of IP permissions. You can't specify a destination security
     * group and a CIDR IP address range in the same set of permissions.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& AddIpPermissions(IpPermission&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>Not supported. Use a set of IP permissions to specify the CIDR.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }

    /**
     * <p>Not supported. Use a set of IP permissions to specify the CIDR.</p>
     */
    inline void SetCidrIp(const Aws::String& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }

    /**
     * <p>Not supported. Use a set of IP permissions to specify the CIDR.</p>
     */
    inline void SetCidrIp(Aws::String&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::move(value); }

    /**
     * <p>Not supported. Use a set of IP permissions to specify the CIDR.</p>
     */
    inline void SetCidrIp(const char* value) { m_cidrIpHasBeenSet = true; m_cidrIp.assign(value); }

    /**
     * <p>Not supported. Use a set of IP permissions to specify the CIDR.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithCidrIp(const Aws::String& value) { SetCidrIp(value); return *this;}

    /**
     * <p>Not supported. Use a set of IP permissions to specify the CIDR.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithCidrIp(Aws::String&& value) { SetCidrIp(std::move(value)); return *this;}

    /**
     * <p>Not supported. Use a set of IP permissions to specify the CIDR.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithCidrIp(const char* value) { SetCidrIp(value); return *this;}


    /**
     * <p>Not supported. Use a set of IP permissions to specify the port.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>Not supported. Use a set of IP permissions to specify the port.</p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>Not supported. Use a set of IP permissions to specify the port.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithFromPort(int value) { SetFromPort(value); return *this;}


    /**
     * <p>Not supported. Use a set of IP permissions to specify the protocol name or
     * number.</p>
     */
    inline const Aws::String& GetIpProtocol() const{ return m_ipProtocol; }

    /**
     * <p>Not supported. Use a set of IP permissions to specify the protocol name or
     * number.</p>
     */
    inline void SetIpProtocol(const Aws::String& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }

    /**
     * <p>Not supported. Use a set of IP permissions to specify the protocol name or
     * number.</p>
     */
    inline void SetIpProtocol(Aws::String&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::move(value); }

    /**
     * <p>Not supported. Use a set of IP permissions to specify the protocol name or
     * number.</p>
     */
    inline void SetIpProtocol(const char* value) { m_ipProtocolHasBeenSet = true; m_ipProtocol.assign(value); }

    /**
     * <p>Not supported. Use a set of IP permissions to specify the protocol name or
     * number.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithIpProtocol(const Aws::String& value) { SetIpProtocol(value); return *this;}

    /**
     * <p>Not supported. Use a set of IP permissions to specify the protocol name or
     * number.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithIpProtocol(Aws::String&& value) { SetIpProtocol(std::move(value)); return *this;}

    /**
     * <p>Not supported. Use a set of IP permissions to specify the protocol name or
     * number.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithIpProtocol(const char* value) { SetIpProtocol(value); return *this;}


    /**
     * <p>Not supported. Use a set of IP permissions to specify the port.</p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>Not supported. Use a set of IP permissions to specify the port.</p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>Not supported. Use a set of IP permissions to specify the port.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithToPort(int value) { SetToPort(value); return *this;}


    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline const Aws::String& GetSourceSecurityGroupName() const{ return m_sourceSecurityGroupName; }

    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline void SetSourceSecurityGroupName(const Aws::String& value) { m_sourceSecurityGroupNameHasBeenSet = true; m_sourceSecurityGroupName = value; }

    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline void SetSourceSecurityGroupName(Aws::String&& value) { m_sourceSecurityGroupNameHasBeenSet = true; m_sourceSecurityGroupName = std::move(value); }

    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline void SetSourceSecurityGroupName(const char* value) { m_sourceSecurityGroupNameHasBeenSet = true; m_sourceSecurityGroupName.assign(value); }

    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithSourceSecurityGroupName(const Aws::String& value) { SetSourceSecurityGroupName(value); return *this;}

    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithSourceSecurityGroupName(Aws::String&& value) { SetSourceSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithSourceSecurityGroupName(const char* value) { SetSourceSecurityGroupName(value); return *this;}


    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline const Aws::String& GetSourceSecurityGroupOwnerId() const{ return m_sourceSecurityGroupOwnerId; }

    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline void SetSourceSecurityGroupOwnerId(const Aws::String& value) { m_sourceSecurityGroupOwnerIdHasBeenSet = true; m_sourceSecurityGroupOwnerId = value; }

    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline void SetSourceSecurityGroupOwnerId(Aws::String&& value) { m_sourceSecurityGroupOwnerIdHasBeenSet = true; m_sourceSecurityGroupOwnerId = std::move(value); }

    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline void SetSourceSecurityGroupOwnerId(const char* value) { m_sourceSecurityGroupOwnerIdHasBeenSet = true; m_sourceSecurityGroupOwnerId.assign(value); }

    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithSourceSecurityGroupOwnerId(const Aws::String& value) { SetSourceSecurityGroupOwnerId(value); return *this;}

    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithSourceSecurityGroupOwnerId(Aws::String&& value) { SetSourceSecurityGroupOwnerId(std::move(value)); return *this;}

    /**
     * <p>Not supported. Use a set of IP permissions to specify a destination security
     * group.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithSourceSecurityGroupOwnerId(const char* value) { SetSourceSecurityGroupOwnerId(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;

    Aws::Vector<IpPermission> m_ipPermissions;
    bool m_ipPermissionsHasBeenSet;

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet;

    int m_fromPort;
    bool m_fromPortHasBeenSet;

    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet;

    int m_toPort;
    bool m_toPortHasBeenSet;

    Aws::String m_sourceSecurityGroupName;
    bool m_sourceSecurityGroupNameHasBeenSet;

    Aws::String m_sourceSecurityGroupOwnerId;
    bool m_sourceSecurityGroupOwnerIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
