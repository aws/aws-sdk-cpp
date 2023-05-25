/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpPermission.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AuthorizeSecurityGroupEgressRequest : public EC2Request
  {
  public:
    AWS_EC2_API AuthorizeSecurityGroupEgressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeSecurityGroupEgress"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

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
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

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
     * <p>The sets of IP permissions. You can't specify a destination security group
     * and a CIDR IP address range in the same set of permissions.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissions() const{ return m_ipPermissions; }

    /**
     * <p>The sets of IP permissions. You can't specify a destination security group
     * and a CIDR IP address range in the same set of permissions.</p>
     */
    inline bool IpPermissionsHasBeenSet() const { return m_ipPermissionsHasBeenSet; }

    /**
     * <p>The sets of IP permissions. You can't specify a destination security group
     * and a CIDR IP address range in the same set of permissions.</p>
     */
    inline void SetIpPermissions(const Aws::Vector<IpPermission>& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = value; }

    /**
     * <p>The sets of IP permissions. You can't specify a destination security group
     * and a CIDR IP address range in the same set of permissions.</p>
     */
    inline void SetIpPermissions(Aws::Vector<IpPermission>&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = std::move(value); }

    /**
     * <p>The sets of IP permissions. You can't specify a destination security group
     * and a CIDR IP address range in the same set of permissions.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithIpPermissions(const Aws::Vector<IpPermission>& value) { SetIpPermissions(value); return *this;}

    /**
     * <p>The sets of IP permissions. You can't specify a destination security group
     * and a CIDR IP address range in the same set of permissions.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithIpPermissions(Aws::Vector<IpPermission>&& value) { SetIpPermissions(std::move(value)); return *this;}

    /**
     * <p>The sets of IP permissions. You can't specify a destination security group
     * and a CIDR IP address range in the same set of permissions.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& AddIpPermissions(const IpPermission& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(value); return *this; }

    /**
     * <p>The sets of IP permissions. You can't specify a destination security group
     * and a CIDR IP address range in the same set of permissions.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& AddIpPermissions(IpPermission&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags applied to the security group rule.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags applied to the security group rule.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags applied to the security group rule.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags applied to the security group rule.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags applied to the security group rule.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags applied to the security group rule.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags applied to the security group rule.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags applied to the security group rule.</p>
     */
    inline AuthorizeSecurityGroupEgressRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Not supported. Use a set of IP permissions to specify the CIDR.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }

    /**
     * <p>Not supported. Use a set of IP permissions to specify the CIDR.</p>
     */
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }

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
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }

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
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }

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
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }

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
    inline bool SourceSecurityGroupNameHasBeenSet() const { return m_sourceSecurityGroupNameHasBeenSet; }

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
    inline bool SourceSecurityGroupOwnerIdHasBeenSet() const { return m_sourceSecurityGroupOwnerIdHasBeenSet; }

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
    bool m_dryRunHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::Vector<IpPermission> m_ipPermissions;
    bool m_ipPermissionsHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet = false;

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet = false;

    int m_toPort;
    bool m_toPortHasBeenSet = false;

    Aws::String m_sourceSecurityGroupName;
    bool m_sourceSecurityGroupNameHasBeenSet = false;

    Aws::String m_sourceSecurityGroupOwnerId;
    bool m_sourceSecurityGroupOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
