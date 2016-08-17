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
#include <aws/elasticmapreduce/model/Instance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

Instance::Instance() : 
    m_idHasBeenSet(false),
    m_ec2InstanceIdHasBeenSet(false),
    m_publicDnsNameHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false),
    m_ebsVolumesHasBeenSet(false)
{
}

Instance::Instance(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_ec2InstanceIdHasBeenSet(false),
    m_publicDnsNameHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false),
    m_ebsVolumesHasBeenSet(false)
{
  *this = jsonValue;
}

Instance& Instance::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2InstanceId"))
  {
    m_ec2InstanceId = jsonValue.GetString("Ec2InstanceId");

    m_ec2InstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicDnsName"))
  {
    m_publicDnsName = jsonValue.GetString("PublicDnsName");

    m_publicDnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicIpAddress"))
  {
    m_publicIpAddress = jsonValue.GetString("PublicIpAddress");

    m_publicIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateDnsName"))
  {
    m_privateDnsName = jsonValue.GetString("PrivateDnsName");

    m_privateDnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("PrivateIpAddress");

    m_privateIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceGroupId"))
  {
    m_instanceGroupId = jsonValue.GetString("InstanceGroupId");

    m_instanceGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsVolumes"))
  {
    Array<JsonValue> ebsVolumesJsonList = jsonValue.GetArray("EbsVolumes");
    for(unsigned ebsVolumesIndex = 0; ebsVolumesIndex < ebsVolumesJsonList.GetLength(); ++ebsVolumesIndex)
    {
      m_ebsVolumes.push_back(ebsVolumesJsonList[ebsVolumesIndex].AsObject());
    }
    m_ebsVolumesHasBeenSet = true;
  }

  return *this;
}

JsonValue Instance::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_ec2InstanceIdHasBeenSet)
  {
   payload.WithString("Ec2InstanceId", m_ec2InstanceId);

  }

  if(m_publicDnsNameHasBeenSet)
  {
   payload.WithString("PublicDnsName", m_publicDnsName);

  }

  if(m_publicIpAddressHasBeenSet)
  {
   payload.WithString("PublicIpAddress", m_publicIpAddress);

  }

  if(m_privateDnsNameHasBeenSet)
  {
   payload.WithString("PrivateDnsName", m_privateDnsName);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("PrivateIpAddress", m_privateIpAddress);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_instanceGroupIdHasBeenSet)
  {
   payload.WithString("InstanceGroupId", m_instanceGroupId);

  }

  if(m_ebsVolumesHasBeenSet)
  {
   Array<JsonValue> ebsVolumesJsonList(m_ebsVolumes.size());
   for(unsigned ebsVolumesIndex = 0; ebsVolumesIndex < ebsVolumesJsonList.GetLength(); ++ebsVolumesIndex)
   {
     ebsVolumesJsonList[ebsVolumesIndex].AsObject(m_ebsVolumes[ebsVolumesIndex].Jsonize());
   }
   payload.WithArray("EbsVolumes", std::move(ebsVolumesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws