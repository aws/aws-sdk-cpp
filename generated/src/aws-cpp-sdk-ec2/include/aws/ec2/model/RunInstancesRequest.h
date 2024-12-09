/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/RunInstancesMonitoringEnabled.h>
#include <aws/ec2/model/Placement.h>
#include <aws/ec2/model/LaunchTemplateSpecification.h>
#include <aws/ec2/model/InstanceMarketOptionsRequest.h>
#include <aws/ec2/model/CreditSpecificationRequest.h>
#include <aws/ec2/model/CpuOptionsRequest.h>
#include <aws/ec2/model/CapacityReservationSpecification.h>
#include <aws/ec2/model/HibernationOptionsRequest.h>
#include <aws/ec2/model/InstanceMetadataOptionsRequest.h>
#include <aws/ec2/model/EnclaveOptionsRequest.h>
#include <aws/ec2/model/PrivateDnsNameOptionsRequest.h>
#include <aws/ec2/model/InstanceMaintenanceOptionsRequest.h>
#include <aws/ec2/model/InstanceNetworkPerformanceOptionsRequest.h>
#include <aws/ec2/model/OperatorRequest.h>
#include <aws/ec2/model/ShutdownBehavior.h>
#include <aws/ec2/model/IamInstanceProfileSpecification.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <aws/ec2/model/InstanceIpv6Address.h>
#include <aws/ec2/model/ElasticGpuSpecification.h>
#include <aws/ec2/model/ElasticInferenceAccelerator.h>
#include <aws/ec2/model/TagSpecification.h>
#include <aws/ec2/model/LicenseConfigurationRequest.h>
#include <aws/ec2/model/InstanceNetworkInterfaceSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class RunInstancesRequest : public EC2Request
  {
  public:
    AWS_EC2_API RunInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RunInstances"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The block device mapping, which defines the EBS volumes and instance store
     * volumes to attach to the instance at launch. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * device mappings</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }
    inline RunInstancesRequest& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}
    inline RunInstancesRequest& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}
    inline RunInstancesRequest& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }
    inline RunInstancesRequest& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI. An AMI ID is required to launch an instance and must be
     * specified here or in a launch template.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline RunInstancesRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline RunInstancesRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline RunInstancesRequest& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Amazon
     * EC2 instance types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline RunInstancesRequest& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline RunInstancesRequest& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of IPv6 addresses to associate with the primary network interface.
     * Amazon EC2 chooses the IPv6 addresses from the range of your subnet. You cannot
     * specify this option and the option to assign specific IPv6 addresses in the same
     * request. You can specify this option if you've specified a minimum number of
     * instances to launch.</p> <p>You cannot specify this option and the network
     * interfaces option in the same request.</p>
     */
    inline int GetIpv6AddressCount() const{ return m_ipv6AddressCount; }
    inline bool Ipv6AddressCountHasBeenSet() const { return m_ipv6AddressCountHasBeenSet; }
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }
    inline RunInstancesRequest& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 addresses from the range of the subnet to associate with the primary
     * network interface. You cannot specify this option and the option to assign a
     * number of IPv6 addresses in the same request. You cannot specify this option if
     * you've specified a minimum number of instances to launch.</p> <p>You cannot
     * specify this option and the network interfaces option in the same request.</p>
     */
    inline const Aws::Vector<InstanceIpv6Address>& GetIpv6Addresses() const{ return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    inline void SetIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }
    inline void SetIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }
    inline RunInstancesRequest& WithIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { SetIpv6Addresses(value); return *this;}
    inline RunInstancesRequest& WithIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { SetIpv6Addresses(std::move(value)); return *this;}
    inline RunInstancesRequest& AddIpv6Addresses(const InstanceIpv6Address& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }
    inline RunInstancesRequest& AddIpv6Addresses(InstanceIpv6Address&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the kernel.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">PV-GRUB</a>
     * in the <i>Amazon EC2 User Guide</i>.</p> 
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }
    inline RunInstancesRequest& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}
    inline RunInstancesRequest& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}
    inline RunInstancesRequest& WithKernelId(const char* value) { SetKernelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key pair. You can create a key pair using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateKeyPair.html">CreateKeyPair</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportKeyPair.html">ImportKeyPair</a>.</p>
     *  <p>If you do not specify a key pair, you can't connect to the
     * instance unless you choose an AMI that is configured to allow users another way
     * to log in.</p> 
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }
    inline RunInstancesRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline RunInstancesRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline RunInstancesRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances to launch. If you specify a value that is
     * more capacity than Amazon EC2 can launch in the target Availability Zone, Amazon
     * EC2 launches the largest possible number of instances above the specified
     * minimum count.</p> <p>Constraints: Between 1 and the quota for the specified
     * instance type for your account for this Region. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/instancetypes/ec2-instance-quotas.html">Amazon
     * EC2 instance type quotas</a>.</p>
     */
    inline int GetMaxCount() const{ return m_maxCount; }
    inline bool MaxCountHasBeenSet() const { return m_maxCountHasBeenSet; }
    inline void SetMaxCount(int value) { m_maxCountHasBeenSet = true; m_maxCount = value; }
    inline RunInstancesRequest& WithMaxCount(int value) { SetMaxCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of instances to launch. If you specify a value that is
     * more capacity than Amazon EC2 can provide in the target Availability Zone,
     * Amazon EC2 does not launch any instances.</p> <p>Constraints: Between 1 and the
     * quota for the specified instance type for your account for this Region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/instancetypes/ec2-instance-quotas.html">Amazon
     * EC2 instance type quotas</a>.</p>
     */
    inline int GetMinCount() const{ return m_minCount; }
    inline bool MinCountHasBeenSet() const { return m_minCountHasBeenSet; }
    inline void SetMinCount(int value) { m_minCountHasBeenSet = true; m_minCount = value; }
    inline RunInstancesRequest& WithMinCount(int value) { SetMinCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether detailed monitoring is enabled for the instance.</p>
     */
    inline const RunInstancesMonitoringEnabled& GetMonitoring() const{ return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    inline void SetMonitoring(const RunInstancesMonitoringEnabled& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }
    inline void SetMonitoring(RunInstancesMonitoringEnabled&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::move(value); }
    inline RunInstancesRequest& WithMonitoring(const RunInstancesMonitoringEnabled& value) { SetMonitoring(value); return *this;}
    inline RunInstancesRequest& WithMonitoring(RunInstancesMonitoringEnabled&& value) { SetMonitoring(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement for the instance.</p>
     */
    inline const Placement& GetPlacement() const{ return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    inline void SetPlacement(const Placement& value) { m_placementHasBeenSet = true; m_placement = value; }
    inline void SetPlacement(Placement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }
    inline RunInstancesRequest& WithPlacement(const Placement& value) { SetPlacement(value); return *this;}
    inline RunInstancesRequest& WithPlacement(Placement&& value) { SetPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the RAM disk to select. Some kernels require additional drivers at
     * launch. Check the kernel requirements for information about whether you need to
     * specify a RAM disk. To find kernel requirements, go to the Amazon Web Services
     * Resource Center and search for the kernel ID.</p>  <p>We recommend
     * that you use PV-GRUB instead of kernels and RAM disks. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">PV-GRUB</a>
     * in the <i>Amazon EC2 User Guide</i>.</p> 
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::move(value); }
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }
    inline RunInstancesRequest& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}
    inline RunInstancesRequest& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}
    inline RunInstancesRequest& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups. You can create a security group using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateSecurityGroup.html">CreateSecurityGroup</a>.</p>
     * <p>If you specify a network interface, you must specify any security groups as
     * part of the network interface instead of using this parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline RunInstancesRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline RunInstancesRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline RunInstancesRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline RunInstancesRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline RunInstancesRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>[Default VPC] The names of the security groups.</p> <p>If you specify a
     * network interface, you must specify any security groups as part of the network
     * interface instead of using this parameter.</p> <p>Default: Amazon EC2 uses the
     * default security group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline RunInstancesRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline RunInstancesRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline RunInstancesRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline RunInstancesRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline RunInstancesRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet to launch the instance into.</p> <p>If you specify a
     * network interface, you must specify any subnets as part of the network interface
     * instead of using this parameter.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline RunInstancesRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline RunInstancesRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline RunInstancesRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user data to make available to the instance. User data must be
     * base64-encoded. Depending on the tool or SDK that you're using, the
     * base64-encoding might be performed for you. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instancedata-add-user-data.html">Work
     * with instance user data</a>.</p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }
    inline RunInstancesRequest& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}
    inline RunInstancesRequest& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}
    inline RunInstancesRequest& WithUserData(const char* value) { SetUserData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An elastic GPU to associate with the instance.</p>  <p>Amazon Elastic
     * Graphics reached end of life on January 8, 2024.</p> 
     */
    inline const Aws::Vector<ElasticGpuSpecification>& GetElasticGpuSpecification() const{ return m_elasticGpuSpecification; }
    inline bool ElasticGpuSpecificationHasBeenSet() const { return m_elasticGpuSpecificationHasBeenSet; }
    inline void SetElasticGpuSpecification(const Aws::Vector<ElasticGpuSpecification>& value) { m_elasticGpuSpecificationHasBeenSet = true; m_elasticGpuSpecification = value; }
    inline void SetElasticGpuSpecification(Aws::Vector<ElasticGpuSpecification>&& value) { m_elasticGpuSpecificationHasBeenSet = true; m_elasticGpuSpecification = std::move(value); }
    inline RunInstancesRequest& WithElasticGpuSpecification(const Aws::Vector<ElasticGpuSpecification>& value) { SetElasticGpuSpecification(value); return *this;}
    inline RunInstancesRequest& WithElasticGpuSpecification(Aws::Vector<ElasticGpuSpecification>&& value) { SetElasticGpuSpecification(std::move(value)); return *this;}
    inline RunInstancesRequest& AddElasticGpuSpecification(const ElasticGpuSpecification& value) { m_elasticGpuSpecificationHasBeenSet = true; m_elasticGpuSpecification.push_back(value); return *this; }
    inline RunInstancesRequest& AddElasticGpuSpecification(ElasticGpuSpecification&& value) { m_elasticGpuSpecificationHasBeenSet = true; m_elasticGpuSpecification.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An elastic inference accelerator to associate with the instance.</p> 
     * <p>Amazon Elastic Inference is no longer available.</p> 
     */
    inline const Aws::Vector<ElasticInferenceAccelerator>& GetElasticInferenceAccelerators() const{ return m_elasticInferenceAccelerators; }
    inline bool ElasticInferenceAcceleratorsHasBeenSet() const { return m_elasticInferenceAcceleratorsHasBeenSet; }
    inline void SetElasticInferenceAccelerators(const Aws::Vector<ElasticInferenceAccelerator>& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators = value; }
    inline void SetElasticInferenceAccelerators(Aws::Vector<ElasticInferenceAccelerator>&& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators = std::move(value); }
    inline RunInstancesRequest& WithElasticInferenceAccelerators(const Aws::Vector<ElasticInferenceAccelerator>& value) { SetElasticInferenceAccelerators(value); return *this;}
    inline RunInstancesRequest& WithElasticInferenceAccelerators(Aws::Vector<ElasticInferenceAccelerator>&& value) { SetElasticInferenceAccelerators(std::move(value)); return *this;}
    inline RunInstancesRequest& AddElasticInferenceAccelerators(const ElasticInferenceAccelerator& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators.push_back(value); return *this; }
    inline RunInstancesRequest& AddElasticInferenceAccelerators(ElasticInferenceAccelerator&& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the resources that are created during instance
     * launch.</p> <p>You can specify tags for the following resources only:</p> <ul>
     * <li> <p>Instances</p> </li> <li> <p>Volumes</p> </li> <li> <p>Spot Instance
     * requests</p> </li> <li> <p>Network interfaces</p> </li> </ul> <p>To tag a
     * resource after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline RunInstancesRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline RunInstancesRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline RunInstancesRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline RunInstancesRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The launch template. Any additional parameters that you specify for the new
     * instance overwrite the corresponding parameters included in the launch
     * template.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }
    inline RunInstancesRequest& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}
    inline RunInstancesRequest& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The market (purchasing) option for the instances.</p> <p>For
     * <a>RunInstances</a>, persistent Spot Instance requests are only supported when
     * <b>InstanceInterruptionBehavior</b> is set to either <code>hibernate</code> or
     * <code>stop</code>.</p>
     */
    inline const InstanceMarketOptionsRequest& GetInstanceMarketOptions() const{ return m_instanceMarketOptions; }
    inline bool InstanceMarketOptionsHasBeenSet() const { return m_instanceMarketOptionsHasBeenSet; }
    inline void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = value; }
    inline void SetInstanceMarketOptions(InstanceMarketOptionsRequest&& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = std::move(value); }
    inline RunInstancesRequest& WithInstanceMarketOptions(const InstanceMarketOptionsRequest& value) { SetInstanceMarketOptions(value); return *this;}
    inline RunInstancesRequest& WithInstanceMarketOptions(InstanceMarketOptionsRequest&& value) { SetInstanceMarketOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credit option for CPU usage of the burstable performance instance. Valid
     * values are <code>standard</code> and <code>unlimited</code>. To change this
     * attribute after launch, use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyInstanceCreditSpecification.html">
     * ModifyInstanceCreditSpecification</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>Default:
     * <code>standard</code> (T2 instances) or <code>unlimited</code> (T3/T3a/T4g
     * instances)</p> <p>For T3 instances with <code>host</code> tenancy, only
     * <code>standard</code> is supported.</p>
     */
    inline const CreditSpecificationRequest& GetCreditSpecification() const{ return m_creditSpecification; }
    inline bool CreditSpecificationHasBeenSet() const { return m_creditSpecificationHasBeenSet; }
    inline void SetCreditSpecification(const CreditSpecificationRequest& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = value; }
    inline void SetCreditSpecification(CreditSpecificationRequest&& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = std::move(value); }
    inline RunInstancesRequest& WithCreditSpecification(const CreditSpecificationRequest& value) { SetCreditSpecification(value); return *this;}
    inline RunInstancesRequest& WithCreditSpecification(CreditSpecificationRequest&& value) { SetCreditSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimize
     * CPU options</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const CpuOptionsRequest& GetCpuOptions() const{ return m_cpuOptions; }
    inline bool CpuOptionsHasBeenSet() const { return m_cpuOptionsHasBeenSet; }
    inline void SetCpuOptions(const CpuOptionsRequest& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = value; }
    inline void SetCpuOptions(CpuOptionsRequest&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::move(value); }
    inline RunInstancesRequest& WithCpuOptions(const CpuOptionsRequest& value) { SetCpuOptions(value); return *this;}
    inline RunInstancesRequest& WithCpuOptions(CpuOptionsRequest&& value) { SetCpuOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Capacity Reservation targeting option. If you do not
     * specify this parameter, the instance's Capacity Reservation preference defaults
     * to <code>open</code>, which enables it to run in any open Capacity Reservation
     * that has matching attributes (instance type, platform, Availability Zone, and
     * tenancy).</p>
     */
    inline const CapacityReservationSpecification& GetCapacityReservationSpecification() const{ return m_capacityReservationSpecification; }
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }
    inline void SetCapacityReservationSpecification(const CapacityReservationSpecification& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = value; }
    inline void SetCapacityReservationSpecification(CapacityReservationSpecification&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::move(value); }
    inline RunInstancesRequest& WithCapacityReservationSpecification(const CapacityReservationSpecification& value) { SetCapacityReservationSpecification(value); return *this;}
    inline RunInstancesRequest& WithCapacityReservationSpecification(CapacityReservationSpecification&& value) { SetCapacityReservationSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance is enabled for hibernation. This parameter is
     * valid only if the instance meets the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/hibernating-prerequisites.html">hibernation
     * prerequisites</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * your Amazon EC2 instance</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>You
     * can't enable hibernation and Amazon Web Services Nitro Enclaves on the same
     * instance.</p>
     */
    inline const HibernationOptionsRequest& GetHibernationOptions() const{ return m_hibernationOptions; }
    inline bool HibernationOptionsHasBeenSet() const { return m_hibernationOptionsHasBeenSet; }
    inline void SetHibernationOptions(const HibernationOptionsRequest& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = value; }
    inline void SetHibernationOptions(HibernationOptionsRequest&& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = std::move(value); }
    inline RunInstancesRequest& WithHibernationOptions(const HibernationOptionsRequest& value) { SetHibernationOptions(value); return *this;}
    inline RunInstancesRequest& WithHibernationOptions(HibernationOptionsRequest&& value) { SetHibernationOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license configurations.</p>
     */
    inline const Aws::Vector<LicenseConfigurationRequest>& GetLicenseSpecifications() const{ return m_licenseSpecifications; }
    inline bool LicenseSpecificationsHasBeenSet() const { return m_licenseSpecificationsHasBeenSet; }
    inline void SetLicenseSpecifications(const Aws::Vector<LicenseConfigurationRequest>& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = value; }
    inline void SetLicenseSpecifications(Aws::Vector<LicenseConfigurationRequest>&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = std::move(value); }
    inline RunInstancesRequest& WithLicenseSpecifications(const Aws::Vector<LicenseConfigurationRequest>& value) { SetLicenseSpecifications(value); return *this;}
    inline RunInstancesRequest& WithLicenseSpecifications(Aws::Vector<LicenseConfigurationRequest>&& value) { SetLicenseSpecifications(std::move(value)); return *this;}
    inline RunInstancesRequest& AddLicenseSpecifications(const LicenseConfigurationRequest& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(value); return *this; }
    inline RunInstancesRequest& AddLicenseSpecifications(LicenseConfigurationRequest&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a>.</p>
     */
    inline const InstanceMetadataOptionsRequest& GetMetadataOptions() const{ return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    inline void SetMetadataOptions(const InstanceMetadataOptionsRequest& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = value; }
    inline void SetMetadataOptions(InstanceMetadataOptionsRequest&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::move(value); }
    inline RunInstancesRequest& WithMetadataOptions(const InstanceMetadataOptionsRequest& value) { SetMetadataOptions(value); return *this;}
    inline RunInstancesRequest& WithMetadataOptions(InstanceMetadataOptionsRequest&& value) { SetMetadataOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves. For more information, see <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/nitro-enclave.html">What
     * is Amazon Web Services Nitro Enclaves?</a> in the <i>Amazon Web Services Nitro
     * Enclaves User Guide</i>.</p> <p>You can't enable Amazon Web Services Nitro
     * Enclaves and hibernation on the same instance.</p>
     */
    inline const EnclaveOptionsRequest& GetEnclaveOptions() const{ return m_enclaveOptions; }
    inline bool EnclaveOptionsHasBeenSet() const { return m_enclaveOptionsHasBeenSet; }
    inline void SetEnclaveOptions(const EnclaveOptionsRequest& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = value; }
    inline void SetEnclaveOptions(EnclaveOptionsRequest&& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = std::move(value); }
    inline RunInstancesRequest& WithEnclaveOptions(const EnclaveOptionsRequest& value) { SetEnclaveOptions(value); return *this;}
    inline RunInstancesRequest& WithEnclaveOptions(EnclaveOptionsRequest&& value) { SetEnclaveOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for the instance hostname. The default values are inherited from
     * the subnet. Applies only if creating a network interface, not attaching an
     * existing one.</p>
     */
    inline const PrivateDnsNameOptionsRequest& GetPrivateDnsNameOptions() const{ return m_privateDnsNameOptions; }
    inline bool PrivateDnsNameOptionsHasBeenSet() const { return m_privateDnsNameOptionsHasBeenSet; }
    inline void SetPrivateDnsNameOptions(const PrivateDnsNameOptionsRequest& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = value; }
    inline void SetPrivateDnsNameOptions(PrivateDnsNameOptionsRequest&& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = std::move(value); }
    inline RunInstancesRequest& WithPrivateDnsNameOptions(const PrivateDnsNameOptionsRequest& value) { SetPrivateDnsNameOptions(value); return *this;}
    inline RunInstancesRequest& WithPrivateDnsNameOptions(PrivateDnsNameOptionsRequest&& value) { SetPrivateDnsNameOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintenance and recovery options for the instance.</p>
     */
    inline const InstanceMaintenanceOptionsRequest& GetMaintenanceOptions() const{ return m_maintenanceOptions; }
    inline bool MaintenanceOptionsHasBeenSet() const { return m_maintenanceOptionsHasBeenSet; }
    inline void SetMaintenanceOptions(const InstanceMaintenanceOptionsRequest& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = value; }
    inline void SetMaintenanceOptions(InstanceMaintenanceOptionsRequest&& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = std::move(value); }
    inline RunInstancesRequest& WithMaintenanceOptions(const InstanceMaintenanceOptionsRequest& value) { SetMaintenanceOptions(value); return *this;}
    inline RunInstancesRequest& WithMaintenanceOptions(InstanceMaintenanceOptionsRequest&& value) { SetMaintenanceOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance is enabled for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html#Using_StopProtection">Stop
     * protection</a>. </p>
     */
    inline bool GetDisableApiStop() const{ return m_disableApiStop; }
    inline bool DisableApiStopHasBeenSet() const { return m_disableApiStopHasBeenSet; }
    inline void SetDisableApiStop(bool value) { m_disableApiStopHasBeenSet = true; m_disableApiStop = value; }
    inline RunInstancesRequest& WithDisableApiStop(bool value) { SetDisableApiStop(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you’re launching an instance into a dual-stack or IPv6-only subnet, you
     * can enable assigning a primary IPv6 address. A primary IPv6 address is an IPv6
     * GUA address associated with an ENI that you have enabled to use a primary IPv6
     * address. Use this option if an instance relies on its IPv6 address not changing.
     * When you launch the instance, Amazon Web Services will automatically assign an
     * IPv6 address associated with the ENI attached to your instance to be the primary
     * IPv6 address. Once you enable an IPv6 GUA address to be a primary IPv6, you
     * cannot disable it. When you enable an IPv6 GUA address to be a primary IPv6, the
     * first IPv6 GUA will be made the primary IPv6 address until the instance is
     * terminated or the network interface is detached. If you have multiple IPv6
     * addresses associated with an ENI attached to your instance and you enable a
     * primary IPv6 address, the first IPv6 GUA address associated with the ENI becomes
     * the primary IPv6 address.</p>
     */
    inline bool GetEnablePrimaryIpv6() const{ return m_enablePrimaryIpv6; }
    inline bool EnablePrimaryIpv6HasBeenSet() const { return m_enablePrimaryIpv6HasBeenSet; }
    inline void SetEnablePrimaryIpv6(bool value) { m_enablePrimaryIpv6HasBeenSet = true; m_enablePrimaryIpv6 = value; }
    inline RunInstancesRequest& WithEnablePrimaryIpv6(bool value) { SetEnablePrimaryIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains settings for the network performance options for the instance.</p>
     */
    inline const InstanceNetworkPerformanceOptionsRequest& GetNetworkPerformanceOptions() const{ return m_networkPerformanceOptions; }
    inline bool NetworkPerformanceOptionsHasBeenSet() const { return m_networkPerformanceOptionsHasBeenSet; }
    inline void SetNetworkPerformanceOptions(const InstanceNetworkPerformanceOptionsRequest& value) { m_networkPerformanceOptionsHasBeenSet = true; m_networkPerformanceOptions = value; }
    inline void SetNetworkPerformanceOptions(InstanceNetworkPerformanceOptionsRequest&& value) { m_networkPerformanceOptionsHasBeenSet = true; m_networkPerformanceOptions = std::move(value); }
    inline RunInstancesRequest& WithNetworkPerformanceOptions(const InstanceNetworkPerformanceOptionsRequest& value) { SetNetworkPerformanceOptions(value); return *this;}
    inline RunInstancesRequest& WithNetworkPerformanceOptions(InstanceNetworkPerformanceOptionsRequest&& value) { SetNetworkPerformanceOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for internal use.</p>
     */
    inline const OperatorRequest& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const OperatorRequest& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(OperatorRequest&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline RunInstancesRequest& WithOperator(const OperatorRequest& value) { SetOperator(value); return *this;}
    inline RunInstancesRequest& WithOperator(OperatorRequest&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline RunInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API; otherwise, you can. To
     * change this attribute after launch, use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyInstanceAttribute.html">ModifyInstanceAttribute</a>.
     * Alternatively, if you set <code>InstanceInitiatedShutdownBehavior</code> to
     * <code>terminate</code>, you can terminate the instance by running the shutdown
     * command from the instance.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetDisableApiTermination() const{ return m_disableApiTermination; }
    inline bool DisableApiTerminationHasBeenSet() const { return m_disableApiTerminationHasBeenSet; }
    inline void SetDisableApiTermination(bool value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }
    inline RunInstancesRequest& WithDisableApiTermination(bool value) { SetDisableApiTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     * <p>Default: <code>stop</code> </p>
     */
    inline const ShutdownBehavior& GetInstanceInitiatedShutdownBehavior() const{ return m_instanceInitiatedShutdownBehavior; }
    inline bool InstanceInitiatedShutdownBehaviorHasBeenSet() const { return m_instanceInitiatedShutdownBehaviorHasBeenSet; }
    inline void SetInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = value; }
    inline void SetInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = std::move(value); }
    inline RunInstancesRequest& WithInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}
    inline RunInstancesRequest& WithInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { SetInstanceInitiatedShutdownBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary IPv4 address. You must specify a value from the IPv4 address
     * range of the subnet.</p> <p>Only one private IP address can be designated as
     * primary. You can't specify this option if you've specified the option to
     * designate a private IP address as the primary IP address in a network interface
     * specification. You cannot specify this option if you're launching more than one
     * instance in the request.</p> <p>You cannot specify this option and the network
     * interfaces option in the same request.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }
    inline RunInstancesRequest& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}
    inline RunInstancesRequest& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}
    inline RunInstancesRequest& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, a randomly generated token is
     * used for the request to ensure idempotency.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline RunInstancesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline RunInstancesRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline RunInstancesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline RunInstancesRequest& WithAdditionalInfo(const Aws::String& value) { SetAdditionalInfo(value); return *this;}
    inline RunInstancesRequest& WithAdditionalInfo(Aws::String&& value) { SetAdditionalInfo(std::move(value)); return *this;}
    inline RunInstancesRequest& WithAdditionalInfo(const char* value) { SetAdditionalInfo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interfaces to associate with the instance.</p>
     */
    inline const Aws::Vector<InstanceNetworkInterfaceSpecification>& GetNetworkInterfaces() const{ return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    inline void SetNetworkInterfaces(const Aws::Vector<InstanceNetworkInterfaceSpecification>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }
    inline void SetNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }
    inline RunInstancesRequest& WithNetworkInterfaces(const Aws::Vector<InstanceNetworkInterfaceSpecification>& value) { SetNetworkInterfaces(value); return *this;}
    inline RunInstancesRequest& WithNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}
    inline RunInstancesRequest& AddNetworkInterfaces(const InstanceNetworkInterfaceSpecification& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }
    inline RunInstancesRequest& AddNetworkInterfaces(InstanceNetworkInterfaceSpecification&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of an IAM instance profile.</p>
     */
    inline const IamInstanceProfileSpecification& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    inline void SetIamInstanceProfile(const IamInstanceProfileSpecification& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }
    inline void SetIamInstanceProfile(IamInstanceProfileSpecification&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }
    inline RunInstancesRequest& WithIamInstanceProfile(const IamInstanceProfileSpecification& value) { SetIamInstanceProfile(value); return *this;}
    inline RunInstancesRequest& WithIamInstanceProfile(IamInstanceProfileSpecification&& value) { SetIamInstanceProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal Amazon EBS I/O performance. This
     * optimization isn't available with all instance types. Additional usage charges
     * apply when using an EBS-optimized instance.</p> <p>Default: <code>false</code>
     * </p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline RunInstancesRequest& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}
  private:

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_ipv6AddressCount;
    bool m_ipv6AddressCountHasBeenSet = false;

    Aws::Vector<InstanceIpv6Address> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    int m_maxCount;
    bool m_maxCountHasBeenSet = false;

    int m_minCount;
    bool m_minCountHasBeenSet = false;

    RunInstancesMonitoringEnabled m_monitoring;
    bool m_monitoringHasBeenSet = false;

    Placement m_placement;
    bool m_placementHasBeenSet = false;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::Vector<ElasticGpuSpecification> m_elasticGpuSpecification;
    bool m_elasticGpuSpecificationHasBeenSet = false;

    Aws::Vector<ElasticInferenceAccelerator> m_elasticInferenceAccelerators;
    bool m_elasticInferenceAcceleratorsHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    InstanceMarketOptionsRequest m_instanceMarketOptions;
    bool m_instanceMarketOptionsHasBeenSet = false;

    CreditSpecificationRequest m_creditSpecification;
    bool m_creditSpecificationHasBeenSet = false;

    CpuOptionsRequest m_cpuOptions;
    bool m_cpuOptionsHasBeenSet = false;

    CapacityReservationSpecification m_capacityReservationSpecification;
    bool m_capacityReservationSpecificationHasBeenSet = false;

    HibernationOptionsRequest m_hibernationOptions;
    bool m_hibernationOptionsHasBeenSet = false;

    Aws::Vector<LicenseConfigurationRequest> m_licenseSpecifications;
    bool m_licenseSpecificationsHasBeenSet = false;

    InstanceMetadataOptionsRequest m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;

    EnclaveOptionsRequest m_enclaveOptions;
    bool m_enclaveOptionsHasBeenSet = false;

    PrivateDnsNameOptionsRequest m_privateDnsNameOptions;
    bool m_privateDnsNameOptionsHasBeenSet = false;

    InstanceMaintenanceOptionsRequest m_maintenanceOptions;
    bool m_maintenanceOptionsHasBeenSet = false;

    bool m_disableApiStop;
    bool m_disableApiStopHasBeenSet = false;

    bool m_enablePrimaryIpv6;
    bool m_enablePrimaryIpv6HasBeenSet = false;

    InstanceNetworkPerformanceOptionsRequest m_networkPerformanceOptions;
    bool m_networkPerformanceOptionsHasBeenSet = false;

    OperatorRequest m_operator;
    bool m_operatorHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    bool m_disableApiTermination;
    bool m_disableApiTerminationHasBeenSet = false;

    ShutdownBehavior m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;

    Aws::Vector<InstanceNetworkInterfaceSpecification> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    IamInstanceProfileSpecification m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
