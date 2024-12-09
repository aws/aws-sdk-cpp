/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/LaunchTemplateIamInstanceProfileSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/LaunchTemplatesMonitoring.h>
#include <aws/ec2/model/LaunchTemplatePlacement.h>
#include <aws/ec2/model/ShutdownBehavior.h>
#include <aws/ec2/model/LaunchTemplateInstanceMarketOptions.h>
#include <aws/ec2/model/CreditSpecification.h>
#include <aws/ec2/model/LaunchTemplateCpuOptions.h>
#include <aws/ec2/model/LaunchTemplateCapacityReservationSpecificationResponse.h>
#include <aws/ec2/model/LaunchTemplateHibernationOptions.h>
#include <aws/ec2/model/LaunchTemplateInstanceMetadataOptions.h>
#include <aws/ec2/model/LaunchTemplateEnclaveOptions.h>
#include <aws/ec2/model/InstanceRequirements.h>
#include <aws/ec2/model/LaunchTemplatePrivateDnsNameOptions.h>
#include <aws/ec2/model/LaunchTemplateInstanceMaintenanceOptions.h>
#include <aws/ec2/model/OperatorResponse.h>
#include <aws/ec2/model/LaunchTemplateNetworkPerformanceOptions.h>
#include <aws/ec2/model/LaunchTemplateBlockDeviceMapping.h>
#include <aws/ec2/model/LaunchTemplateInstanceNetworkInterfaceSpecification.h>
#include <aws/ec2/model/LaunchTemplateTagSpecification.h>
#include <aws/ec2/model/ElasticGpuSpecificationResponse.h>
#include <aws/ec2/model/LaunchTemplateElasticInferenceAcceleratorResponse.h>
#include <aws/ec2/model/LaunchTemplateLicenseConfiguration.h>
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
   * <p>The information for a launch template. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResponseLaunchTemplateData">AWS
   * API Reference</a></p>
   */
  class ResponseLaunchTemplateData
  {
  public:
    AWS_EC2_API ResponseLaunchTemplateData();
    AWS_EC2_API ResponseLaunchTemplateData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ResponseLaunchTemplateData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the kernel, if applicable.</p>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }
    inline ResponseLaunchTemplateData& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}
    inline ResponseLaunchTemplateData& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}
    inline ResponseLaunchTemplateData& WithKernelId(const char* value) { SetKernelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. </p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline ResponseLaunchTemplateData& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM instance profile.</p>
     */
    inline const LaunchTemplateIamInstanceProfileSpecification& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    inline void SetIamInstanceProfile(const LaunchTemplateIamInstanceProfileSpecification& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }
    inline void SetIamInstanceProfile(LaunchTemplateIamInstanceProfileSpecification&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }
    inline ResponseLaunchTemplateData& WithIamInstanceProfile(const LaunchTemplateIamInstanceProfileSpecification& value) { SetIamInstanceProfile(value); return *this;}
    inline ResponseLaunchTemplateData& WithIamInstanceProfile(LaunchTemplateIamInstanceProfileSpecification&& value) { SetIamInstanceProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block device mappings.</p>
     */
    inline const Aws::Vector<LaunchTemplateBlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    inline void SetBlockDeviceMappings(const Aws::Vector<LaunchTemplateBlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }
    inline void SetBlockDeviceMappings(Aws::Vector<LaunchTemplateBlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }
    inline ResponseLaunchTemplateData& WithBlockDeviceMappings(const Aws::Vector<LaunchTemplateBlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}
    inline ResponseLaunchTemplateData& WithBlockDeviceMappings(Aws::Vector<LaunchTemplateBlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}
    inline ResponseLaunchTemplateData& AddBlockDeviceMappings(const LaunchTemplateBlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }
    inline ResponseLaunchTemplateData& AddBlockDeviceMappings(LaunchTemplateBlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network interfaces.</p>
     */
    inline const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification>& GetNetworkInterfaces() const{ return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    inline void SetNetworkInterfaces(const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }
    inline void SetNetworkInterfaces(Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }
    inline ResponseLaunchTemplateData& WithNetworkInterfaces(const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification>& value) { SetNetworkInterfaces(value); return *this;}
    inline ResponseLaunchTemplateData& WithNetworkInterfaces(Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}
    inline ResponseLaunchTemplateData& AddNetworkInterfaces(const LaunchTemplateInstanceNetworkInterfaceSpecification& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }
    inline ResponseLaunchTemplateData& AddNetworkInterfaces(LaunchTemplateInstanceNetworkInterfaceSpecification&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI or a Systems Manager parameter. The Systems Manager
     * parameter will resolve to the ID of the AMI at instance launch.</p> <p>The value
     * depends on what you specified in the request. The possible values are:</p> <ul>
     * <li> <p>If an AMI ID was specified in the request, then this is the AMI ID.</p>
     * </li> <li> <p>If a Systems Manager parameter was specified in the request, and
     * <code>ResolveAlias</code> was configured as <code>true</code>, then this is the
     * AMI ID that the parameter is mapped to in the Parameter Store.</p> </li> <li>
     * <p>If a Systems Manager parameter was specified in the request, and
     * <code>ResolveAlias</code> was configured as <code>false</code>, then this is the
     * parameter value.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#use-an-ssm-parameter-instead-of-an-ami-id">Use
     * a Systems Manager parameter instead of an AMI ID</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline ResponseLaunchTemplateData& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline ResponseLaunchTemplateData& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline ResponseLaunchTemplateData& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline ResponseLaunchTemplateData& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline ResponseLaunchTemplateData& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key pair.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }
    inline ResponseLaunchTemplateData& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline ResponseLaunchTemplateData& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline ResponseLaunchTemplateData& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monitoring for the instance.</p>
     */
    inline const LaunchTemplatesMonitoring& GetMonitoring() const{ return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    inline void SetMonitoring(const LaunchTemplatesMonitoring& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }
    inline void SetMonitoring(LaunchTemplatesMonitoring&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::move(value); }
    inline ResponseLaunchTemplateData& WithMonitoring(const LaunchTemplatesMonitoring& value) { SetMonitoring(value); return *this;}
    inline ResponseLaunchTemplateData& WithMonitoring(LaunchTemplatesMonitoring&& value) { SetMonitoring(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement of the instance.</p>
     */
    inline const LaunchTemplatePlacement& GetPlacement() const{ return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    inline void SetPlacement(const LaunchTemplatePlacement& value) { m_placementHasBeenSet = true; m_placement = value; }
    inline void SetPlacement(LaunchTemplatePlacement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }
    inline ResponseLaunchTemplateData& WithPlacement(const LaunchTemplatePlacement& value) { SetPlacement(value); return *this;}
    inline ResponseLaunchTemplateData& WithPlacement(LaunchTemplatePlacement&& value) { SetPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the RAM disk, if applicable.</p>
     */
    inline const Aws::String& GetRamDiskId() const{ return m_ramDiskId; }
    inline bool RamDiskIdHasBeenSet() const { return m_ramDiskIdHasBeenSet; }
    inline void SetRamDiskId(const Aws::String& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = value; }
    inline void SetRamDiskId(Aws::String&& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = std::move(value); }
    inline void SetRamDiskId(const char* value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId.assign(value); }
    inline ResponseLaunchTemplateData& WithRamDiskId(const Aws::String& value) { SetRamDiskId(value); return *this;}
    inline ResponseLaunchTemplateData& WithRamDiskId(Aws::String&& value) { SetRamDiskId(std::move(value)); return *this;}
    inline ResponseLaunchTemplateData& WithRamDiskId(const char* value) { SetRamDiskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, indicates that the instance cannot be terminated
     * using the Amazon EC2 console, command line tool, or API.</p>
     */
    inline bool GetDisableApiTermination() const{ return m_disableApiTermination; }
    inline bool DisableApiTerminationHasBeenSet() const { return m_disableApiTerminationHasBeenSet; }
    inline void SetDisableApiTermination(bool value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }
    inline ResponseLaunchTemplateData& WithDisableApiTermination(bool value) { SetDisableApiTermination(value); return *this;}
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
    inline ResponseLaunchTemplateData& WithInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}
    inline ResponseLaunchTemplateData& WithInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { SetInstanceInitiatedShutdownBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user data for the instance. </p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }
    inline ResponseLaunchTemplateData& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}
    inline ResponseLaunchTemplateData& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}
    inline ResponseLaunchTemplateData& WithUserData(const char* value) { SetUserData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are applied to the resources that are created during instance
     * launch.</p>
     */
    inline const Aws::Vector<LaunchTemplateTagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<LaunchTemplateTagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<LaunchTemplateTagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline ResponseLaunchTemplateData& WithTagSpecifications(const Aws::Vector<LaunchTemplateTagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline ResponseLaunchTemplateData& WithTagSpecifications(Aws::Vector<LaunchTemplateTagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline ResponseLaunchTemplateData& AddTagSpecifications(const LaunchTemplateTagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline ResponseLaunchTemplateData& AddTagSpecifications(LaunchTemplateTagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Deprecated.</p>  <p>Amazon Elastic Graphics reached end of life on
     * January 8, 2024. For workloads that require graphics acceleration, we recommend
     * that you use Amazon EC2 G4ad, G4dn, or G5 instances.</p> 
     */
    inline const Aws::Vector<ElasticGpuSpecificationResponse>& GetElasticGpuSpecifications() const{ return m_elasticGpuSpecifications; }
    inline bool ElasticGpuSpecificationsHasBeenSet() const { return m_elasticGpuSpecificationsHasBeenSet; }
    inline void SetElasticGpuSpecifications(const Aws::Vector<ElasticGpuSpecificationResponse>& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications = value; }
    inline void SetElasticGpuSpecifications(Aws::Vector<ElasticGpuSpecificationResponse>&& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications = std::move(value); }
    inline ResponseLaunchTemplateData& WithElasticGpuSpecifications(const Aws::Vector<ElasticGpuSpecificationResponse>& value) { SetElasticGpuSpecifications(value); return *this;}
    inline ResponseLaunchTemplateData& WithElasticGpuSpecifications(Aws::Vector<ElasticGpuSpecificationResponse>&& value) { SetElasticGpuSpecifications(std::move(value)); return *this;}
    inline ResponseLaunchTemplateData& AddElasticGpuSpecifications(const ElasticGpuSpecificationResponse& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications.push_back(value); return *this; }
    inline ResponseLaunchTemplateData& AddElasticGpuSpecifications(ElasticGpuSpecificationResponse&& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     *  <p>Amazon Elastic Inference is no longer available.</p>  <p>An
     * elastic inference accelerator to associate with the instance. Elastic inference
     * accelerators are a resource you can attach to your Amazon EC2 instances to
     * accelerate your Deep Learning (DL) inference workloads.</p> <p>You cannot
     * specify accelerators from different generations in the same request.</p> 
     * <p>Starting April 15, 2023, Amazon Web Services will not onboard new customers
     * to Amazon Elastic Inference (EI), and will help current customers migrate their
     * workloads to options that offer better price and performance. After April 15,
     * 2023, new customers will not be able to launch instances with Amazon EI
     * accelerators in Amazon SageMaker, Amazon ECS, or Amazon EC2. However, customers
     * who have used Amazon EI at least once during the past 30-day period are
     * considered current customers and will be able to continue using the service.</p>
     * 
     */
    inline const Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse>& GetElasticInferenceAccelerators() const{ return m_elasticInferenceAccelerators; }
    inline bool ElasticInferenceAcceleratorsHasBeenSet() const { return m_elasticInferenceAcceleratorsHasBeenSet; }
    inline void SetElasticInferenceAccelerators(const Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse>& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators = value; }
    inline void SetElasticInferenceAccelerators(Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse>&& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators = std::move(value); }
    inline ResponseLaunchTemplateData& WithElasticInferenceAccelerators(const Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse>& value) { SetElasticInferenceAccelerators(value); return *this;}
    inline ResponseLaunchTemplateData& WithElasticInferenceAccelerators(Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse>&& value) { SetElasticInferenceAccelerators(std::move(value)); return *this;}
    inline ResponseLaunchTemplateData& AddElasticInferenceAccelerators(const LaunchTemplateElasticInferenceAcceleratorResponse& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators.push_back(value); return *this; }
    inline ResponseLaunchTemplateData& AddElasticInferenceAccelerators(LaunchTemplateElasticInferenceAcceleratorResponse&& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline ResponseLaunchTemplateData& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline ResponseLaunchTemplateData& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline ResponseLaunchTemplateData& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline ResponseLaunchTemplateData& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline ResponseLaunchTemplateData& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline ResponseLaunchTemplateData& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline ResponseLaunchTemplateData& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline ResponseLaunchTemplateData& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline ResponseLaunchTemplateData& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline ResponseLaunchTemplateData& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline const LaunchTemplateInstanceMarketOptions& GetInstanceMarketOptions() const{ return m_instanceMarketOptions; }
    inline bool InstanceMarketOptionsHasBeenSet() const { return m_instanceMarketOptionsHasBeenSet; }
    inline void SetInstanceMarketOptions(const LaunchTemplateInstanceMarketOptions& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = value; }
    inline void SetInstanceMarketOptions(LaunchTemplateInstanceMarketOptions&& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = std::move(value); }
    inline ResponseLaunchTemplateData& WithInstanceMarketOptions(const LaunchTemplateInstanceMarketOptions& value) { SetInstanceMarketOptions(value); return *this;}
    inline ResponseLaunchTemplateData& WithInstanceMarketOptions(LaunchTemplateInstanceMarketOptions&& value) { SetInstanceMarketOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credit option for CPU usage of the instance.</p>
     */
    inline const CreditSpecification& GetCreditSpecification() const{ return m_creditSpecification; }
    inline bool CreditSpecificationHasBeenSet() const { return m_creditSpecificationHasBeenSet; }
    inline void SetCreditSpecification(const CreditSpecification& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = value; }
    inline void SetCreditSpecification(CreditSpecification&& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = std::move(value); }
    inline ResponseLaunchTemplateData& WithCreditSpecification(const CreditSpecification& value) { SetCreditSpecification(value); return *this;}
    inline ResponseLaunchTemplateData& WithCreditSpecification(CreditSpecification&& value) { SetCreditSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimize
     * CPU options</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const LaunchTemplateCpuOptions& GetCpuOptions() const{ return m_cpuOptions; }
    inline bool CpuOptionsHasBeenSet() const { return m_cpuOptionsHasBeenSet; }
    inline void SetCpuOptions(const LaunchTemplateCpuOptions& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = value; }
    inline void SetCpuOptions(LaunchTemplateCpuOptions&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::move(value); }
    inline ResponseLaunchTemplateData& WithCpuOptions(const LaunchTemplateCpuOptions& value) { SetCpuOptions(value); return *this;}
    inline ResponseLaunchTemplateData& WithCpuOptions(LaunchTemplateCpuOptions&& value) { SetCpuOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline const LaunchTemplateCapacityReservationSpecificationResponse& GetCapacityReservationSpecification() const{ return m_capacityReservationSpecification; }
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }
    inline void SetCapacityReservationSpecification(const LaunchTemplateCapacityReservationSpecificationResponse& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = value; }
    inline void SetCapacityReservationSpecification(LaunchTemplateCapacityReservationSpecificationResponse&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::move(value); }
    inline ResponseLaunchTemplateData& WithCapacityReservationSpecification(const LaunchTemplateCapacityReservationSpecificationResponse& value) { SetCapacityReservationSpecification(value); return *this;}
    inline ResponseLaunchTemplateData& WithCapacityReservationSpecification(LaunchTemplateCapacityReservationSpecificationResponse&& value) { SetCapacityReservationSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license configurations.</p>
     */
    inline const Aws::Vector<LaunchTemplateLicenseConfiguration>& GetLicenseSpecifications() const{ return m_licenseSpecifications; }
    inline bool LicenseSpecificationsHasBeenSet() const { return m_licenseSpecificationsHasBeenSet; }
    inline void SetLicenseSpecifications(const Aws::Vector<LaunchTemplateLicenseConfiguration>& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = value; }
    inline void SetLicenseSpecifications(Aws::Vector<LaunchTemplateLicenseConfiguration>&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = std::move(value); }
    inline ResponseLaunchTemplateData& WithLicenseSpecifications(const Aws::Vector<LaunchTemplateLicenseConfiguration>& value) { SetLicenseSpecifications(value); return *this;}
    inline ResponseLaunchTemplateData& WithLicenseSpecifications(Aws::Vector<LaunchTemplateLicenseConfiguration>&& value) { SetLicenseSpecifications(std::move(value)); return *this;}
    inline ResponseLaunchTemplateData& AddLicenseSpecifications(const LaunchTemplateLicenseConfiguration& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(value); return *this; }
    inline ResponseLaunchTemplateData& AddLicenseSpecifications(LaunchTemplateLicenseConfiguration&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance is configured for hibernation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * your Amazon EC2 instance</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const LaunchTemplateHibernationOptions& GetHibernationOptions() const{ return m_hibernationOptions; }
    inline bool HibernationOptionsHasBeenSet() const { return m_hibernationOptionsHasBeenSet; }
    inline void SetHibernationOptions(const LaunchTemplateHibernationOptions& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = value; }
    inline void SetHibernationOptions(LaunchTemplateHibernationOptions&& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = std::move(value); }
    inline ResponseLaunchTemplateData& WithHibernationOptions(const LaunchTemplateHibernationOptions& value) { SetHibernationOptions(value); return *this;}
    inline ResponseLaunchTemplateData& WithHibernationOptions(LaunchTemplateHibernationOptions&& value) { SetHibernationOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const LaunchTemplateInstanceMetadataOptions& GetMetadataOptions() const{ return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    inline void SetMetadataOptions(const LaunchTemplateInstanceMetadataOptions& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = value; }
    inline void SetMetadataOptions(LaunchTemplateInstanceMetadataOptions&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::move(value); }
    inline ResponseLaunchTemplateData& WithMetadataOptions(const LaunchTemplateInstanceMetadataOptions& value) { SetMetadataOptions(value); return *this;}
    inline ResponseLaunchTemplateData& WithMetadataOptions(LaunchTemplateInstanceMetadataOptions&& value) { SetMetadataOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves.</p>
     */
    inline const LaunchTemplateEnclaveOptions& GetEnclaveOptions() const{ return m_enclaveOptions; }
    inline bool EnclaveOptionsHasBeenSet() const { return m_enclaveOptionsHasBeenSet; }
    inline void SetEnclaveOptions(const LaunchTemplateEnclaveOptions& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = value; }
    inline void SetEnclaveOptions(LaunchTemplateEnclaveOptions&& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = std::move(value); }
    inline ResponseLaunchTemplateData& WithEnclaveOptions(const LaunchTemplateEnclaveOptions& value) { SetEnclaveOptions(value); return *this;}
    inline ResponseLaunchTemplateData& WithEnclaveOptions(LaunchTemplateEnclaveOptions&& value) { SetEnclaveOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes.</p> <p>If you
     * specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceTypes</code>.</p>
     */
    inline const InstanceRequirements& GetInstanceRequirements() const{ return m_instanceRequirements; }
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
    inline void SetInstanceRequirements(const InstanceRequirements& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = value; }
    inline void SetInstanceRequirements(InstanceRequirements&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::move(value); }
    inline ResponseLaunchTemplateData& WithInstanceRequirements(const InstanceRequirements& value) { SetInstanceRequirements(value); return *this;}
    inline ResponseLaunchTemplateData& WithInstanceRequirements(InstanceRequirements&& value) { SetInstanceRequirements(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for the instance hostname.</p>
     */
    inline const LaunchTemplatePrivateDnsNameOptions& GetPrivateDnsNameOptions() const{ return m_privateDnsNameOptions; }
    inline bool PrivateDnsNameOptionsHasBeenSet() const { return m_privateDnsNameOptionsHasBeenSet; }
    inline void SetPrivateDnsNameOptions(const LaunchTemplatePrivateDnsNameOptions& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = value; }
    inline void SetPrivateDnsNameOptions(LaunchTemplatePrivateDnsNameOptions&& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = std::move(value); }
    inline ResponseLaunchTemplateData& WithPrivateDnsNameOptions(const LaunchTemplatePrivateDnsNameOptions& value) { SetPrivateDnsNameOptions(value); return *this;}
    inline ResponseLaunchTemplateData& WithPrivateDnsNameOptions(LaunchTemplatePrivateDnsNameOptions&& value) { SetPrivateDnsNameOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintenance options for your instance.</p>
     */
    inline const LaunchTemplateInstanceMaintenanceOptions& GetMaintenanceOptions() const{ return m_maintenanceOptions; }
    inline bool MaintenanceOptionsHasBeenSet() const { return m_maintenanceOptionsHasBeenSet; }
    inline void SetMaintenanceOptions(const LaunchTemplateInstanceMaintenanceOptions& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = value; }
    inline void SetMaintenanceOptions(LaunchTemplateInstanceMaintenanceOptions&& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = std::move(value); }
    inline ResponseLaunchTemplateData& WithMaintenanceOptions(const LaunchTemplateInstanceMaintenanceOptions& value) { SetMaintenanceOptions(value); return *this;}
    inline ResponseLaunchTemplateData& WithMaintenanceOptions(LaunchTemplateInstanceMaintenanceOptions&& value) { SetMaintenanceOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is enabled for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-stop-protection.html">Enable
     * stop protection for your instance</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool GetDisableApiStop() const{ return m_disableApiStop; }
    inline bool DisableApiStopHasBeenSet() const { return m_disableApiStopHasBeenSet; }
    inline void SetDisableApiStop(bool value) { m_disableApiStopHasBeenSet = true; m_disableApiStop = value; }
    inline ResponseLaunchTemplateData& WithDisableApiStop(bool value) { SetDisableApiStop(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that manages the launch template.</p>
     */
    inline const OperatorResponse& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const OperatorResponse& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(OperatorResponse&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline ResponseLaunchTemplateData& WithOperator(const OperatorResponse& value) { SetOperator(value); return *this;}
    inline ResponseLaunchTemplateData& WithOperator(OperatorResponse&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the launch template settings for network performance options for
     * your instance.</p>
     */
    inline const LaunchTemplateNetworkPerformanceOptions& GetNetworkPerformanceOptions() const{ return m_networkPerformanceOptions; }
    inline bool NetworkPerformanceOptionsHasBeenSet() const { return m_networkPerformanceOptionsHasBeenSet; }
    inline void SetNetworkPerformanceOptions(const LaunchTemplateNetworkPerformanceOptions& value) { m_networkPerformanceOptionsHasBeenSet = true; m_networkPerformanceOptions = value; }
    inline void SetNetworkPerformanceOptions(LaunchTemplateNetworkPerformanceOptions&& value) { m_networkPerformanceOptionsHasBeenSet = true; m_networkPerformanceOptions = std::move(value); }
    inline ResponseLaunchTemplateData& WithNetworkPerformanceOptions(const LaunchTemplateNetworkPerformanceOptions& value) { SetNetworkPerformanceOptions(value); return *this;}
    inline ResponseLaunchTemplateData& WithNetworkPerformanceOptions(LaunchTemplateNetworkPerformanceOptions&& value) { SetNetworkPerformanceOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;

    LaunchTemplateIamInstanceProfileSpecification m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    Aws::Vector<LaunchTemplateBlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    LaunchTemplatesMonitoring m_monitoring;
    bool m_monitoringHasBeenSet = false;

    LaunchTemplatePlacement m_placement;
    bool m_placementHasBeenSet = false;

    Aws::String m_ramDiskId;
    bool m_ramDiskIdHasBeenSet = false;

    bool m_disableApiTermination;
    bool m_disableApiTerminationHasBeenSet = false;

    ShutdownBehavior m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::Vector<LaunchTemplateTagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::Vector<ElasticGpuSpecificationResponse> m_elasticGpuSpecifications;
    bool m_elasticGpuSpecificationsHasBeenSet = false;

    Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse> m_elasticInferenceAccelerators;
    bool m_elasticInferenceAcceleratorsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    LaunchTemplateInstanceMarketOptions m_instanceMarketOptions;
    bool m_instanceMarketOptionsHasBeenSet = false;

    CreditSpecification m_creditSpecification;
    bool m_creditSpecificationHasBeenSet = false;

    LaunchTemplateCpuOptions m_cpuOptions;
    bool m_cpuOptionsHasBeenSet = false;

    LaunchTemplateCapacityReservationSpecificationResponse m_capacityReservationSpecification;
    bool m_capacityReservationSpecificationHasBeenSet = false;

    Aws::Vector<LaunchTemplateLicenseConfiguration> m_licenseSpecifications;
    bool m_licenseSpecificationsHasBeenSet = false;

    LaunchTemplateHibernationOptions m_hibernationOptions;
    bool m_hibernationOptionsHasBeenSet = false;

    LaunchTemplateInstanceMetadataOptions m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;

    LaunchTemplateEnclaveOptions m_enclaveOptions;
    bool m_enclaveOptionsHasBeenSet = false;

    InstanceRequirements m_instanceRequirements;
    bool m_instanceRequirementsHasBeenSet = false;

    LaunchTemplatePrivateDnsNameOptions m_privateDnsNameOptions;
    bool m_privateDnsNameOptionsHasBeenSet = false;

    LaunchTemplateInstanceMaintenanceOptions m_maintenanceOptions;
    bool m_maintenanceOptionsHasBeenSet = false;

    bool m_disableApiStop;
    bool m_disableApiStopHasBeenSet = false;

    OperatorResponse m_operator;
    bool m_operatorHasBeenSet = false;

    LaunchTemplateNetworkPerformanceOptions m_networkPerformanceOptions;
    bool m_networkPerformanceOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
