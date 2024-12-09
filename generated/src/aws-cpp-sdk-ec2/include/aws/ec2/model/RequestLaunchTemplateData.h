/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/LaunchTemplateIamInstanceProfileSpecificationRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/LaunchTemplatesMonitoringRequest.h>
#include <aws/ec2/model/LaunchTemplatePlacementRequest.h>
#include <aws/ec2/model/ShutdownBehavior.h>
#include <aws/ec2/model/LaunchTemplateInstanceMarketOptionsRequest.h>
#include <aws/ec2/model/CreditSpecificationRequest.h>
#include <aws/ec2/model/LaunchTemplateCpuOptionsRequest.h>
#include <aws/ec2/model/LaunchTemplateCapacityReservationSpecificationRequest.h>
#include <aws/ec2/model/LaunchTemplateHibernationOptionsRequest.h>
#include <aws/ec2/model/LaunchTemplateInstanceMetadataOptionsRequest.h>
#include <aws/ec2/model/LaunchTemplateEnclaveOptionsRequest.h>
#include <aws/ec2/model/InstanceRequirementsRequest.h>
#include <aws/ec2/model/LaunchTemplatePrivateDnsNameOptionsRequest.h>
#include <aws/ec2/model/LaunchTemplateInstanceMaintenanceOptionsRequest.h>
#include <aws/ec2/model/OperatorRequest.h>
#include <aws/ec2/model/LaunchTemplateNetworkPerformanceOptionsRequest.h>
#include <aws/ec2/model/LaunchTemplateBlockDeviceMappingRequest.h>
#include <aws/ec2/model/LaunchTemplateInstanceNetworkInterfaceSpecificationRequest.h>
#include <aws/ec2/model/LaunchTemplateTagSpecificationRequest.h>
#include <aws/ec2/model/ElasticGpuSpecification.h>
#include <aws/ec2/model/LaunchTemplateElasticInferenceAccelerator.h>
#include <aws/ec2/model/LaunchTemplateLicenseConfigurationRequest.h>
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
   * <p>The information to include in the launch template.</p>  <p>You must
   * specify at least one parameter for the launch template data.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestLaunchTemplateData">AWS
   * API Reference</a></p>
   */
  class RequestLaunchTemplateData
  {
  public:
    AWS_EC2_API RequestLaunchTemplateData();
    AWS_EC2_API RequestLaunchTemplateData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RequestLaunchTemplateData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the kernel.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon EC2 User Guide</i>.</p> 
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }
    inline RequestLaunchTemplateData& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}
    inline RequestLaunchTemplateData& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}
    inline RequestLaunchTemplateData& WithKernelId(const char* value) { SetKernelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal Amazon EBS I/O performance. This
     * optimization isn't available with all instance types. Additional usage charges
     * apply when using an EBS-optimized instance.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline RequestLaunchTemplateData& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of an IAM instance profile.</p>
     */
    inline const LaunchTemplateIamInstanceProfileSpecificationRequest& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    inline void SetIamInstanceProfile(const LaunchTemplateIamInstanceProfileSpecificationRequest& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }
    inline void SetIamInstanceProfile(LaunchTemplateIamInstanceProfileSpecificationRequest&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }
    inline RequestLaunchTemplateData& WithIamInstanceProfile(const LaunchTemplateIamInstanceProfileSpecificationRequest& value) { SetIamInstanceProfile(value); return *this;}
    inline RequestLaunchTemplateData& WithIamInstanceProfile(LaunchTemplateIamInstanceProfileSpecificationRequest&& value) { SetIamInstanceProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block device mapping.</p>
     */
    inline const Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    inline void SetBlockDeviceMappings(const Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }
    inline void SetBlockDeviceMappings(Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }
    inline RequestLaunchTemplateData& WithBlockDeviceMappings(const Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>& value) { SetBlockDeviceMappings(value); return *this;}
    inline RequestLaunchTemplateData& WithBlockDeviceMappings(Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}
    inline RequestLaunchTemplateData& AddBlockDeviceMappings(const LaunchTemplateBlockDeviceMappingRequest& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }
    inline RequestLaunchTemplateData& AddBlockDeviceMappings(LaunchTemplateBlockDeviceMappingRequest&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network interfaces for the instance.</p>
     */
    inline const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>& GetNetworkInterfaces() const{ return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    inline void SetNetworkInterfaces(const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }
    inline void SetNetworkInterfaces(Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }
    inline RequestLaunchTemplateData& WithNetworkInterfaces(const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>& value) { SetNetworkInterfaces(value); return *this;}
    inline RequestLaunchTemplateData& WithNetworkInterfaces(Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}
    inline RequestLaunchTemplateData& AddNetworkInterfaces(const LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }
    inline RequestLaunchTemplateData& AddNetworkInterfaces(LaunchTemplateInstanceNetworkInterfaceSpecificationRequest&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI in the format <code>ami-0ac394d6a3example</code>.</p>
     * <p>Alternatively, you can specify a Systems Manager parameter, using one of the
     * following formats. The Systems Manager parameter will resolve to an AMI ID on
     * launch.</p> <p>To reference a public parameter:</p> <ul> <li> <p>
     * <code>resolve:ssm:<i>public-parameter</i> </code> </p> </li> </ul> <p>To
     * reference a parameter stored in the same account:</p> <ul> <li> <p>
     * <code>resolve:ssm:<i>parameter-name</i> </code> </p> </li> <li> <p>
     * <code>resolve:ssm:<i>parameter-name:version-number</i> </code> </p> </li> <li>
     * <p> <code>resolve:ssm:<i>parameter-name:label</i> </code> </p> </li> </ul> <p>To
     * reference a parameter shared from another Amazon Web Services account:</p> <ul>
     * <li> <p> <code>resolve:ssm:<i>parameter-ARN</i> </code> </p> </li> <li> <p>
     * <code>resolve:ssm:<i>parameter-ARN:version-number</i> </code> </p> </li> <li>
     * <p> <code>resolve:ssm:<i>parameter-ARN:label</i> </code> </p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/create-launch-template.html#use-an-ssm-parameter-instead-of-an-ami-id">Use
     * a Systems Manager parameter instead of an AMI ID</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>  <p>If the launch template will be used for an EC2 Fleet or
     * Spot Fleet, note the following:</p> <ul> <li> <p>Only EC2 Fleets of type
     * <code>instant</code> support specifying a Systems Manager parameter.</p> </li>
     * <li> <p>For EC2 Fleets of type <code>maintain</code> or <code>request</code>, or
     * for Spot Fleets, you must specify the AMI ID.</p> </li> </ul> 
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline RequestLaunchTemplateData& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline RequestLaunchTemplateData& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline RequestLaunchTemplateData& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Amazon
     * EC2 instance types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>If you
     * specify <code>InstanceType</code>, you can't specify
     * <code>InstanceRequirements</code>.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline RequestLaunchTemplateData& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline RequestLaunchTemplateData& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
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
    inline RequestLaunchTemplateData& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline RequestLaunchTemplateData& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline RequestLaunchTemplateData& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monitoring for the instance.</p>
     */
    inline const LaunchTemplatesMonitoringRequest& GetMonitoring() const{ return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    inline void SetMonitoring(const LaunchTemplatesMonitoringRequest& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }
    inline void SetMonitoring(LaunchTemplatesMonitoringRequest&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::move(value); }
    inline RequestLaunchTemplateData& WithMonitoring(const LaunchTemplatesMonitoringRequest& value) { SetMonitoring(value); return *this;}
    inline RequestLaunchTemplateData& WithMonitoring(LaunchTemplatesMonitoringRequest&& value) { SetMonitoring(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement for the instance.</p>
     */
    inline const LaunchTemplatePlacementRequest& GetPlacement() const{ return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    inline void SetPlacement(const LaunchTemplatePlacementRequest& value) { m_placementHasBeenSet = true; m_placement = value; }
    inline void SetPlacement(LaunchTemplatePlacementRequest&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }
    inline RequestLaunchTemplateData& WithPlacement(const LaunchTemplatePlacementRequest& value) { SetPlacement(value); return *this;}
    inline RequestLaunchTemplateData& WithPlacement(LaunchTemplatePlacementRequest&& value) { SetPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the RAM disk.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon EC2 User Guide</i>.</p> 
     */
    inline const Aws::String& GetRamDiskId() const{ return m_ramDiskId; }
    inline bool RamDiskIdHasBeenSet() const { return m_ramDiskIdHasBeenSet; }
    inline void SetRamDiskId(const Aws::String& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = value; }
    inline void SetRamDiskId(Aws::String&& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = std::move(value); }
    inline void SetRamDiskId(const char* value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId.assign(value); }
    inline RequestLaunchTemplateData& WithRamDiskId(const Aws::String& value) { SetRamDiskId(value); return *this;}
    inline RequestLaunchTemplateData& WithRamDiskId(Aws::String&& value) { SetRamDiskId(std::move(value)); return *this;}
    inline RequestLaunchTemplateData& WithRamDiskId(const char* value) { SetRamDiskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API; otherwise, you can. To
     * change this attribute after launch, use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyInstanceAttribute.html">ModifyInstanceAttribute</a>.
     * Alternatively, if you set <code>InstanceInitiatedShutdownBehavior</code> to
     * <code>terminate</code>, you can terminate the instance by running the shutdown
     * command from the instance.</p>
     */
    inline bool GetDisableApiTermination() const{ return m_disableApiTermination; }
    inline bool DisableApiTerminationHasBeenSet() const { return m_disableApiTerminationHasBeenSet; }
    inline void SetDisableApiTermination(bool value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }
    inline RequestLaunchTemplateData& WithDisableApiTermination(bool value) { SetDisableApiTermination(value); return *this;}
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
    inline RequestLaunchTemplateData& WithInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}
    inline RequestLaunchTemplateData& WithInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { SetInstanceInitiatedShutdownBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user data to make available to the instance. You must provide
     * base64-encoded text. User data is limited to 16 KB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Run
     * commands on your Amazon EC2 instance at launch</a> in the <i>Amazon EC2 User
     * Guide</i>.</p> <p>If you are creating the launch template for use with Batch,
     * the user data must be provided in the <a
     * href="https://cloudinit.readthedocs.io/en/latest/topics/format.html#mime-multi-part-archive">MIME
     * multi-part archive format</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Amazon
     * EC2 user data in launch templates</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }
    inline RequestLaunchTemplateData& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}
    inline RequestLaunchTemplateData& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}
    inline RequestLaunchTemplateData& WithUserData(const char* value) { SetUserData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the resources that are created during instance launch.
     * These tags are not applied to the launch template.</p>
     */
    inline const Aws::Vector<LaunchTemplateTagSpecificationRequest>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<LaunchTemplateTagSpecificationRequest>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<LaunchTemplateTagSpecificationRequest>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline RequestLaunchTemplateData& WithTagSpecifications(const Aws::Vector<LaunchTemplateTagSpecificationRequest>& value) { SetTagSpecifications(value); return *this;}
    inline RequestLaunchTemplateData& WithTagSpecifications(Aws::Vector<LaunchTemplateTagSpecificationRequest>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline RequestLaunchTemplateData& AddTagSpecifications(const LaunchTemplateTagSpecificationRequest& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline RequestLaunchTemplateData& AddTagSpecifications(LaunchTemplateTagSpecificationRequest&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Deprecated.</p>  <p>Amazon Elastic Graphics reached end of life on
     * January 8, 2024. For workloads that require graphics acceleration, we recommend
     * that you use Amazon EC2 G4ad, G4dn, or G5 instances.</p> 
     */
    inline const Aws::Vector<ElasticGpuSpecification>& GetElasticGpuSpecifications() const{ return m_elasticGpuSpecifications; }
    inline bool ElasticGpuSpecificationsHasBeenSet() const { return m_elasticGpuSpecificationsHasBeenSet; }
    inline void SetElasticGpuSpecifications(const Aws::Vector<ElasticGpuSpecification>& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications = value; }
    inline void SetElasticGpuSpecifications(Aws::Vector<ElasticGpuSpecification>&& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications = std::move(value); }
    inline RequestLaunchTemplateData& WithElasticGpuSpecifications(const Aws::Vector<ElasticGpuSpecification>& value) { SetElasticGpuSpecifications(value); return *this;}
    inline RequestLaunchTemplateData& WithElasticGpuSpecifications(Aws::Vector<ElasticGpuSpecification>&& value) { SetElasticGpuSpecifications(std::move(value)); return *this;}
    inline RequestLaunchTemplateData& AddElasticGpuSpecifications(const ElasticGpuSpecification& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications.push_back(value); return *this; }
    inline RequestLaunchTemplateData& AddElasticGpuSpecifications(ElasticGpuSpecification&& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<LaunchTemplateElasticInferenceAccelerator>& GetElasticInferenceAccelerators() const{ return m_elasticInferenceAccelerators; }
    inline bool ElasticInferenceAcceleratorsHasBeenSet() const { return m_elasticInferenceAcceleratorsHasBeenSet; }
    inline void SetElasticInferenceAccelerators(const Aws::Vector<LaunchTemplateElasticInferenceAccelerator>& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators = value; }
    inline void SetElasticInferenceAccelerators(Aws::Vector<LaunchTemplateElasticInferenceAccelerator>&& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators = std::move(value); }
    inline RequestLaunchTemplateData& WithElasticInferenceAccelerators(const Aws::Vector<LaunchTemplateElasticInferenceAccelerator>& value) { SetElasticInferenceAccelerators(value); return *this;}
    inline RequestLaunchTemplateData& WithElasticInferenceAccelerators(Aws::Vector<LaunchTemplateElasticInferenceAccelerator>&& value) { SetElasticInferenceAccelerators(std::move(value)); return *this;}
    inline RequestLaunchTemplateData& AddElasticInferenceAccelerators(const LaunchTemplateElasticInferenceAccelerator& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators.push_back(value); return *this; }
    inline RequestLaunchTemplateData& AddElasticInferenceAccelerators(LaunchTemplateElasticInferenceAccelerator&& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups.</p> <p>If you specify a network interface,
     * you must specify any security groups as part of the network interface instead of
     * using this parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline RequestLaunchTemplateData& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline RequestLaunchTemplateData& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline RequestLaunchTemplateData& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline RequestLaunchTemplateData& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline RequestLaunchTemplateData& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the security groups. For a nondefault VPC, you must use security
     * group IDs instead.</p> <p>If you specify a network interface, you must specify
     * any security groups as part of the network interface instead of using this
     * parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline RequestLaunchTemplateData& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline RequestLaunchTemplateData& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline RequestLaunchTemplateData& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline RequestLaunchTemplateData& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline RequestLaunchTemplateData& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline const LaunchTemplateInstanceMarketOptionsRequest& GetInstanceMarketOptions() const{ return m_instanceMarketOptions; }
    inline bool InstanceMarketOptionsHasBeenSet() const { return m_instanceMarketOptionsHasBeenSet; }
    inline void SetInstanceMarketOptions(const LaunchTemplateInstanceMarketOptionsRequest& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = value; }
    inline void SetInstanceMarketOptions(LaunchTemplateInstanceMarketOptionsRequest&& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = std::move(value); }
    inline RequestLaunchTemplateData& WithInstanceMarketOptions(const LaunchTemplateInstanceMarketOptionsRequest& value) { SetInstanceMarketOptions(value); return *this;}
    inline RequestLaunchTemplateData& WithInstanceMarketOptions(LaunchTemplateInstanceMarketOptionsRequest&& value) { SetInstanceMarketOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credit option for CPU usage of the instance. Valid only for T
     * instances.</p>
     */
    inline const CreditSpecificationRequest& GetCreditSpecification() const{ return m_creditSpecification; }
    inline bool CreditSpecificationHasBeenSet() const { return m_creditSpecificationHasBeenSet; }
    inline void SetCreditSpecification(const CreditSpecificationRequest& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = value; }
    inline void SetCreditSpecification(CreditSpecificationRequest&& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = std::move(value); }
    inline RequestLaunchTemplateData& WithCreditSpecification(const CreditSpecificationRequest& value) { SetCreditSpecification(value); return *this;}
    inline RequestLaunchTemplateData& WithCreditSpecification(CreditSpecificationRequest&& value) { SetCreditSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimize
     * CPU options</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const LaunchTemplateCpuOptionsRequest& GetCpuOptions() const{ return m_cpuOptions; }
    inline bool CpuOptionsHasBeenSet() const { return m_cpuOptionsHasBeenSet; }
    inline void SetCpuOptions(const LaunchTemplateCpuOptionsRequest& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = value; }
    inline void SetCpuOptions(LaunchTemplateCpuOptionsRequest&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::move(value); }
    inline RequestLaunchTemplateData& WithCpuOptions(const LaunchTemplateCpuOptionsRequest& value) { SetCpuOptions(value); return *this;}
    inline RequestLaunchTemplateData& WithCpuOptions(LaunchTemplateCpuOptionsRequest&& value) { SetCpuOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Capacity Reservation targeting option. If you do not specify this
     * parameter, the instance's Capacity Reservation preference defaults to
     * <code>open</code>, which enables it to run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone).</p>
     */
    inline const LaunchTemplateCapacityReservationSpecificationRequest& GetCapacityReservationSpecification() const{ return m_capacityReservationSpecification; }
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }
    inline void SetCapacityReservationSpecification(const LaunchTemplateCapacityReservationSpecificationRequest& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = value; }
    inline void SetCapacityReservationSpecification(LaunchTemplateCapacityReservationSpecificationRequest&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::move(value); }
    inline RequestLaunchTemplateData& WithCapacityReservationSpecification(const LaunchTemplateCapacityReservationSpecificationRequest& value) { SetCapacityReservationSpecification(value); return *this;}
    inline RequestLaunchTemplateData& WithCapacityReservationSpecification(LaunchTemplateCapacityReservationSpecificationRequest&& value) { SetCapacityReservationSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license configurations.</p>
     */
    inline const Aws::Vector<LaunchTemplateLicenseConfigurationRequest>& GetLicenseSpecifications() const{ return m_licenseSpecifications; }
    inline bool LicenseSpecificationsHasBeenSet() const { return m_licenseSpecificationsHasBeenSet; }
    inline void SetLicenseSpecifications(const Aws::Vector<LaunchTemplateLicenseConfigurationRequest>& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = value; }
    inline void SetLicenseSpecifications(Aws::Vector<LaunchTemplateLicenseConfigurationRequest>&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = std::move(value); }
    inline RequestLaunchTemplateData& WithLicenseSpecifications(const Aws::Vector<LaunchTemplateLicenseConfigurationRequest>& value) { SetLicenseSpecifications(value); return *this;}
    inline RequestLaunchTemplateData& WithLicenseSpecifications(Aws::Vector<LaunchTemplateLicenseConfigurationRequest>&& value) { SetLicenseSpecifications(std::move(value)); return *this;}
    inline RequestLaunchTemplateData& AddLicenseSpecifications(const LaunchTemplateLicenseConfigurationRequest& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(value); return *this; }
    inline RequestLaunchTemplateData& AddLicenseSpecifications(LaunchTemplateLicenseConfigurationRequest&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance is enabled for hibernation. This parameter is
     * valid only if the instance meets the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/hibernating-prerequisites.html">hibernation
     * prerequisites</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * your Amazon EC2 instance</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const LaunchTemplateHibernationOptionsRequest& GetHibernationOptions() const{ return m_hibernationOptions; }
    inline bool HibernationOptionsHasBeenSet() const { return m_hibernationOptionsHasBeenSet; }
    inline void SetHibernationOptions(const LaunchTemplateHibernationOptionsRequest& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = value; }
    inline void SetHibernationOptions(LaunchTemplateHibernationOptionsRequest&& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = std::move(value); }
    inline RequestLaunchTemplateData& WithHibernationOptions(const LaunchTemplateHibernationOptionsRequest& value) { SetHibernationOptions(value); return *this;}
    inline RequestLaunchTemplateData& WithHibernationOptions(LaunchTemplateHibernationOptionsRequest&& value) { SetHibernationOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const LaunchTemplateInstanceMetadataOptionsRequest& GetMetadataOptions() const{ return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    inline void SetMetadataOptions(const LaunchTemplateInstanceMetadataOptionsRequest& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = value; }
    inline void SetMetadataOptions(LaunchTemplateInstanceMetadataOptionsRequest&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::move(value); }
    inline RequestLaunchTemplateData& WithMetadataOptions(const LaunchTemplateInstanceMetadataOptionsRequest& value) { SetMetadataOptions(value); return *this;}
    inline RequestLaunchTemplateData& WithMetadataOptions(LaunchTemplateInstanceMetadataOptionsRequest&& value) { SetMetadataOptions(std::move(value)); return *this;}
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
    inline const LaunchTemplateEnclaveOptionsRequest& GetEnclaveOptions() const{ return m_enclaveOptions; }
    inline bool EnclaveOptionsHasBeenSet() const { return m_enclaveOptionsHasBeenSet; }
    inline void SetEnclaveOptions(const LaunchTemplateEnclaveOptionsRequest& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = value; }
    inline void SetEnclaveOptions(LaunchTemplateEnclaveOptionsRequest&& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = std::move(value); }
    inline RequestLaunchTemplateData& WithEnclaveOptions(const LaunchTemplateEnclaveOptionsRequest& value) { SetEnclaveOptions(value); return *this;}
    inline RequestLaunchTemplateData& WithEnclaveOptions(LaunchTemplateEnclaveOptionsRequest&& value) { SetEnclaveOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes.</p> <p>You must
     * specify <code>VCpuCount</code> and <code>MemoryMiB</code>. All other attributes
     * are optional. Any unspecified optional attribute is set to its default.</p>
     * <p>When you specify multiple attributes, you get instance types that satisfy all
     * of the specified attributes. If you specify multiple values for an attribute,
     * you get instance types that satisfy any of the specified values.</p> <p>To limit
     * the list of instance types from which Amazon EC2 can identify matching instance
     * types, you can use one of the following parameters, but not both in the same
     * request:</p> <ul> <li> <p> <code>AllowedInstanceTypes</code> - The instance
     * types to include in the list. All other instance types are ignored, even if they
     * match your specified attributes.</p> </li> <li> <p>
     * <code>ExcludedInstanceTypes</code> - The instance types to exclude from the
     * list, even if they match your specified attributes.</p> </li> </ul>  <p>If
     * you specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p> <p>Attribute-based instance type selection is
     * only supported when using Auto Scaling groups, EC2 Fleet, and Spot Fleet to
     * launch instances. If you plan to use the launch template in the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-instance-wizard.html">launch
     * instance wizard</a>, or with the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * API or <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-ec2-instance.html">AWS::EC2::Instance</a>
     * Amazon Web Services CloudFormation resource, you can't specify
     * <code>InstanceRequirements</code>.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-attribute-based-instance-type-selection.html">Specify
     * attributes for instance type selection for EC2 Fleet or Spot Fleet</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-placement-score.html">Spot
     * placement score</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const InstanceRequirementsRequest& GetInstanceRequirements() const{ return m_instanceRequirements; }
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
    inline void SetInstanceRequirements(const InstanceRequirementsRequest& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = value; }
    inline void SetInstanceRequirements(InstanceRequirementsRequest&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::move(value); }
    inline RequestLaunchTemplateData& WithInstanceRequirements(const InstanceRequirementsRequest& value) { SetInstanceRequirements(value); return *this;}
    inline RequestLaunchTemplateData& WithInstanceRequirements(InstanceRequirementsRequest&& value) { SetInstanceRequirements(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for the instance hostname. The default values are inherited from
     * the subnet.</p>
     */
    inline const LaunchTemplatePrivateDnsNameOptionsRequest& GetPrivateDnsNameOptions() const{ return m_privateDnsNameOptions; }
    inline bool PrivateDnsNameOptionsHasBeenSet() const { return m_privateDnsNameOptionsHasBeenSet; }
    inline void SetPrivateDnsNameOptions(const LaunchTemplatePrivateDnsNameOptionsRequest& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = value; }
    inline void SetPrivateDnsNameOptions(LaunchTemplatePrivateDnsNameOptionsRequest&& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = std::move(value); }
    inline RequestLaunchTemplateData& WithPrivateDnsNameOptions(const LaunchTemplatePrivateDnsNameOptionsRequest& value) { SetPrivateDnsNameOptions(value); return *this;}
    inline RequestLaunchTemplateData& WithPrivateDnsNameOptions(LaunchTemplatePrivateDnsNameOptionsRequest&& value) { SetPrivateDnsNameOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintenance options for the instance.</p>
     */
    inline const LaunchTemplateInstanceMaintenanceOptionsRequest& GetMaintenanceOptions() const{ return m_maintenanceOptions; }
    inline bool MaintenanceOptionsHasBeenSet() const { return m_maintenanceOptionsHasBeenSet; }
    inline void SetMaintenanceOptions(const LaunchTemplateInstanceMaintenanceOptionsRequest& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = value; }
    inline void SetMaintenanceOptions(LaunchTemplateInstanceMaintenanceOptionsRequest&& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = std::move(value); }
    inline RequestLaunchTemplateData& WithMaintenanceOptions(const LaunchTemplateInstanceMaintenanceOptionsRequest& value) { SetMaintenanceOptions(value); return *this;}
    inline RequestLaunchTemplateData& WithMaintenanceOptions(LaunchTemplateInstanceMaintenanceOptionsRequest&& value) { SetMaintenanceOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable the instance for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-stop-protection.html">Enable
     * stop protection for your instance</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool GetDisableApiStop() const{ return m_disableApiStop; }
    inline bool DisableApiStopHasBeenSet() const { return m_disableApiStopHasBeenSet; }
    inline void SetDisableApiStop(bool value) { m_disableApiStopHasBeenSet = true; m_disableApiStop = value; }
    inline RequestLaunchTemplateData& WithDisableApiStop(bool value) { SetDisableApiStop(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that manages the launch template.</p>
     */
    inline const OperatorRequest& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const OperatorRequest& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(OperatorRequest&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline RequestLaunchTemplateData& WithOperator(const OperatorRequest& value) { SetOperator(value); return *this;}
    inline RequestLaunchTemplateData& WithOperator(OperatorRequest&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains launch template settings to boost network performance for the type
     * of workload that runs on your instance.</p>
     */
    inline const LaunchTemplateNetworkPerformanceOptionsRequest& GetNetworkPerformanceOptions() const{ return m_networkPerformanceOptions; }
    inline bool NetworkPerformanceOptionsHasBeenSet() const { return m_networkPerformanceOptionsHasBeenSet; }
    inline void SetNetworkPerformanceOptions(const LaunchTemplateNetworkPerformanceOptionsRequest& value) { m_networkPerformanceOptionsHasBeenSet = true; m_networkPerformanceOptions = value; }
    inline void SetNetworkPerformanceOptions(LaunchTemplateNetworkPerformanceOptionsRequest&& value) { m_networkPerformanceOptionsHasBeenSet = true; m_networkPerformanceOptions = std::move(value); }
    inline RequestLaunchTemplateData& WithNetworkPerformanceOptions(const LaunchTemplateNetworkPerformanceOptionsRequest& value) { SetNetworkPerformanceOptions(value); return *this;}
    inline RequestLaunchTemplateData& WithNetworkPerformanceOptions(LaunchTemplateNetworkPerformanceOptionsRequest&& value) { SetNetworkPerformanceOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;

    LaunchTemplateIamInstanceProfileSpecificationRequest m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    Aws::Vector<LaunchTemplateBlockDeviceMappingRequest> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    LaunchTemplatesMonitoringRequest m_monitoring;
    bool m_monitoringHasBeenSet = false;

    LaunchTemplatePlacementRequest m_placement;
    bool m_placementHasBeenSet = false;

    Aws::String m_ramDiskId;
    bool m_ramDiskIdHasBeenSet = false;

    bool m_disableApiTermination;
    bool m_disableApiTerminationHasBeenSet = false;

    ShutdownBehavior m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::Vector<LaunchTemplateTagSpecificationRequest> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::Vector<ElasticGpuSpecification> m_elasticGpuSpecifications;
    bool m_elasticGpuSpecificationsHasBeenSet = false;

    Aws::Vector<LaunchTemplateElasticInferenceAccelerator> m_elasticInferenceAccelerators;
    bool m_elasticInferenceAcceleratorsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    LaunchTemplateInstanceMarketOptionsRequest m_instanceMarketOptions;
    bool m_instanceMarketOptionsHasBeenSet = false;

    CreditSpecificationRequest m_creditSpecification;
    bool m_creditSpecificationHasBeenSet = false;

    LaunchTemplateCpuOptionsRequest m_cpuOptions;
    bool m_cpuOptionsHasBeenSet = false;

    LaunchTemplateCapacityReservationSpecificationRequest m_capacityReservationSpecification;
    bool m_capacityReservationSpecificationHasBeenSet = false;

    Aws::Vector<LaunchTemplateLicenseConfigurationRequest> m_licenseSpecifications;
    bool m_licenseSpecificationsHasBeenSet = false;

    LaunchTemplateHibernationOptionsRequest m_hibernationOptions;
    bool m_hibernationOptionsHasBeenSet = false;

    LaunchTemplateInstanceMetadataOptionsRequest m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;

    LaunchTemplateEnclaveOptionsRequest m_enclaveOptions;
    bool m_enclaveOptionsHasBeenSet = false;

    InstanceRequirementsRequest m_instanceRequirements;
    bool m_instanceRequirementsHasBeenSet = false;

    LaunchTemplatePrivateDnsNameOptionsRequest m_privateDnsNameOptions;
    bool m_privateDnsNameOptionsHasBeenSet = false;

    LaunchTemplateInstanceMaintenanceOptionsRequest m_maintenanceOptions;
    bool m_maintenanceOptionsHasBeenSet = false;

    bool m_disableApiStop;
    bool m_disableApiStopHasBeenSet = false;

    OperatorRequest m_operator;
    bool m_operatorHasBeenSet = false;

    LaunchTemplateNetworkPerformanceOptionsRequest m_networkPerformanceOptions;
    bool m_networkPerformanceOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
