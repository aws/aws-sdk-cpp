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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes an Elastic Load Balancing instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/ElasticLoadBalancer">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API ElasticLoadBalancer
  {
  public:
    ElasticLoadBalancer();
    ElasticLoadBalancer(Aws::Utils::Json::JsonView jsonValue);
    ElasticLoadBalancer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline const Aws::String& GetElasticLoadBalancerName() const{ return m_elasticLoadBalancerName; }

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline bool ElasticLoadBalancerNameHasBeenSet() const { return m_elasticLoadBalancerNameHasBeenSet; }

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline void SetElasticLoadBalancerName(const Aws::String& value) { m_elasticLoadBalancerNameHasBeenSet = true; m_elasticLoadBalancerName = value; }

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline void SetElasticLoadBalancerName(Aws::String&& value) { m_elasticLoadBalancerNameHasBeenSet = true; m_elasticLoadBalancerName = std::move(value); }

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline void SetElasticLoadBalancerName(const char* value) { m_elasticLoadBalancerNameHasBeenSet = true; m_elasticLoadBalancerName.assign(value); }

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline ElasticLoadBalancer& WithElasticLoadBalancerName(const Aws::String& value) { SetElasticLoadBalancerName(value); return *this;}

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline ElasticLoadBalancer& WithElasticLoadBalancerName(Aws::String&& value) { SetElasticLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline ElasticLoadBalancer& WithElasticLoadBalancerName(const char* value) { SetElasticLoadBalancerName(value); return *this;}


    /**
     * <p>The instance's AWS region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The instance's AWS region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The instance's AWS region.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The instance's AWS region.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The instance's AWS region.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The instance's AWS region.</p>
     */
    inline ElasticLoadBalancer& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The instance's AWS region.</p>
     */
    inline ElasticLoadBalancer& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The instance's AWS region.</p>
     */
    inline ElasticLoadBalancer& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The instance's public DNS name.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }

    /**
     * <p>The instance's public DNS name.</p>
     */
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }

    /**
     * <p>The instance's public DNS name.</p>
     */
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }

    /**
     * <p>The instance's public DNS name.</p>
     */
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }

    /**
     * <p>The instance's public DNS name.</p>
     */
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }

    /**
     * <p>The instance's public DNS name.</p>
     */
    inline ElasticLoadBalancer& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}

    /**
     * <p>The instance's public DNS name.</p>
     */
    inline ElasticLoadBalancer& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}

    /**
     * <p>The instance's public DNS name.</p>
     */
    inline ElasticLoadBalancer& WithDnsName(const char* value) { SetDnsName(value); return *this;}


    /**
     * <p>The ID of the stack that the instance is associated with.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The ID of the stack that the instance is associated with.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The ID of the stack that the instance is associated with.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The ID of the stack that the instance is associated with.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The ID of the stack that the instance is associated with.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The ID of the stack that the instance is associated with.</p>
     */
    inline ElasticLoadBalancer& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The ID of the stack that the instance is associated with.</p>
     */
    inline ElasticLoadBalancer& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The ID of the stack that the instance is associated with.</p>
     */
    inline ElasticLoadBalancer& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The ID of the layer that the instance is attached to.</p>
     */
    inline const Aws::String& GetLayerId() const{ return m_layerId; }

    /**
     * <p>The ID of the layer that the instance is attached to.</p>
     */
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }

    /**
     * <p>The ID of the layer that the instance is attached to.</p>
     */
    inline void SetLayerId(const Aws::String& value) { m_layerIdHasBeenSet = true; m_layerId = value; }

    /**
     * <p>The ID of the layer that the instance is attached to.</p>
     */
    inline void SetLayerId(Aws::String&& value) { m_layerIdHasBeenSet = true; m_layerId = std::move(value); }

    /**
     * <p>The ID of the layer that the instance is attached to.</p>
     */
    inline void SetLayerId(const char* value) { m_layerIdHasBeenSet = true; m_layerId.assign(value); }

    /**
     * <p>The ID of the layer that the instance is attached to.</p>
     */
    inline ElasticLoadBalancer& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}

    /**
     * <p>The ID of the layer that the instance is attached to.</p>
     */
    inline ElasticLoadBalancer& WithLayerId(Aws::String&& value) { SetLayerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the layer that the instance is attached to.</p>
     */
    inline ElasticLoadBalancer& WithLayerId(const char* value) { SetLayerId(value); return *this;}


    /**
     * <p>The VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC ID.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC ID.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC ID.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC ID.</p>
     */
    inline ElasticLoadBalancer& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID.</p>
     */
    inline ElasticLoadBalancer& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC ID.</p>
     */
    inline ElasticLoadBalancer& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>A list of Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of Availability Zones.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>A list of Availability Zones.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of Availability Zones.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>A list of Availability Zones.</p>
     */
    inline ElasticLoadBalancer& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of Availability Zones.</p>
     */
    inline ElasticLoadBalancer& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of Availability Zones.</p>
     */
    inline ElasticLoadBalancer& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of Availability Zones.</p>
     */
    inline ElasticLoadBalancer& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Availability Zones.</p>
     */
    inline ElasticLoadBalancer& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>A list of subnet IDs, if the stack is running in a VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of subnet IDs, if the stack is running in a VPC.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of subnet IDs, if the stack is running in a VPC.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of subnet IDs, if the stack is running in a VPC.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of subnet IDs, if the stack is running in a VPC.</p>
     */
    inline ElasticLoadBalancer& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnet IDs, if the stack is running in a VPC.</p>
     */
    inline ElasticLoadBalancer& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnet IDs, if the stack is running in a VPC.</p>
     */
    inline ElasticLoadBalancer& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnet IDs, if the stack is running in a VPC.</p>
     */
    inline ElasticLoadBalancer& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet IDs, if the stack is running in a VPC.</p>
     */
    inline ElasticLoadBalancer& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of the EC2 instances that the Elastic Load Balancing instance is
     * managing traffic for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEc2InstanceIds() const{ return m_ec2InstanceIds; }

    /**
     * <p>A list of the EC2 instances that the Elastic Load Balancing instance is
     * managing traffic for.</p>
     */
    inline bool Ec2InstanceIdsHasBeenSet() const { return m_ec2InstanceIdsHasBeenSet; }

    /**
     * <p>A list of the EC2 instances that the Elastic Load Balancing instance is
     * managing traffic for.</p>
     */
    inline void SetEc2InstanceIds(const Aws::Vector<Aws::String>& value) { m_ec2InstanceIdsHasBeenSet = true; m_ec2InstanceIds = value; }

    /**
     * <p>A list of the EC2 instances that the Elastic Load Balancing instance is
     * managing traffic for.</p>
     */
    inline void SetEc2InstanceIds(Aws::Vector<Aws::String>&& value) { m_ec2InstanceIdsHasBeenSet = true; m_ec2InstanceIds = std::move(value); }

    /**
     * <p>A list of the EC2 instances that the Elastic Load Balancing instance is
     * managing traffic for.</p>
     */
    inline ElasticLoadBalancer& WithEc2InstanceIds(const Aws::Vector<Aws::String>& value) { SetEc2InstanceIds(value); return *this;}

    /**
     * <p>A list of the EC2 instances that the Elastic Load Balancing instance is
     * managing traffic for.</p>
     */
    inline ElasticLoadBalancer& WithEc2InstanceIds(Aws::Vector<Aws::String>&& value) { SetEc2InstanceIds(std::move(value)); return *this;}

    /**
     * <p>A list of the EC2 instances that the Elastic Load Balancing instance is
     * managing traffic for.</p>
     */
    inline ElasticLoadBalancer& AddEc2InstanceIds(const Aws::String& value) { m_ec2InstanceIdsHasBeenSet = true; m_ec2InstanceIds.push_back(value); return *this; }

    /**
     * <p>A list of the EC2 instances that the Elastic Load Balancing instance is
     * managing traffic for.</p>
     */
    inline ElasticLoadBalancer& AddEc2InstanceIds(Aws::String&& value) { m_ec2InstanceIdsHasBeenSet = true; m_ec2InstanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the EC2 instances that the Elastic Load Balancing instance is
     * managing traffic for.</p>
     */
    inline ElasticLoadBalancer& AddEc2InstanceIds(const char* value) { m_ec2InstanceIdsHasBeenSet = true; m_ec2InstanceIds.push_back(value); return *this; }

  private:

    Aws::String m_elasticLoadBalancerName;
    bool m_elasticLoadBalancerNameHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_ec2InstanceIds;
    bool m_ec2InstanceIdsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
