/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2SecurityGroupIpPermission.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about an Amazon EC2 security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2SecurityGroupDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2SecurityGroupDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2SecurityGroupDetails();
    AWS_SECURITYHUB_API AwsEc2SecurityGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2SecurityGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the security group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the security group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the security group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the security group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the security group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithGroupName(const char* value) { SetGroupName(value); return *this;}


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
    inline AwsEc2SecurityGroupDetails& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the owner of the security group.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the security group.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the security group.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the security group.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the security group.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>[VPC only] The ID of the VPC for the security group.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>[VPC only] The ID of the VPC for the security group.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>[VPC only] The ID of the VPC for the security group.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>[VPC only] The ID of the VPC for the security group.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>[VPC only] The ID of the VPC for the security group.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>[VPC only] The ID of the VPC for the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>[VPC only] The ID of the VPC for the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>[VPC only] The ID of the VPC for the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The inbound rules associated with the security group.</p>
     */
    inline const Aws::Vector<AwsEc2SecurityGroupIpPermission>& GetIpPermissions() const{ return m_ipPermissions; }

    /**
     * <p>The inbound rules associated with the security group.</p>
     */
    inline bool IpPermissionsHasBeenSet() const { return m_ipPermissionsHasBeenSet; }

    /**
     * <p>The inbound rules associated with the security group.</p>
     */
    inline void SetIpPermissions(const Aws::Vector<AwsEc2SecurityGroupIpPermission>& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = value; }

    /**
     * <p>The inbound rules associated with the security group.</p>
     */
    inline void SetIpPermissions(Aws::Vector<AwsEc2SecurityGroupIpPermission>&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = std::move(value); }

    /**
     * <p>The inbound rules associated with the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithIpPermissions(const Aws::Vector<AwsEc2SecurityGroupIpPermission>& value) { SetIpPermissions(value); return *this;}

    /**
     * <p>The inbound rules associated with the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithIpPermissions(Aws::Vector<AwsEc2SecurityGroupIpPermission>&& value) { SetIpPermissions(std::move(value)); return *this;}

    /**
     * <p>The inbound rules associated with the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& AddIpPermissions(const AwsEc2SecurityGroupIpPermission& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(value); return *this; }

    /**
     * <p>The inbound rules associated with the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& AddIpPermissions(AwsEc2SecurityGroupIpPermission&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>[VPC only] The outbound rules associated with the security group.</p>
     */
    inline const Aws::Vector<AwsEc2SecurityGroupIpPermission>& GetIpPermissionsEgress() const{ return m_ipPermissionsEgress; }

    /**
     * <p>[VPC only] The outbound rules associated with the security group.</p>
     */
    inline bool IpPermissionsEgressHasBeenSet() const { return m_ipPermissionsEgressHasBeenSet; }

    /**
     * <p>[VPC only] The outbound rules associated with the security group.</p>
     */
    inline void SetIpPermissionsEgress(const Aws::Vector<AwsEc2SecurityGroupIpPermission>& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress = value; }

    /**
     * <p>[VPC only] The outbound rules associated with the security group.</p>
     */
    inline void SetIpPermissionsEgress(Aws::Vector<AwsEc2SecurityGroupIpPermission>&& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress = std::move(value); }

    /**
     * <p>[VPC only] The outbound rules associated with the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithIpPermissionsEgress(const Aws::Vector<AwsEc2SecurityGroupIpPermission>& value) { SetIpPermissionsEgress(value); return *this;}

    /**
     * <p>[VPC only] The outbound rules associated with the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& WithIpPermissionsEgress(Aws::Vector<AwsEc2SecurityGroupIpPermission>&& value) { SetIpPermissionsEgress(std::move(value)); return *this;}

    /**
     * <p>[VPC only] The outbound rules associated with the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& AddIpPermissionsEgress(const AwsEc2SecurityGroupIpPermission& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress.push_back(value); return *this; }

    /**
     * <p>[VPC only] The outbound rules associated with the security group.</p>
     */
    inline AwsEc2SecurityGroupDetails& AddIpPermissionsEgress(AwsEc2SecurityGroupIpPermission&& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<AwsEc2SecurityGroupIpPermission> m_ipPermissions;
    bool m_ipPermissionsHasBeenSet = false;

    Aws::Vector<AwsEc2SecurityGroupIpPermission> m_ipPermissionsEgress;
    bool m_ipPermissionsEgressHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
