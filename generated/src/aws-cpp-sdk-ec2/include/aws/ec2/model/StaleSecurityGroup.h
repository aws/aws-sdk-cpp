/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/StaleIpPermission.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a stale security group (a security group that contains stale
   * rules).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StaleSecurityGroup">AWS
   * API Reference</a></p>
   */
  class StaleSecurityGroup
  {
  public:
    AWS_EC2_API StaleSecurityGroup() = default;
    AWS_EC2_API StaleSecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API StaleSecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The description of the security group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StaleSecurityGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    StaleSecurityGroup& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    StaleSecurityGroup& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the stale inbound rules in the security group.</p>
     */
    inline const Aws::Vector<StaleIpPermission>& GetStaleIpPermissions() const { return m_staleIpPermissions; }
    inline bool StaleIpPermissionsHasBeenSet() const { return m_staleIpPermissionsHasBeenSet; }
    template<typename StaleIpPermissionsT = Aws::Vector<StaleIpPermission>>
    void SetStaleIpPermissions(StaleIpPermissionsT&& value) { m_staleIpPermissionsHasBeenSet = true; m_staleIpPermissions = std::forward<StaleIpPermissionsT>(value); }
    template<typename StaleIpPermissionsT = Aws::Vector<StaleIpPermission>>
    StaleSecurityGroup& WithStaleIpPermissions(StaleIpPermissionsT&& value) { SetStaleIpPermissions(std::forward<StaleIpPermissionsT>(value)); return *this;}
    template<typename StaleIpPermissionsT = StaleIpPermission>
    StaleSecurityGroup& AddStaleIpPermissions(StaleIpPermissionsT&& value) { m_staleIpPermissionsHasBeenSet = true; m_staleIpPermissions.emplace_back(std::forward<StaleIpPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the stale outbound rules in the security group.</p>
     */
    inline const Aws::Vector<StaleIpPermission>& GetStaleIpPermissionsEgress() const { return m_staleIpPermissionsEgress; }
    inline bool StaleIpPermissionsEgressHasBeenSet() const { return m_staleIpPermissionsEgressHasBeenSet; }
    template<typename StaleIpPermissionsEgressT = Aws::Vector<StaleIpPermission>>
    void SetStaleIpPermissionsEgress(StaleIpPermissionsEgressT&& value) { m_staleIpPermissionsEgressHasBeenSet = true; m_staleIpPermissionsEgress = std::forward<StaleIpPermissionsEgressT>(value); }
    template<typename StaleIpPermissionsEgressT = Aws::Vector<StaleIpPermission>>
    StaleSecurityGroup& WithStaleIpPermissionsEgress(StaleIpPermissionsEgressT&& value) { SetStaleIpPermissionsEgress(std::forward<StaleIpPermissionsEgressT>(value)); return *this;}
    template<typename StaleIpPermissionsEgressT = StaleIpPermission>
    StaleSecurityGroup& AddStaleIpPermissionsEgress(StaleIpPermissionsEgressT&& value) { m_staleIpPermissionsEgressHasBeenSet = true; m_staleIpPermissionsEgress.emplace_back(std::forward<StaleIpPermissionsEgressT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the security group.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    StaleSecurityGroup& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::Vector<StaleIpPermission> m_staleIpPermissions;
    bool m_staleIpPermissionsHasBeenSet = false;

    Aws::Vector<StaleIpPermission> m_staleIpPermissionsEgress;
    bool m_staleIpPermissionsEgressHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
