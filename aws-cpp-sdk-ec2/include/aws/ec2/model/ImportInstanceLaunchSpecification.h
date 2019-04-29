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
#include <aws/ec2/model/ArchitectureValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ShutdownBehavior.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/Placement.h>
#include <aws/ec2/model/UserData.h>
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
   * <p>Describes the launch specification for VM import.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportInstanceLaunchSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ImportInstanceLaunchSpecification
  {
  public:
    ImportInstanceLaunchSpecification();
    ImportInstanceLaunchSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    ImportInstanceLaunchSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const{ return m_additionalInfo; }

    /**
     * <p>Reserved.</p>
     */
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetAdditionalInfo(const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetAdditionalInfo(Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }

    /**
     * <p>Reserved.</p>
     */
    inline void SetAdditionalInfo(const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.assign(value); }

    /**
     * <p>Reserved.</p>
     */
    inline ImportInstanceLaunchSpecification& WithAdditionalInfo(const Aws::String& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline ImportInstanceLaunchSpecification& WithAdditionalInfo(Aws::String&& value) { SetAdditionalInfo(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline ImportInstanceLaunchSpecification& WithAdditionalInfo(const char* value) { SetAdditionalInfo(value); return *this;}


    /**
     * <p>The architecture of the instance.</p>
     */
    inline const ArchitectureValues& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The architecture of the instance.</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The architecture of the instance.</p>
     */
    inline void SetArchitecture(const ArchitectureValues& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The architecture of the instance.</p>
     */
    inline void SetArchitecture(ArchitectureValues&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The architecture of the instance.</p>
     */
    inline ImportInstanceLaunchSpecification& WithArchitecture(const ArchitectureValues& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The architecture of the instance.</p>
     */
    inline ImportInstanceLaunchSpecification& WithArchitecture(ArchitectureValues&& value) { SetArchitecture(std::move(value)); return *this;}


    /**
     * <p>The security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupIds() const{ return m_groupIds; }

    /**
     * <p>The security group IDs.</p>
     */
    inline bool GroupIdsHasBeenSet() const { return m_groupIdsHasBeenSet; }

    /**
     * <p>The security group IDs.</p>
     */
    inline void SetGroupIds(const Aws::Vector<Aws::String>& value) { m_groupIdsHasBeenSet = true; m_groupIds = value; }

    /**
     * <p>The security group IDs.</p>
     */
    inline void SetGroupIds(Aws::Vector<Aws::String>&& value) { m_groupIdsHasBeenSet = true; m_groupIds = std::move(value); }

    /**
     * <p>The security group IDs.</p>
     */
    inline ImportInstanceLaunchSpecification& WithGroupIds(const Aws::Vector<Aws::String>& value) { SetGroupIds(value); return *this;}

    /**
     * <p>The security group IDs.</p>
     */
    inline ImportInstanceLaunchSpecification& WithGroupIds(Aws::Vector<Aws::String>&& value) { SetGroupIds(std::move(value)); return *this;}

    /**
     * <p>The security group IDs.</p>
     */
    inline ImportInstanceLaunchSpecification& AddGroupIds(const Aws::String& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }

    /**
     * <p>The security group IDs.</p>
     */
    inline ImportInstanceLaunchSpecification& AddGroupIds(Aws::String&& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The security group IDs.</p>
     */
    inline ImportInstanceLaunchSpecification& AddGroupIds(const char* value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }


    /**
     * <p>The security group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupNames() const{ return m_groupNames; }

    /**
     * <p>The security group names.</p>
     */
    inline bool GroupNamesHasBeenSet() const { return m_groupNamesHasBeenSet; }

    /**
     * <p>The security group names.</p>
     */
    inline void SetGroupNames(const Aws::Vector<Aws::String>& value) { m_groupNamesHasBeenSet = true; m_groupNames = value; }

    /**
     * <p>The security group names.</p>
     */
    inline void SetGroupNames(Aws::Vector<Aws::String>&& value) { m_groupNamesHasBeenSet = true; m_groupNames = std::move(value); }

    /**
     * <p>The security group names.</p>
     */
    inline ImportInstanceLaunchSpecification& WithGroupNames(const Aws::Vector<Aws::String>& value) { SetGroupNames(value); return *this;}

    /**
     * <p>The security group names.</p>
     */
    inline ImportInstanceLaunchSpecification& WithGroupNames(Aws::Vector<Aws::String>&& value) { SetGroupNames(std::move(value)); return *this;}

    /**
     * <p>The security group names.</p>
     */
    inline ImportInstanceLaunchSpecification& AddGroupNames(const Aws::String& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }

    /**
     * <p>The security group names.</p>
     */
    inline ImportInstanceLaunchSpecification& AddGroupNames(Aws::String&& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The security group names.</p>
     */
    inline ImportInstanceLaunchSpecification& AddGroupNames(const char* value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }


    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline const ShutdownBehavior& GetInstanceInitiatedShutdownBehavior() const{ return m_instanceInitiatedShutdownBehavior; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline bool InstanceInitiatedShutdownBehaviorHasBeenSet() const { return m_instanceInitiatedShutdownBehaviorHasBeenSet; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = value; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = std::move(value); }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline ImportInstanceLaunchSpecification& WithInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline ImportInstanceLaunchSpecification& WithInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { SetInstanceInitiatedShutdownBehavior(std::move(value)); return *this;}


    /**
     * <p>The instance type. For more information about the instance types that you can
     * import, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#vmimport-instance-types">Instance
     * Types</a> in the VM Import/Export User Guide.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type. For more information about the instance types that you can
     * import, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#vmimport-instance-types">Instance
     * Types</a> in the VM Import/Export User Guide.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type. For more information about the instance types that you can
     * import, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#vmimport-instance-types">Instance
     * Types</a> in the VM Import/Export User Guide.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type. For more information about the instance types that you can
     * import, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#vmimport-instance-types">Instance
     * Types</a> in the VM Import/Export User Guide.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type. For more information about the instance types that you can
     * import, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#vmimport-instance-types">Instance
     * Types</a> in the VM Import/Export User Guide.</p>
     */
    inline ImportInstanceLaunchSpecification& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type. For more information about the instance types that you can
     * import, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#vmimport-instance-types">Instance
     * Types</a> in the VM Import/Export User Guide.</p>
     */
    inline ImportInstanceLaunchSpecification& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>Indicates whether monitoring is enabled.</p>
     */
    inline bool GetMonitoring() const{ return m_monitoring; }

    /**
     * <p>Indicates whether monitoring is enabled.</p>
     */
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }

    /**
     * <p>Indicates whether monitoring is enabled.</p>
     */
    inline void SetMonitoring(bool value) { m_monitoringHasBeenSet = true; m_monitoring = value; }

    /**
     * <p>Indicates whether monitoring is enabled.</p>
     */
    inline ImportInstanceLaunchSpecification& WithMonitoring(bool value) { SetMonitoring(value); return *this;}


    /**
     * <p>The placement information for the instance.</p>
     */
    inline const Placement& GetPlacement() const{ return m_placement; }

    /**
     * <p>The placement information for the instance.</p>
     */
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }

    /**
     * <p>The placement information for the instance.</p>
     */
    inline void SetPlacement(const Placement& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The placement information for the instance.</p>
     */
    inline void SetPlacement(Placement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }

    /**
     * <p>The placement information for the instance.</p>
     */
    inline ImportInstanceLaunchSpecification& WithPlacement(const Placement& value) { SetPlacement(value); return *this;}

    /**
     * <p>The placement information for the instance.</p>
     */
    inline ImportInstanceLaunchSpecification& WithPlacement(Placement&& value) { SetPlacement(std::move(value)); return *this;}


    /**
     * <p>[EC2-VPC] An available IP address from the IP address range of the
     * subnet.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>[EC2-VPC] An available IP address from the IP address range of the
     * subnet.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>[EC2-VPC] An available IP address from the IP address range of the
     * subnet.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>[EC2-VPC] An available IP address from the IP address range of the
     * subnet.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>[EC2-VPC] An available IP address from the IP address range of the
     * subnet.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>[EC2-VPC] An available IP address from the IP address range of the
     * subnet.</p>
     */
    inline ImportInstanceLaunchSpecification& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>[EC2-VPC] An available IP address from the IP address range of the
     * subnet.</p>
     */
    inline ImportInstanceLaunchSpecification& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] An available IP address from the IP address range of the
     * subnet.</p>
     */
    inline ImportInstanceLaunchSpecification& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>[EC2-VPC] The ID of the subnet in which to launch the instance.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>[EC2-VPC] The ID of the subnet in which to launch the instance.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>[EC2-VPC] The ID of the subnet in which to launch the instance.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>[EC2-VPC] The ID of the subnet in which to launch the instance.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>[EC2-VPC] The ID of the subnet in which to launch the instance.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>[EC2-VPC] The ID of the subnet in which to launch the instance.</p>
     */
    inline ImportInstanceLaunchSpecification& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the subnet in which to launch the instance.</p>
     */
    inline ImportInstanceLaunchSpecification& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the subnet in which to launch the instance.</p>
     */
    inline ImportInstanceLaunchSpecification& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The Base64-encoded user data to make available to the instance.</p>
     */
    inline const UserData& GetUserData() const{ return m_userData; }

    /**
     * <p>The Base64-encoded user data to make available to the instance.</p>
     */
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }

    /**
     * <p>The Base64-encoded user data to make available to the instance.</p>
     */
    inline void SetUserData(const UserData& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>The Base64-encoded user data to make available to the instance.</p>
     */
    inline void SetUserData(UserData&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>The Base64-encoded user data to make available to the instance.</p>
     */
    inline ImportInstanceLaunchSpecification& WithUserData(const UserData& value) { SetUserData(value); return *this;}

    /**
     * <p>The Base64-encoded user data to make available to the instance.</p>
     */
    inline ImportInstanceLaunchSpecification& WithUserData(UserData&& value) { SetUserData(std::move(value)); return *this;}

  private:

    Aws::String m_additionalInfo;
    bool m_additionalInfoHasBeenSet;

    ArchitectureValues m_architecture;
    bool m_architectureHasBeenSet;

    Aws::Vector<Aws::String> m_groupIds;
    bool m_groupIdsHasBeenSet;

    Aws::Vector<Aws::String> m_groupNames;
    bool m_groupNamesHasBeenSet;

    ShutdownBehavior m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    bool m_monitoring;
    bool m_monitoringHasBeenSet;

    Placement m_placement;
    bool m_placementHasBeenSet;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    UserData m_userData;
    bool m_userDataHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
