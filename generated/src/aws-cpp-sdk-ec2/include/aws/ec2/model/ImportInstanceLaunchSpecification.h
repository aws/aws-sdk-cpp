/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ArchitectureValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/UserData.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/Placement.h>
#include <aws/ec2/model/ShutdownBehavior.h>
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
  class ImportInstanceLaunchSpecification
  {
  public:
    AWS_EC2_API ImportInstanceLaunchSpecification();
    AWS_EC2_API ImportInstanceLaunchSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImportInstanceLaunchSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The architecture of the instance.</p>
     */
    inline const ArchitectureValues& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const ArchitectureValues& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(ArchitectureValues&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline ImportInstanceLaunchSpecification& WithArchitecture(const ArchitectureValues& value) { SetArchitecture(value); return *this;}
    inline ImportInstanceLaunchSpecification& WithArchitecture(ArchitectureValues&& value) { SetArchitecture(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupNames() const{ return m_groupNames; }
    inline bool GroupNamesHasBeenSet() const { return m_groupNamesHasBeenSet; }
    inline void SetGroupNames(const Aws::Vector<Aws::String>& value) { m_groupNamesHasBeenSet = true; m_groupNames = value; }
    inline void SetGroupNames(Aws::Vector<Aws::String>&& value) { m_groupNamesHasBeenSet = true; m_groupNames = std::move(value); }
    inline ImportInstanceLaunchSpecification& WithGroupNames(const Aws::Vector<Aws::String>& value) { SetGroupNames(value); return *this;}
    inline ImportInstanceLaunchSpecification& WithGroupNames(Aws::Vector<Aws::String>&& value) { SetGroupNames(std::move(value)); return *this;}
    inline ImportInstanceLaunchSpecification& AddGroupNames(const Aws::String& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }
    inline ImportInstanceLaunchSpecification& AddGroupNames(Aws::String&& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(std::move(value)); return *this; }
    inline ImportInstanceLaunchSpecification& AddGroupNames(const char* value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupIds() const{ return m_groupIds; }
    inline bool GroupIdsHasBeenSet() const { return m_groupIdsHasBeenSet; }
    inline void SetGroupIds(const Aws::Vector<Aws::String>& value) { m_groupIdsHasBeenSet = true; m_groupIds = value; }
    inline void SetGroupIds(Aws::Vector<Aws::String>&& value) { m_groupIdsHasBeenSet = true; m_groupIds = std::move(value); }
    inline ImportInstanceLaunchSpecification& WithGroupIds(const Aws::Vector<Aws::String>& value) { SetGroupIds(value); return *this;}
    inline ImportInstanceLaunchSpecification& WithGroupIds(Aws::Vector<Aws::String>&& value) { SetGroupIds(std::move(value)); return *this;}
    inline ImportInstanceLaunchSpecification& AddGroupIds(const Aws::String& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }
    inline ImportInstanceLaunchSpecification& AddGroupIds(Aws::String&& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(std::move(value)); return *this; }
    inline ImportInstanceLaunchSpecification& AddGroupIds(const char* value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const{ return m_additionalInfo; }
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
    inline void SetAdditionalInfo(const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }
    inline void SetAdditionalInfo(Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }
    inline void SetAdditionalInfo(const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.assign(value); }
    inline ImportInstanceLaunchSpecification& WithAdditionalInfo(const Aws::String& value) { SetAdditionalInfo(value); return *this;}
    inline ImportInstanceLaunchSpecification& WithAdditionalInfo(Aws::String&& value) { SetAdditionalInfo(std::move(value)); return *this;}
    inline ImportInstanceLaunchSpecification& WithAdditionalInfo(const char* value) { SetAdditionalInfo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64-encoded user data to make available to the instance.</p>
     */
    inline const UserData& GetUserData() const{ return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    inline void SetUserData(const UserData& value) { m_userDataHasBeenSet = true; m_userData = value; }
    inline void SetUserData(UserData&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }
    inline ImportInstanceLaunchSpecification& WithUserData(const UserData& value) { SetUserData(value); return *this;}
    inline ImportInstanceLaunchSpecification& WithUserData(UserData&& value) { SetUserData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type. For more information about the instance types that you can
     * import, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#vmimport-instance-types">Instance
     * Types</a> in the VM Import/Export User Guide.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline ImportInstanceLaunchSpecification& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline ImportInstanceLaunchSpecification& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement information for the instance.</p>
     */
    inline const Placement& GetPlacement() const{ return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    inline void SetPlacement(const Placement& value) { m_placementHasBeenSet = true; m_placement = value; }
    inline void SetPlacement(Placement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }
    inline ImportInstanceLaunchSpecification& WithPlacement(const Placement& value) { SetPlacement(value); return *this;}
    inline ImportInstanceLaunchSpecification& WithPlacement(Placement&& value) { SetPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether monitoring is enabled.</p>
     */
    inline bool GetMonitoring() const{ return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    inline void SetMonitoring(bool value) { m_monitoringHasBeenSet = true; m_monitoring = value; }
    inline ImportInstanceLaunchSpecification& WithMonitoring(bool value) { SetMonitoring(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[EC2-VPC] The ID of the subnet in which to launch the instance.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline ImportInstanceLaunchSpecification& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline ImportInstanceLaunchSpecification& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline ImportInstanceLaunchSpecification& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline const ShutdownBehavior& GetInstanceInitiatedShutdownBehavior() const{ return m_instanceInitiatedShutdownBehavior; }
    inline bool InstanceInitiatedShutdownBehaviorHasBeenSet() const { return m_instanceInitiatedShutdownBehaviorHasBeenSet; }
    inline void SetInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = value; }
    inline void SetInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = std::move(value); }
    inline ImportInstanceLaunchSpecification& WithInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}
    inline ImportInstanceLaunchSpecification& WithInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { SetInstanceInitiatedShutdownBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[EC2-VPC] An available IP address from the IP address range of the
     * subnet.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }
    inline ImportInstanceLaunchSpecification& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}
    inline ImportInstanceLaunchSpecification& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}
    inline ImportInstanceLaunchSpecification& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}
    ///@}
  private:

    ArchitectureValues m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupNames;
    bool m_groupNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupIds;
    bool m_groupIdsHasBeenSet = false;

    Aws::String m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;

    UserData m_userData;
    bool m_userDataHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Placement m_placement;
    bool m_placementHasBeenSet = false;

    bool m_monitoring;
    bool m_monitoringHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    ShutdownBehavior m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
