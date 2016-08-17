/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/ElasticLoadBalancer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

ElasticLoadBalancer::ElasticLoadBalancer() : 
    m_elasticLoadBalancerNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_layerIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_ec2InstanceIdsHasBeenSet(false)
{
}

ElasticLoadBalancer::ElasticLoadBalancer(const JsonValue& jsonValue) : 
    m_elasticLoadBalancerNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_layerIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_ec2InstanceIdsHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticLoadBalancer& ElasticLoadBalancer::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ElasticLoadBalancerName"))
  {
    m_elasticLoadBalancerName = jsonValue.GetString("ElasticLoadBalancerName");

    m_elasticLoadBalancerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsName"))
  {
    m_dnsName = jsonValue.GetString("DnsName");

    m_dnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");

    m_stackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LayerId"))
  {
    m_layerId = jsonValue.GetString("LayerId");

    m_layerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZones"))
  {
    Array<JsonValue> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetIds"))
  {
    Array<JsonValue> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2InstanceIds"))
  {
    Array<JsonValue> ec2InstanceIdsJsonList = jsonValue.GetArray("Ec2InstanceIds");
    for(unsigned ec2InstanceIdsIndex = 0; ec2InstanceIdsIndex < ec2InstanceIdsJsonList.GetLength(); ++ec2InstanceIdsIndex)
    {
      m_ec2InstanceIds.push_back(ec2InstanceIdsJsonList[ec2InstanceIdsIndex].AsString());
    }
    m_ec2InstanceIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue ElasticLoadBalancer::Jsonize() const
{
  JsonValue payload;

  if(m_elasticLoadBalancerNameHasBeenSet)
  {
   payload.WithString("ElasticLoadBalancerName", m_elasticLoadBalancerName);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_dnsNameHasBeenSet)
  {
   payload.WithString("DnsName", m_dnsName);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_layerIdHasBeenSet)
  {
   payload.WithString("LayerId", m_layerId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_availabilityZonesHasBeenSet)
  {
   Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_subnetIdsHasBeenSet)
  {
   Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_ec2InstanceIdsHasBeenSet)
  {
   Array<JsonValue> ec2InstanceIdsJsonList(m_ec2InstanceIds.size());
   for(unsigned ec2InstanceIdsIndex = 0; ec2InstanceIdsIndex < ec2InstanceIdsJsonList.GetLength(); ++ec2InstanceIdsIndex)
   {
     ec2InstanceIdsJsonList[ec2InstanceIdsIndex].AsString(m_ec2InstanceIds[ec2InstanceIdsIndex]);
   }
   payload.WithArray("Ec2InstanceIds", std::move(ec2InstanceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws