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
  class AWS_EC2_API StaleSecurityGroup
  {
  public:
    StaleSecurityGroup();
    StaleSecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    StaleSecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The description of the security group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the security group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the security group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the security group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the security group.</p>
     */
    inline StaleSecurityGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the security group.</p>
     */
    inline StaleSecurityGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the security group.</p>
     */
    inline StaleSecurityGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline StaleSecurityGroup& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline StaleSecurityGroup& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline StaleSecurityGroup& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The name of the security group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

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
    inline StaleSecurityGroup& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the security group.</p>
     */
    inline StaleSecurityGroup& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the security group.</p>
     */
    inline StaleSecurityGroup& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>Information about the stale inbound rules in the security group.</p>
     */
    inline const Aws::Vector<StaleIpPermission>& GetStaleIpPermissions() const{ return m_staleIpPermissions; }

    /**
     * <p>Information about the stale inbound rules in the security group.</p>
     */
    inline void SetStaleIpPermissions(const Aws::Vector<StaleIpPermission>& value) { m_staleIpPermissionsHasBeenSet = true; m_staleIpPermissions = value; }

    /**
     * <p>Information about the stale inbound rules in the security group.</p>
     */
    inline void SetStaleIpPermissions(Aws::Vector<StaleIpPermission>&& value) { m_staleIpPermissionsHasBeenSet = true; m_staleIpPermissions = std::move(value); }

    /**
     * <p>Information about the stale inbound rules in the security group.</p>
     */
    inline StaleSecurityGroup& WithStaleIpPermissions(const Aws::Vector<StaleIpPermission>& value) { SetStaleIpPermissions(value); return *this;}

    /**
     * <p>Information about the stale inbound rules in the security group.</p>
     */
    inline StaleSecurityGroup& WithStaleIpPermissions(Aws::Vector<StaleIpPermission>&& value) { SetStaleIpPermissions(std::move(value)); return *this;}

    /**
     * <p>Information about the stale inbound rules in the security group.</p>
     */
    inline StaleSecurityGroup& AddStaleIpPermissions(const StaleIpPermission& value) { m_staleIpPermissionsHasBeenSet = true; m_staleIpPermissions.push_back(value); return *this; }

    /**
     * <p>Information about the stale inbound rules in the security group.</p>
     */
    inline StaleSecurityGroup& AddStaleIpPermissions(StaleIpPermission&& value) { m_staleIpPermissionsHasBeenSet = true; m_staleIpPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the stale outbound rules in the security group.</p>
     */
    inline const Aws::Vector<StaleIpPermission>& GetStaleIpPermissionsEgress() const{ return m_staleIpPermissionsEgress; }

    /**
     * <p>Information about the stale outbound rules in the security group.</p>
     */
    inline void SetStaleIpPermissionsEgress(const Aws::Vector<StaleIpPermission>& value) { m_staleIpPermissionsEgressHasBeenSet = true; m_staleIpPermissionsEgress = value; }

    /**
     * <p>Information about the stale outbound rules in the security group.</p>
     */
    inline void SetStaleIpPermissionsEgress(Aws::Vector<StaleIpPermission>&& value) { m_staleIpPermissionsEgressHasBeenSet = true; m_staleIpPermissionsEgress = std::move(value); }

    /**
     * <p>Information about the stale outbound rules in the security group.</p>
     */
    inline StaleSecurityGroup& WithStaleIpPermissionsEgress(const Aws::Vector<StaleIpPermission>& value) { SetStaleIpPermissionsEgress(value); return *this;}

    /**
     * <p>Information about the stale outbound rules in the security group.</p>
     */
    inline StaleSecurityGroup& WithStaleIpPermissionsEgress(Aws::Vector<StaleIpPermission>&& value) { SetStaleIpPermissionsEgress(std::move(value)); return *this;}

    /**
     * <p>Information about the stale outbound rules in the security group.</p>
     */
    inline StaleSecurityGroup& AddStaleIpPermissionsEgress(const StaleIpPermission& value) { m_staleIpPermissionsEgressHasBeenSet = true; m_staleIpPermissionsEgress.push_back(value); return *this; }

    /**
     * <p>Information about the stale outbound rules in the security group.</p>
     */
    inline StaleSecurityGroup& AddStaleIpPermissionsEgress(StaleIpPermission&& value) { m_staleIpPermissionsEgressHasBeenSet = true; m_staleIpPermissionsEgress.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the VPC for the security group.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC for the security group.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC for the security group.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC for the security group.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC for the security group.</p>
     */
    inline StaleSecurityGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC for the security group.</p>
     */
    inline StaleSecurityGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC for the security group.</p>
     */
    inline StaleSecurityGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::Vector<StaleIpPermission> m_staleIpPermissions;
    bool m_staleIpPermissionsHasBeenSet;

    Aws::Vector<StaleIpPermission> m_staleIpPermissionsEgress;
    bool m_staleIpPermissionsEgressHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
