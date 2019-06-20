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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/Architecture.h>
#include <aws/opsworks/model/AutoScalingType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/ReportedOs.h>
#include <aws/opsworks/model/RootDeviceType.h>
#include <aws/opsworks/model/VirtualizationType.h>
#include <aws/opsworks/model/BlockDeviceMapping.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Instance">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API Instance
  {
  public:
    Instance();
    Instance(Aws::Utils::Json::JsonView jsonValue);
    Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The agent version. This parameter is set to <code>INHERIT</code> if the
     * instance inherits the default stack setting or to a a version number for a fixed
     * agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The agent version. This parameter is set to <code>INHERIT</code> if the
     * instance inherits the default stack setting or to a a version number for a fixed
     * agent version.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>The agent version. This parameter is set to <code>INHERIT</code> if the
     * instance inherits the default stack setting or to a a version number for a fixed
     * agent version.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The agent version. This parameter is set to <code>INHERIT</code> if the
     * instance inherits the default stack setting or to a a version number for a fixed
     * agent version.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>The agent version. This parameter is set to <code>INHERIT</code> if the
     * instance inherits the default stack setting or to a a version number for a fixed
     * agent version.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The agent version. This parameter is set to <code>INHERIT</code> if the
     * instance inherits the default stack setting or to a a version number for a fixed
     * agent version.</p>
     */
    inline Instance& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The agent version. This parameter is set to <code>INHERIT</code> if the
     * instance inherits the default stack setting or to a a version number for a fixed
     * agent version.</p>
     */
    inline Instance& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The agent version. This parameter is set to <code>INHERIT</code> if the
     * instance inherits the default stack setting or to a a version number for a fixed
     * agent version.</p>
     */
    inline Instance& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>A custom AMI ID to be used to create the instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Instances</a>
     * </p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }

    /**
     * <p>A custom AMI ID to be used to create the instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Instances</a>
     * </p>
     */
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }

    /**
     * <p>A custom AMI ID to be used to create the instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Instances</a>
     * </p>
     */
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }

    /**
     * <p>A custom AMI ID to be used to create the instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Instances</a>
     * </p>
     */
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }

    /**
     * <p>A custom AMI ID to be used to create the instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Instances</a>
     * </p>
     */
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }

    /**
     * <p>A custom AMI ID to be used to create the instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Instances</a>
     * </p>
     */
    inline Instance& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}

    /**
     * <p>A custom AMI ID to be used to create the instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Instances</a>
     * </p>
     */
    inline Instance& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}

    /**
     * <p>A custom AMI ID to be used to create the instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Instances</a>
     * </p>
     */
    inline Instance& WithAmiId(const char* value) { SetAmiId(value); return *this;}


    /**
     * <p>The instance architecture: "i386" or "x86_64".</p>
     */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The instance architecture: "i386" or "x86_64".</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The instance architecture: "i386" or "x86_64".</p>
     */
    inline void SetArchitecture(const Architecture& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The instance architecture: "i386" or "x86_64".</p>
     */
    inline void SetArchitecture(Architecture&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The instance architecture: "i386" or "x86_64".</p>
     */
    inline Instance& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The instance architecture: "i386" or "x86_64".</p>
     */
    inline Instance& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}


    /**
     * <p>The instance's Amazon Resource Number (ARN).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The instance's Amazon Resource Number (ARN).</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The instance's Amazon Resource Number (ARN).</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The instance's Amazon Resource Number (ARN).</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The instance's Amazon Resource Number (ARN).</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The instance's Amazon Resource Number (ARN).</p>
     */
    inline Instance& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The instance's Amazon Resource Number (ARN).</p>
     */
    inline Instance& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The instance's Amazon Resource Number (ARN).</p>
     */
    inline Instance& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>For load-based or time-based instances, the type.</p>
     */
    inline const AutoScalingType& GetAutoScalingType() const{ return m_autoScalingType; }

    /**
     * <p>For load-based or time-based instances, the type.</p>
     */
    inline bool AutoScalingTypeHasBeenSet() const { return m_autoScalingTypeHasBeenSet; }

    /**
     * <p>For load-based or time-based instances, the type.</p>
     */
    inline void SetAutoScalingType(const AutoScalingType& value) { m_autoScalingTypeHasBeenSet = true; m_autoScalingType = value; }

    /**
     * <p>For load-based or time-based instances, the type.</p>
     */
    inline void SetAutoScalingType(AutoScalingType&& value) { m_autoScalingTypeHasBeenSet = true; m_autoScalingType = std::move(value); }

    /**
     * <p>For load-based or time-based instances, the type.</p>
     */
    inline Instance& WithAutoScalingType(const AutoScalingType& value) { SetAutoScalingType(value); return *this;}

    /**
     * <p>For load-based or time-based instances, the type.</p>
     */
    inline Instance& WithAutoScalingType(AutoScalingType&& value) { SetAutoScalingType(std::move(value)); return *this;}


    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Instance& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Instance& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Instance& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block device mappings.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block device mappings.</p>
     */
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block device mappings.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block device mappings.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block device mappings.</p>
     */
    inline Instance& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block device mappings.</p>
     */
    inline Instance& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block device mappings.</p>
     */
    inline Instance& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block device mappings.</p>
     */
    inline Instance& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>The time that the instance was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time that the instance was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time that the instance was created.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time that the instance was created.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time that the instance was created.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>The time that the instance was created.</p>
     */
    inline Instance& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time that the instance was created.</p>
     */
    inline Instance& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>The time that the instance was created.</p>
     */
    inline Instance& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * <p>Whether this is an Amazon EBS-optimized instance.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Whether this is an Amazon EBS-optimized instance.</p>
     */
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }

    /**
     * <p>Whether this is an Amazon EBS-optimized instance.</p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Whether this is an Amazon EBS-optimized instance.</p>
     */
    inline Instance& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>The ID of the associated Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const{ return m_ec2InstanceId; }

    /**
     * <p>The ID of the associated Amazon EC2 instance.</p>
     */
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }

    /**
     * <p>The ID of the associated Amazon EC2 instance.</p>
     */
    inline void SetEc2InstanceId(const Aws::String& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = value; }

    /**
     * <p>The ID of the associated Amazon EC2 instance.</p>
     */
    inline void SetEc2InstanceId(Aws::String&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::move(value); }

    /**
     * <p>The ID of the associated Amazon EC2 instance.</p>
     */
    inline void SetEc2InstanceId(const char* value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId.assign(value); }

    /**
     * <p>The ID of the associated Amazon EC2 instance.</p>
     */
    inline Instance& WithEc2InstanceId(const Aws::String& value) { SetEc2InstanceId(value); return *this;}

    /**
     * <p>The ID of the associated Amazon EC2 instance.</p>
     */
    inline Instance& WithEc2InstanceId(Aws::String&& value) { SetEc2InstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the associated Amazon EC2 instance.</p>
     */
    inline Instance& WithEc2InstanceId(const char* value) { SetEc2InstanceId(value); return *this;}


    /**
     * <p>For container instances, the Amazon ECS cluster's ARN.</p>
     */
    inline const Aws::String& GetEcsClusterArn() const{ return m_ecsClusterArn; }

    /**
     * <p>For container instances, the Amazon ECS cluster's ARN.</p>
     */
    inline bool EcsClusterArnHasBeenSet() const { return m_ecsClusterArnHasBeenSet; }

    /**
     * <p>For container instances, the Amazon ECS cluster's ARN.</p>
     */
    inline void SetEcsClusterArn(const Aws::String& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = value; }

    /**
     * <p>For container instances, the Amazon ECS cluster's ARN.</p>
     */
    inline void SetEcsClusterArn(Aws::String&& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = std::move(value); }

    /**
     * <p>For container instances, the Amazon ECS cluster's ARN.</p>
     */
    inline void SetEcsClusterArn(const char* value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn.assign(value); }

    /**
     * <p>For container instances, the Amazon ECS cluster's ARN.</p>
     */
    inline Instance& WithEcsClusterArn(const Aws::String& value) { SetEcsClusterArn(value); return *this;}

    /**
     * <p>For container instances, the Amazon ECS cluster's ARN.</p>
     */
    inline Instance& WithEcsClusterArn(Aws::String&& value) { SetEcsClusterArn(std::move(value)); return *this;}

    /**
     * <p>For container instances, the Amazon ECS cluster's ARN.</p>
     */
    inline Instance& WithEcsClusterArn(const char* value) { SetEcsClusterArn(value); return *this;}


    /**
     * <p>For container instances, the instance's ARN.</p>
     */
    inline const Aws::String& GetEcsContainerInstanceArn() const{ return m_ecsContainerInstanceArn; }

    /**
     * <p>For container instances, the instance's ARN.</p>
     */
    inline bool EcsContainerInstanceArnHasBeenSet() const { return m_ecsContainerInstanceArnHasBeenSet; }

    /**
     * <p>For container instances, the instance's ARN.</p>
     */
    inline void SetEcsContainerInstanceArn(const Aws::String& value) { m_ecsContainerInstanceArnHasBeenSet = true; m_ecsContainerInstanceArn = value; }

    /**
     * <p>For container instances, the instance's ARN.</p>
     */
    inline void SetEcsContainerInstanceArn(Aws::String&& value) { m_ecsContainerInstanceArnHasBeenSet = true; m_ecsContainerInstanceArn = std::move(value); }

    /**
     * <p>For container instances, the instance's ARN.</p>
     */
    inline void SetEcsContainerInstanceArn(const char* value) { m_ecsContainerInstanceArnHasBeenSet = true; m_ecsContainerInstanceArn.assign(value); }

    /**
     * <p>For container instances, the instance's ARN.</p>
     */
    inline Instance& WithEcsContainerInstanceArn(const Aws::String& value) { SetEcsContainerInstanceArn(value); return *this;}

    /**
     * <p>For container instances, the instance's ARN.</p>
     */
    inline Instance& WithEcsContainerInstanceArn(Aws::String&& value) { SetEcsContainerInstanceArn(std::move(value)); return *this;}

    /**
     * <p>For container instances, the instance's ARN.</p>
     */
    inline Instance& WithEcsContainerInstanceArn(const char* value) { SetEcsContainerInstanceArn(value); return *this;}


    /**
     * <p>The instance <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address </a>.</p>
     */
    inline const Aws::String& GetElasticIp() const{ return m_elasticIp; }

    /**
     * <p>The instance <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address </a>.</p>
     */
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }

    /**
     * <p>The instance <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address </a>.</p>
     */
    inline void SetElasticIp(const Aws::String& value) { m_elasticIpHasBeenSet = true; m_elasticIp = value; }

    /**
     * <p>The instance <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address </a>.</p>
     */
    inline void SetElasticIp(Aws::String&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::move(value); }

    /**
     * <p>The instance <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address </a>.</p>
     */
    inline void SetElasticIp(const char* value) { m_elasticIpHasBeenSet = true; m_elasticIp.assign(value); }

    /**
     * <p>The instance <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address </a>.</p>
     */
    inline Instance& WithElasticIp(const Aws::String& value) { SetElasticIp(value); return *this;}

    /**
     * <p>The instance <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address </a>.</p>
     */
    inline Instance& WithElasticIp(Aws::String&& value) { SetElasticIp(std::move(value)); return *this;}

    /**
     * <p>The instance <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address </a>.</p>
     */
    inline Instance& WithElasticIp(const char* value) { SetElasticIp(value); return *this;}


    /**
     * <p>The instance host name.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The instance host name.</p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The instance host name.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The instance host name.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The instance host name.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The instance host name.</p>
     */
    inline Instance& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The instance host name.</p>
     */
    inline Instance& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The instance host name.</p>
     */
    inline Instance& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p>For registered instances, the infrastructure class: <code>ec2</code> or
     * <code>on-premises</code>.</p>
     */
    inline const Aws::String& GetInfrastructureClass() const{ return m_infrastructureClass; }

    /**
     * <p>For registered instances, the infrastructure class: <code>ec2</code> or
     * <code>on-premises</code>.</p>
     */
    inline bool InfrastructureClassHasBeenSet() const { return m_infrastructureClassHasBeenSet; }

    /**
     * <p>For registered instances, the infrastructure class: <code>ec2</code> or
     * <code>on-premises</code>.</p>
     */
    inline void SetInfrastructureClass(const Aws::String& value) { m_infrastructureClassHasBeenSet = true; m_infrastructureClass = value; }

    /**
     * <p>For registered instances, the infrastructure class: <code>ec2</code> or
     * <code>on-premises</code>.</p>
     */
    inline void SetInfrastructureClass(Aws::String&& value) { m_infrastructureClassHasBeenSet = true; m_infrastructureClass = std::move(value); }

    /**
     * <p>For registered instances, the infrastructure class: <code>ec2</code> or
     * <code>on-premises</code>.</p>
     */
    inline void SetInfrastructureClass(const char* value) { m_infrastructureClassHasBeenSet = true; m_infrastructureClass.assign(value); }

    /**
     * <p>For registered instances, the infrastructure class: <code>ec2</code> or
     * <code>on-premises</code>.</p>
     */
    inline Instance& WithInfrastructureClass(const Aws::String& value) { SetInfrastructureClass(value); return *this;}

    /**
     * <p>For registered instances, the infrastructure class: <code>ec2</code> or
     * <code>on-premises</code>.</p>
     */
    inline Instance& WithInfrastructureClass(Aws::String&& value) { SetInfrastructureClass(std::move(value)); return *this;}

    /**
     * <p>For registered instances, the infrastructure class: <code>ec2</code> or
     * <code>on-premises</code>.</p>
     */
    inline Instance& WithInfrastructureClass(const char* value) { SetInfrastructureClass(value); return *this;}


    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. If this value is set to
     * <code>false</code>, you must then update your instances manually by using
     * <a>CreateDeployment</a> to run the <code>update_dependencies</code> stack
     * command or by manually running <code>yum</code> (Amazon Linux) or
     * <code>apt-get</code> (Ubuntu) on the instances. </p> <note> <p>We strongly
     * recommend using the default value of <code>true</code>, to ensure that your
     * instances have the latest security updates.</p> </note>
     */
    inline bool GetInstallUpdatesOnBoot() const{ return m_installUpdatesOnBoot; }

    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. If this value is set to
     * <code>false</code>, you must then update your instances manually by using
     * <a>CreateDeployment</a> to run the <code>update_dependencies</code> stack
     * command or by manually running <code>yum</code> (Amazon Linux) or
     * <code>apt-get</code> (Ubuntu) on the instances. </p> <note> <p>We strongly
     * recommend using the default value of <code>true</code>, to ensure that your
     * instances have the latest security updates.</p> </note>
     */
    inline bool InstallUpdatesOnBootHasBeenSet() const { return m_installUpdatesOnBootHasBeenSet; }

    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. If this value is set to
     * <code>false</code>, you must then update your instances manually by using
     * <a>CreateDeployment</a> to run the <code>update_dependencies</code> stack
     * command or by manually running <code>yum</code> (Amazon Linux) or
     * <code>apt-get</code> (Ubuntu) on the instances. </p> <note> <p>We strongly
     * recommend using the default value of <code>true</code>, to ensure that your
     * instances have the latest security updates.</p> </note>
     */
    inline void SetInstallUpdatesOnBoot(bool value) { m_installUpdatesOnBootHasBeenSet = true; m_installUpdatesOnBoot = value; }

    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. If this value is set to
     * <code>false</code>, you must then update your instances manually by using
     * <a>CreateDeployment</a> to run the <code>update_dependencies</code> stack
     * command or by manually running <code>yum</code> (Amazon Linux) or
     * <code>apt-get</code> (Ubuntu) on the instances. </p> <note> <p>We strongly
     * recommend using the default value of <code>true</code>, to ensure that your
     * instances have the latest security updates.</p> </note>
     */
    inline Instance& WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}


    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline Instance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline Instance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline Instance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The ARN of the instance's IAM profile. For more information about IAM ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetInstanceProfileArn() const{ return m_instanceProfileArn; }

    /**
     * <p>The ARN of the instance's IAM profile. For more information about IAM ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }

    /**
     * <p>The ARN of the instance's IAM profile. For more information about IAM ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetInstanceProfileArn(const Aws::String& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = value; }

    /**
     * <p>The ARN of the instance's IAM profile. For more information about IAM ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetInstanceProfileArn(Aws::String&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::move(value); }

    /**
     * <p>The ARN of the instance's IAM profile. For more information about IAM ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetInstanceProfileArn(const char* value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn.assign(value); }

    /**
     * <p>The ARN of the instance's IAM profile. For more information about IAM ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Instance& WithInstanceProfileArn(const Aws::String& value) { SetInstanceProfileArn(value); return *this;}

    /**
     * <p>The ARN of the instance's IAM profile. For more information about IAM ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Instance& WithInstanceProfileArn(Aws::String&& value) { SetInstanceProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the instance's IAM profile. For more information about IAM ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Instance& WithInstanceProfileArn(const char* value) { SetInstanceProfileArn(value); return *this;}


    /**
     * <p>The instance type, such as <code>t2.micro</code>.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type, such as <code>t2.micro</code>.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type, such as <code>t2.micro</code>.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type, such as <code>t2.micro</code>.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type, such as <code>t2.micro</code>.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type, such as <code>t2.micro</code>.</p>
     */
    inline Instance& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type, such as <code>t2.micro</code>.</p>
     */
    inline Instance& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type, such as <code>t2.micro</code>.</p>
     */
    inline Instance& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The ID of the last service error. For more information, call
     * <a>DescribeServiceErrors</a>.</p>
     */
    inline const Aws::String& GetLastServiceErrorId() const{ return m_lastServiceErrorId; }

    /**
     * <p>The ID of the last service error. For more information, call
     * <a>DescribeServiceErrors</a>.</p>
     */
    inline bool LastServiceErrorIdHasBeenSet() const { return m_lastServiceErrorIdHasBeenSet; }

    /**
     * <p>The ID of the last service error. For more information, call
     * <a>DescribeServiceErrors</a>.</p>
     */
    inline void SetLastServiceErrorId(const Aws::String& value) { m_lastServiceErrorIdHasBeenSet = true; m_lastServiceErrorId = value; }

    /**
     * <p>The ID of the last service error. For more information, call
     * <a>DescribeServiceErrors</a>.</p>
     */
    inline void SetLastServiceErrorId(Aws::String&& value) { m_lastServiceErrorIdHasBeenSet = true; m_lastServiceErrorId = std::move(value); }

    /**
     * <p>The ID of the last service error. For more information, call
     * <a>DescribeServiceErrors</a>.</p>
     */
    inline void SetLastServiceErrorId(const char* value) { m_lastServiceErrorIdHasBeenSet = true; m_lastServiceErrorId.assign(value); }

    /**
     * <p>The ID of the last service error. For more information, call
     * <a>DescribeServiceErrors</a>.</p>
     */
    inline Instance& WithLastServiceErrorId(const Aws::String& value) { SetLastServiceErrorId(value); return *this;}

    /**
     * <p>The ID of the last service error. For more information, call
     * <a>DescribeServiceErrors</a>.</p>
     */
    inline Instance& WithLastServiceErrorId(Aws::String&& value) { SetLastServiceErrorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the last service error. For more information, call
     * <a>DescribeServiceErrors</a>.</p>
     */
    inline Instance& WithLastServiceErrorId(const char* value) { SetLastServiceErrorId(value); return *this;}


    /**
     * <p>An array containing the instance layer IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const{ return m_layerIds; }

    /**
     * <p>An array containing the instance layer IDs.</p>
     */
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }

    /**
     * <p>An array containing the instance layer IDs.</p>
     */
    inline void SetLayerIds(const Aws::Vector<Aws::String>& value) { m_layerIdsHasBeenSet = true; m_layerIds = value; }

    /**
     * <p>An array containing the instance layer IDs.</p>
     */
    inline void SetLayerIds(Aws::Vector<Aws::String>&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::move(value); }

    /**
     * <p>An array containing the instance layer IDs.</p>
     */
    inline Instance& WithLayerIds(const Aws::Vector<Aws::String>& value) { SetLayerIds(value); return *this;}

    /**
     * <p>An array containing the instance layer IDs.</p>
     */
    inline Instance& WithLayerIds(Aws::Vector<Aws::String>&& value) { SetLayerIds(std::move(value)); return *this;}

    /**
     * <p>An array containing the instance layer IDs.</p>
     */
    inline Instance& AddLayerIds(const Aws::String& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }

    /**
     * <p>An array containing the instance layer IDs.</p>
     */
    inline Instance& AddLayerIds(Aws::String&& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array containing the instance layer IDs.</p>
     */
    inline Instance& AddLayerIds(const char* value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }


    /**
     * <p>The instance's operating system.</p>
     */
    inline const Aws::String& GetOs() const{ return m_os; }

    /**
     * <p>The instance's operating system.</p>
     */
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }

    /**
     * <p>The instance's operating system.</p>
     */
    inline void SetOs(const Aws::String& value) { m_osHasBeenSet = true; m_os = value; }

    /**
     * <p>The instance's operating system.</p>
     */
    inline void SetOs(Aws::String&& value) { m_osHasBeenSet = true; m_os = std::move(value); }

    /**
     * <p>The instance's operating system.</p>
     */
    inline void SetOs(const char* value) { m_osHasBeenSet = true; m_os.assign(value); }

    /**
     * <p>The instance's operating system.</p>
     */
    inline Instance& WithOs(const Aws::String& value) { SetOs(value); return *this;}

    /**
     * <p>The instance's operating system.</p>
     */
    inline Instance& WithOs(Aws::String&& value) { SetOs(std::move(value)); return *this;}

    /**
     * <p>The instance's operating system.</p>
     */
    inline Instance& WithOs(const char* value) { SetOs(value); return *this;}


    /**
     * <p>The instance's platform.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The instance's platform.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The instance's platform.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The instance's platform.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The instance's platform.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The instance's platform.</p>
     */
    inline Instance& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The instance's platform.</p>
     */
    inline Instance& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The instance's platform.</p>
     */
    inline Instance& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The instance's private DNS name.</p>
     */
    inline const Aws::String& GetPrivateDns() const{ return m_privateDns; }

    /**
     * <p>The instance's private DNS name.</p>
     */
    inline bool PrivateDnsHasBeenSet() const { return m_privateDnsHasBeenSet; }

    /**
     * <p>The instance's private DNS name.</p>
     */
    inline void SetPrivateDns(const Aws::String& value) { m_privateDnsHasBeenSet = true; m_privateDns = value; }

    /**
     * <p>The instance's private DNS name.</p>
     */
    inline void SetPrivateDns(Aws::String&& value) { m_privateDnsHasBeenSet = true; m_privateDns = std::move(value); }

    /**
     * <p>The instance's private DNS name.</p>
     */
    inline void SetPrivateDns(const char* value) { m_privateDnsHasBeenSet = true; m_privateDns.assign(value); }

    /**
     * <p>The instance's private DNS name.</p>
     */
    inline Instance& WithPrivateDns(const Aws::String& value) { SetPrivateDns(value); return *this;}

    /**
     * <p>The instance's private DNS name.</p>
     */
    inline Instance& WithPrivateDns(Aws::String&& value) { SetPrivateDns(std::move(value)); return *this;}

    /**
     * <p>The instance's private DNS name.</p>
     */
    inline Instance& WithPrivateDns(const char* value) { SetPrivateDns(value); return *this;}


    /**
     * <p>The instance's private IP address.</p>
     */
    inline const Aws::String& GetPrivateIp() const{ return m_privateIp; }

    /**
     * <p>The instance's private IP address.</p>
     */
    inline bool PrivateIpHasBeenSet() const { return m_privateIpHasBeenSet; }

    /**
     * <p>The instance's private IP address.</p>
     */
    inline void SetPrivateIp(const Aws::String& value) { m_privateIpHasBeenSet = true; m_privateIp = value; }

    /**
     * <p>The instance's private IP address.</p>
     */
    inline void SetPrivateIp(Aws::String&& value) { m_privateIpHasBeenSet = true; m_privateIp = std::move(value); }

    /**
     * <p>The instance's private IP address.</p>
     */
    inline void SetPrivateIp(const char* value) { m_privateIpHasBeenSet = true; m_privateIp.assign(value); }

    /**
     * <p>The instance's private IP address.</p>
     */
    inline Instance& WithPrivateIp(const Aws::String& value) { SetPrivateIp(value); return *this;}

    /**
     * <p>The instance's private IP address.</p>
     */
    inline Instance& WithPrivateIp(Aws::String&& value) { SetPrivateIp(std::move(value)); return *this;}

    /**
     * <p>The instance's private IP address.</p>
     */
    inline Instance& WithPrivateIp(const char* value) { SetPrivateIp(value); return *this;}


    /**
     * <p>The instance public DNS name.</p>
     */
    inline const Aws::String& GetPublicDns() const{ return m_publicDns; }

    /**
     * <p>The instance public DNS name.</p>
     */
    inline bool PublicDnsHasBeenSet() const { return m_publicDnsHasBeenSet; }

    /**
     * <p>The instance public DNS name.</p>
     */
    inline void SetPublicDns(const Aws::String& value) { m_publicDnsHasBeenSet = true; m_publicDns = value; }

    /**
     * <p>The instance public DNS name.</p>
     */
    inline void SetPublicDns(Aws::String&& value) { m_publicDnsHasBeenSet = true; m_publicDns = std::move(value); }

    /**
     * <p>The instance public DNS name.</p>
     */
    inline void SetPublicDns(const char* value) { m_publicDnsHasBeenSet = true; m_publicDns.assign(value); }

    /**
     * <p>The instance public DNS name.</p>
     */
    inline Instance& WithPublicDns(const Aws::String& value) { SetPublicDns(value); return *this;}

    /**
     * <p>The instance public DNS name.</p>
     */
    inline Instance& WithPublicDns(Aws::String&& value) { SetPublicDns(std::move(value)); return *this;}

    /**
     * <p>The instance public DNS name.</p>
     */
    inline Instance& WithPublicDns(const char* value) { SetPublicDns(value); return *this;}


    /**
     * <p>The instance public IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The instance public IP address.</p>
     */
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }

    /**
     * <p>The instance public IP address.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The instance public IP address.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>The instance public IP address.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>The instance public IP address.</p>
     */
    inline Instance& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The instance public IP address.</p>
     */
    inline Instance& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The instance public IP address.</p>
     */
    inline Instance& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}


    /**
     * <p>For registered instances, who performed the registration.</p>
     */
    inline const Aws::String& GetRegisteredBy() const{ return m_registeredBy; }

    /**
     * <p>For registered instances, who performed the registration.</p>
     */
    inline bool RegisteredByHasBeenSet() const { return m_registeredByHasBeenSet; }

    /**
     * <p>For registered instances, who performed the registration.</p>
     */
    inline void SetRegisteredBy(const Aws::String& value) { m_registeredByHasBeenSet = true; m_registeredBy = value; }

    /**
     * <p>For registered instances, who performed the registration.</p>
     */
    inline void SetRegisteredBy(Aws::String&& value) { m_registeredByHasBeenSet = true; m_registeredBy = std::move(value); }

    /**
     * <p>For registered instances, who performed the registration.</p>
     */
    inline void SetRegisteredBy(const char* value) { m_registeredByHasBeenSet = true; m_registeredBy.assign(value); }

    /**
     * <p>For registered instances, who performed the registration.</p>
     */
    inline Instance& WithRegisteredBy(const Aws::String& value) { SetRegisteredBy(value); return *this;}

    /**
     * <p>For registered instances, who performed the registration.</p>
     */
    inline Instance& WithRegisteredBy(Aws::String&& value) { SetRegisteredBy(std::move(value)); return *this;}

    /**
     * <p>For registered instances, who performed the registration.</p>
     */
    inline Instance& WithRegisteredBy(const char* value) { SetRegisteredBy(value); return *this;}


    /**
     * <p>The instance's reported AWS OpsWorks Stacks agent version.</p>
     */
    inline const Aws::String& GetReportedAgentVersion() const{ return m_reportedAgentVersion; }

    /**
     * <p>The instance's reported AWS OpsWorks Stacks agent version.</p>
     */
    inline bool ReportedAgentVersionHasBeenSet() const { return m_reportedAgentVersionHasBeenSet; }

    /**
     * <p>The instance's reported AWS OpsWorks Stacks agent version.</p>
     */
    inline void SetReportedAgentVersion(const Aws::String& value) { m_reportedAgentVersionHasBeenSet = true; m_reportedAgentVersion = value; }

    /**
     * <p>The instance's reported AWS OpsWorks Stacks agent version.</p>
     */
    inline void SetReportedAgentVersion(Aws::String&& value) { m_reportedAgentVersionHasBeenSet = true; m_reportedAgentVersion = std::move(value); }

    /**
     * <p>The instance's reported AWS OpsWorks Stacks agent version.</p>
     */
    inline void SetReportedAgentVersion(const char* value) { m_reportedAgentVersionHasBeenSet = true; m_reportedAgentVersion.assign(value); }

    /**
     * <p>The instance's reported AWS OpsWorks Stacks agent version.</p>
     */
    inline Instance& WithReportedAgentVersion(const Aws::String& value) { SetReportedAgentVersion(value); return *this;}

    /**
     * <p>The instance's reported AWS OpsWorks Stacks agent version.</p>
     */
    inline Instance& WithReportedAgentVersion(Aws::String&& value) { SetReportedAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The instance's reported AWS OpsWorks Stacks agent version.</p>
     */
    inline Instance& WithReportedAgentVersion(const char* value) { SetReportedAgentVersion(value); return *this;}


    /**
     * <p>For registered instances, the reported operating system.</p>
     */
    inline const ReportedOs& GetReportedOs() const{ return m_reportedOs; }

    /**
     * <p>For registered instances, the reported operating system.</p>
     */
    inline bool ReportedOsHasBeenSet() const { return m_reportedOsHasBeenSet; }

    /**
     * <p>For registered instances, the reported operating system.</p>
     */
    inline void SetReportedOs(const ReportedOs& value) { m_reportedOsHasBeenSet = true; m_reportedOs = value; }

    /**
     * <p>For registered instances, the reported operating system.</p>
     */
    inline void SetReportedOs(ReportedOs&& value) { m_reportedOsHasBeenSet = true; m_reportedOs = std::move(value); }

    /**
     * <p>For registered instances, the reported operating system.</p>
     */
    inline Instance& WithReportedOs(const ReportedOs& value) { SetReportedOs(value); return *this;}

    /**
     * <p>For registered instances, the reported operating system.</p>
     */
    inline Instance& WithReportedOs(ReportedOs&& value) { SetReportedOs(std::move(value)); return *this;}


    /**
     * <p>The instance's root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline const RootDeviceType& GetRootDeviceType() const{ return m_rootDeviceType; }

    /**
     * <p>The instance's root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline bool RootDeviceTypeHasBeenSet() const { return m_rootDeviceTypeHasBeenSet; }

    /**
     * <p>The instance's root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline void SetRootDeviceType(const RootDeviceType& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = value; }

    /**
     * <p>The instance's root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline void SetRootDeviceType(RootDeviceType&& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = std::move(value); }

    /**
     * <p>The instance's root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline Instance& WithRootDeviceType(const RootDeviceType& value) { SetRootDeviceType(value); return *this;}

    /**
     * <p>The instance's root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline Instance& WithRootDeviceType(RootDeviceType&& value) { SetRootDeviceType(std::move(value)); return *this;}


    /**
     * <p>The root device volume ID.</p>
     */
    inline const Aws::String& GetRootDeviceVolumeId() const{ return m_rootDeviceVolumeId; }

    /**
     * <p>The root device volume ID.</p>
     */
    inline bool RootDeviceVolumeIdHasBeenSet() const { return m_rootDeviceVolumeIdHasBeenSet; }

    /**
     * <p>The root device volume ID.</p>
     */
    inline void SetRootDeviceVolumeId(const Aws::String& value) { m_rootDeviceVolumeIdHasBeenSet = true; m_rootDeviceVolumeId = value; }

    /**
     * <p>The root device volume ID.</p>
     */
    inline void SetRootDeviceVolumeId(Aws::String&& value) { m_rootDeviceVolumeIdHasBeenSet = true; m_rootDeviceVolumeId = std::move(value); }

    /**
     * <p>The root device volume ID.</p>
     */
    inline void SetRootDeviceVolumeId(const char* value) { m_rootDeviceVolumeIdHasBeenSet = true; m_rootDeviceVolumeId.assign(value); }

    /**
     * <p>The root device volume ID.</p>
     */
    inline Instance& WithRootDeviceVolumeId(const Aws::String& value) { SetRootDeviceVolumeId(value); return *this;}

    /**
     * <p>The root device volume ID.</p>
     */
    inline Instance& WithRootDeviceVolumeId(Aws::String&& value) { SetRootDeviceVolumeId(std::move(value)); return *this;}

    /**
     * <p>The root device volume ID.</p>
     */
    inline Instance& WithRootDeviceVolumeId(const char* value) { SetRootDeviceVolumeId(value); return *this;}


    /**
     * <p>An array containing the instance security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>An array containing the instance security group IDs.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>An array containing the instance security group IDs.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>An array containing the instance security group IDs.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>An array containing the instance security group IDs.</p>
     */
    inline Instance& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>An array containing the instance security group IDs.</p>
     */
    inline Instance& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>An array containing the instance security group IDs.</p>
     */
    inline Instance& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>An array containing the instance security group IDs.</p>
     */
    inline Instance& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array containing the instance security group IDs.</p>
     */
    inline Instance& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The SSH key's Deep Security Agent (DSA) fingerprint.</p>
     */
    inline const Aws::String& GetSshHostDsaKeyFingerprint() const{ return m_sshHostDsaKeyFingerprint; }

    /**
     * <p>The SSH key's Deep Security Agent (DSA) fingerprint.</p>
     */
    inline bool SshHostDsaKeyFingerprintHasBeenSet() const { return m_sshHostDsaKeyFingerprintHasBeenSet; }

    /**
     * <p>The SSH key's Deep Security Agent (DSA) fingerprint.</p>
     */
    inline void SetSshHostDsaKeyFingerprint(const Aws::String& value) { m_sshHostDsaKeyFingerprintHasBeenSet = true; m_sshHostDsaKeyFingerprint = value; }

    /**
     * <p>The SSH key's Deep Security Agent (DSA) fingerprint.</p>
     */
    inline void SetSshHostDsaKeyFingerprint(Aws::String&& value) { m_sshHostDsaKeyFingerprintHasBeenSet = true; m_sshHostDsaKeyFingerprint = std::move(value); }

    /**
     * <p>The SSH key's Deep Security Agent (DSA) fingerprint.</p>
     */
    inline void SetSshHostDsaKeyFingerprint(const char* value) { m_sshHostDsaKeyFingerprintHasBeenSet = true; m_sshHostDsaKeyFingerprint.assign(value); }

    /**
     * <p>The SSH key's Deep Security Agent (DSA) fingerprint.</p>
     */
    inline Instance& WithSshHostDsaKeyFingerprint(const Aws::String& value) { SetSshHostDsaKeyFingerprint(value); return *this;}

    /**
     * <p>The SSH key's Deep Security Agent (DSA) fingerprint.</p>
     */
    inline Instance& WithSshHostDsaKeyFingerprint(Aws::String&& value) { SetSshHostDsaKeyFingerprint(std::move(value)); return *this;}

    /**
     * <p>The SSH key's Deep Security Agent (DSA) fingerprint.</p>
     */
    inline Instance& WithSshHostDsaKeyFingerprint(const char* value) { SetSshHostDsaKeyFingerprint(value); return *this;}


    /**
     * <p>The SSH key's RSA fingerprint.</p>
     */
    inline const Aws::String& GetSshHostRsaKeyFingerprint() const{ return m_sshHostRsaKeyFingerprint; }

    /**
     * <p>The SSH key's RSA fingerprint.</p>
     */
    inline bool SshHostRsaKeyFingerprintHasBeenSet() const { return m_sshHostRsaKeyFingerprintHasBeenSet; }

    /**
     * <p>The SSH key's RSA fingerprint.</p>
     */
    inline void SetSshHostRsaKeyFingerprint(const Aws::String& value) { m_sshHostRsaKeyFingerprintHasBeenSet = true; m_sshHostRsaKeyFingerprint = value; }

    /**
     * <p>The SSH key's RSA fingerprint.</p>
     */
    inline void SetSshHostRsaKeyFingerprint(Aws::String&& value) { m_sshHostRsaKeyFingerprintHasBeenSet = true; m_sshHostRsaKeyFingerprint = std::move(value); }

    /**
     * <p>The SSH key's RSA fingerprint.</p>
     */
    inline void SetSshHostRsaKeyFingerprint(const char* value) { m_sshHostRsaKeyFingerprintHasBeenSet = true; m_sshHostRsaKeyFingerprint.assign(value); }

    /**
     * <p>The SSH key's RSA fingerprint.</p>
     */
    inline Instance& WithSshHostRsaKeyFingerprint(const Aws::String& value) { SetSshHostRsaKeyFingerprint(value); return *this;}

    /**
     * <p>The SSH key's RSA fingerprint.</p>
     */
    inline Instance& WithSshHostRsaKeyFingerprint(Aws::String&& value) { SetSshHostRsaKeyFingerprint(std::move(value)); return *this;}

    /**
     * <p>The SSH key's RSA fingerprint.</p>
     */
    inline Instance& WithSshHostRsaKeyFingerprint(const char* value) { SetSshHostRsaKeyFingerprint(value); return *this;}


    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline const Aws::String& GetSshKeyName() const{ return m_sshKeyName; }

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline bool SshKeyNameHasBeenSet() const { return m_sshKeyNameHasBeenSet; }

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline void SetSshKeyName(const Aws::String& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = value; }

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline void SetSshKeyName(Aws::String&& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = std::move(value); }

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline void SetSshKeyName(const char* value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName.assign(value); }

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline Instance& WithSshKeyName(const Aws::String& value) { SetSshKeyName(value); return *this;}

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline Instance& WithSshKeyName(Aws::String&& value) { SetSshKeyName(std::move(value)); return *this;}

    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline Instance& WithSshKeyName(const char* value) { SetSshKeyName(value); return *this;}


    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline Instance& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline Instance& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline Instance& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The instance status:</p> <ul> <li> <p> <code>booting</code> </p> </li> <li>
     * <p> <code>connection_lost</code> </p> </li> <li> <p> <code>online</code> </p>
     * </li> <li> <p> <code>pending</code> </p> </li> <li> <p> <code>rebooting</code>
     * </p> </li> <li> <p> <code>requested</code> </p> </li> <li> <p>
     * <code>running_setup</code> </p> </li> <li> <p> <code>setup_failed</code> </p>
     * </li> <li> <p> <code>shutting_down</code> </p> </li> <li> <p>
     * <code>start_failed</code> </p> </li> <li> <p> <code>stop_failed</code> </p>
     * </li> <li> <p> <code>stopped</code> </p> </li> <li> <p> <code>stopping</code>
     * </p> </li> <li> <p> <code>terminated</code> </p> </li> <li> <p>
     * <code>terminating</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The instance status:</p> <ul> <li> <p> <code>booting</code> </p> </li> <li>
     * <p> <code>connection_lost</code> </p> </li> <li> <p> <code>online</code> </p>
     * </li> <li> <p> <code>pending</code> </p> </li> <li> <p> <code>rebooting</code>
     * </p> </li> <li> <p> <code>requested</code> </p> </li> <li> <p>
     * <code>running_setup</code> </p> </li> <li> <p> <code>setup_failed</code> </p>
     * </li> <li> <p> <code>shutting_down</code> </p> </li> <li> <p>
     * <code>start_failed</code> </p> </li> <li> <p> <code>stop_failed</code> </p>
     * </li> <li> <p> <code>stopped</code> </p> </li> <li> <p> <code>stopping</code>
     * </p> </li> <li> <p> <code>terminated</code> </p> </li> <li> <p>
     * <code>terminating</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The instance status:</p> <ul> <li> <p> <code>booting</code> </p> </li> <li>
     * <p> <code>connection_lost</code> </p> </li> <li> <p> <code>online</code> </p>
     * </li> <li> <p> <code>pending</code> </p> </li> <li> <p> <code>rebooting</code>
     * </p> </li> <li> <p> <code>requested</code> </p> </li> <li> <p>
     * <code>running_setup</code> </p> </li> <li> <p> <code>setup_failed</code> </p>
     * </li> <li> <p> <code>shutting_down</code> </p> </li> <li> <p>
     * <code>start_failed</code> </p> </li> <li> <p> <code>stop_failed</code> </p>
     * </li> <li> <p> <code>stopped</code> </p> </li> <li> <p> <code>stopping</code>
     * </p> </li> <li> <p> <code>terminated</code> </p> </li> <li> <p>
     * <code>terminating</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The instance status:</p> <ul> <li> <p> <code>booting</code> </p> </li> <li>
     * <p> <code>connection_lost</code> </p> </li> <li> <p> <code>online</code> </p>
     * </li> <li> <p> <code>pending</code> </p> </li> <li> <p> <code>rebooting</code>
     * </p> </li> <li> <p> <code>requested</code> </p> </li> <li> <p>
     * <code>running_setup</code> </p> </li> <li> <p> <code>setup_failed</code> </p>
     * </li> <li> <p> <code>shutting_down</code> </p> </li> <li> <p>
     * <code>start_failed</code> </p> </li> <li> <p> <code>stop_failed</code> </p>
     * </li> <li> <p> <code>stopped</code> </p> </li> <li> <p> <code>stopping</code>
     * </p> </li> <li> <p> <code>terminated</code> </p> </li> <li> <p>
     * <code>terminating</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The instance status:</p> <ul> <li> <p> <code>booting</code> </p> </li> <li>
     * <p> <code>connection_lost</code> </p> </li> <li> <p> <code>online</code> </p>
     * </li> <li> <p> <code>pending</code> </p> </li> <li> <p> <code>rebooting</code>
     * </p> </li> <li> <p> <code>requested</code> </p> </li> <li> <p>
     * <code>running_setup</code> </p> </li> <li> <p> <code>setup_failed</code> </p>
     * </li> <li> <p> <code>shutting_down</code> </p> </li> <li> <p>
     * <code>start_failed</code> </p> </li> <li> <p> <code>stop_failed</code> </p>
     * </li> <li> <p> <code>stopped</code> </p> </li> <li> <p> <code>stopping</code>
     * </p> </li> <li> <p> <code>terminated</code> </p> </li> <li> <p>
     * <code>terminating</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The instance status:</p> <ul> <li> <p> <code>booting</code> </p> </li> <li>
     * <p> <code>connection_lost</code> </p> </li> <li> <p> <code>online</code> </p>
     * </li> <li> <p> <code>pending</code> </p> </li> <li> <p> <code>rebooting</code>
     * </p> </li> <li> <p> <code>requested</code> </p> </li> <li> <p>
     * <code>running_setup</code> </p> </li> <li> <p> <code>setup_failed</code> </p>
     * </li> <li> <p> <code>shutting_down</code> </p> </li> <li> <p>
     * <code>start_failed</code> </p> </li> <li> <p> <code>stop_failed</code> </p>
     * </li> <li> <p> <code>stopped</code> </p> </li> <li> <p> <code>stopping</code>
     * </p> </li> <li> <p> <code>terminated</code> </p> </li> <li> <p>
     * <code>terminating</code> </p> </li> </ul>
     */
    inline Instance& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The instance status:</p> <ul> <li> <p> <code>booting</code> </p> </li> <li>
     * <p> <code>connection_lost</code> </p> </li> <li> <p> <code>online</code> </p>
     * </li> <li> <p> <code>pending</code> </p> </li> <li> <p> <code>rebooting</code>
     * </p> </li> <li> <p> <code>requested</code> </p> </li> <li> <p>
     * <code>running_setup</code> </p> </li> <li> <p> <code>setup_failed</code> </p>
     * </li> <li> <p> <code>shutting_down</code> </p> </li> <li> <p>
     * <code>start_failed</code> </p> </li> <li> <p> <code>stop_failed</code> </p>
     * </li> <li> <p> <code>stopped</code> </p> </li> <li> <p> <code>stopping</code>
     * </p> </li> <li> <p> <code>terminated</code> </p> </li> <li> <p>
     * <code>terminating</code> </p> </li> </ul>
     */
    inline Instance& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The instance status:</p> <ul> <li> <p> <code>booting</code> </p> </li> <li>
     * <p> <code>connection_lost</code> </p> </li> <li> <p> <code>online</code> </p>
     * </li> <li> <p> <code>pending</code> </p> </li> <li> <p> <code>rebooting</code>
     * </p> </li> <li> <p> <code>requested</code> </p> </li> <li> <p>
     * <code>running_setup</code> </p> </li> <li> <p> <code>setup_failed</code> </p>
     * </li> <li> <p> <code>shutting_down</code> </p> </li> <li> <p>
     * <code>start_failed</code> </p> </li> <li> <p> <code>stop_failed</code> </p>
     * </li> <li> <p> <code>stopped</code> </p> </li> <li> <p> <code>stopping</code>
     * </p> </li> <li> <p> <code>terminated</code> </p> </li> <li> <p>
     * <code>terminating</code> </p> </li> </ul>
     */
    inline Instance& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The instance's subnet ID; applicable only if the stack is running in a
     * VPC.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The instance's subnet ID; applicable only if the stack is running in a
     * VPC.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The instance's subnet ID; applicable only if the stack is running in a
     * VPC.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The instance's subnet ID; applicable only if the stack is running in a
     * VPC.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The instance's subnet ID; applicable only if the stack is running in a
     * VPC.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The instance's subnet ID; applicable only if the stack is running in a
     * VPC.</p>
     */
    inline Instance& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The instance's subnet ID; applicable only if the stack is running in a
     * VPC.</p>
     */
    inline Instance& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The instance's subnet ID; applicable only if the stack is running in a
     * VPC.</p>
     */
    inline Instance& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The instance's tenancy option, such as <code>dedicated</code> or
     * <code>host</code>.</p>
     */
    inline const Aws::String& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>The instance's tenancy option, such as <code>dedicated</code> or
     * <code>host</code>.</p>
     */
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }

    /**
     * <p>The instance's tenancy option, such as <code>dedicated</code> or
     * <code>host</code>.</p>
     */
    inline void SetTenancy(const Aws::String& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>The instance's tenancy option, such as <code>dedicated</code> or
     * <code>host</code>.</p>
     */
    inline void SetTenancy(Aws::String&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }

    /**
     * <p>The instance's tenancy option, such as <code>dedicated</code> or
     * <code>host</code>.</p>
     */
    inline void SetTenancy(const char* value) { m_tenancyHasBeenSet = true; m_tenancy.assign(value); }

    /**
     * <p>The instance's tenancy option, such as <code>dedicated</code> or
     * <code>host</code>.</p>
     */
    inline Instance& WithTenancy(const Aws::String& value) { SetTenancy(value); return *this;}

    /**
     * <p>The instance's tenancy option, such as <code>dedicated</code> or
     * <code>host</code>.</p>
     */
    inline Instance& WithTenancy(Aws::String&& value) { SetTenancy(std::move(value)); return *this;}

    /**
     * <p>The instance's tenancy option, such as <code>dedicated</code> or
     * <code>host</code>.</p>
     */
    inline Instance& WithTenancy(const char* value) { SetTenancy(value); return *this;}


    /**
     * <p>The instance's virtualization type: <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline const VirtualizationType& GetVirtualizationType() const{ return m_virtualizationType; }

    /**
     * <p>The instance's virtualization type: <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }

    /**
     * <p>The instance's virtualization type: <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline void SetVirtualizationType(const VirtualizationType& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }

    /**
     * <p>The instance's virtualization type: <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline void SetVirtualizationType(VirtualizationType&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::move(value); }

    /**
     * <p>The instance's virtualization type: <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline Instance& WithVirtualizationType(const VirtualizationType& value) { SetVirtualizationType(value); return *this;}

    /**
     * <p>The instance's virtualization type: <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline Instance& WithVirtualizationType(VirtualizationType&& value) { SetVirtualizationType(std::move(value)); return *this;}

  private:

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet;

    Architecture m_architecture;
    bool m_architectureHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    AutoScalingType m_autoScalingType;
    bool m_autoScalingTypeHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet;

    Aws::String m_ecsClusterArn;
    bool m_ecsClusterArnHasBeenSet;

    Aws::String m_ecsContainerInstanceArn;
    bool m_ecsContainerInstanceArnHasBeenSet;

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet;

    Aws::String m_infrastructureClass;
    bool m_infrastructureClassHasBeenSet;

    bool m_installUpdatesOnBoot;
    bool m_installUpdatesOnBootHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_lastServiceErrorId;
    bool m_lastServiceErrorIdHasBeenSet;

    Aws::Vector<Aws::String> m_layerIds;
    bool m_layerIdsHasBeenSet;

    Aws::String m_os;
    bool m_osHasBeenSet;

    Aws::String m_platform;
    bool m_platformHasBeenSet;

    Aws::String m_privateDns;
    bool m_privateDnsHasBeenSet;

    Aws::String m_privateIp;
    bool m_privateIpHasBeenSet;

    Aws::String m_publicDns;
    bool m_publicDnsHasBeenSet;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet;

    Aws::String m_registeredBy;
    bool m_registeredByHasBeenSet;

    Aws::String m_reportedAgentVersion;
    bool m_reportedAgentVersionHasBeenSet;

    ReportedOs m_reportedOs;
    bool m_reportedOsHasBeenSet;

    RootDeviceType m_rootDeviceType;
    bool m_rootDeviceTypeHasBeenSet;

    Aws::String m_rootDeviceVolumeId;
    bool m_rootDeviceVolumeIdHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_sshHostDsaKeyFingerprint;
    bool m_sshHostDsaKeyFingerprintHasBeenSet;

    Aws::String m_sshHostRsaKeyFingerprint;
    bool m_sshHostRsaKeyFingerprintHasBeenSet;

    Aws::String m_sshKeyName;
    bool m_sshKeyNameHasBeenSet;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_tenancy;
    bool m_tenancyHasBeenSet;

    VirtualizationType m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
