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

#include <aws/kafka/model/BrokerNodeInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

BrokerNodeInfo::BrokerNodeInfo() : 
    m_attachedENIIdHasBeenSet(false),
    m_brokerId(0.0),
    m_brokerIdHasBeenSet(false),
    m_clientSubnetHasBeenSet(false),
    m_clientVpcIpAddressHasBeenSet(false),
    m_currentBrokerSoftwareInfoHasBeenSet(false),
    m_endpointsHasBeenSet(false)
{
}

BrokerNodeInfo::BrokerNodeInfo(JsonView jsonValue) : 
    m_attachedENIIdHasBeenSet(false),
    m_brokerId(0.0),
    m_brokerIdHasBeenSet(false),
    m_clientSubnetHasBeenSet(false),
    m_clientVpcIpAddressHasBeenSet(false),
    m_currentBrokerSoftwareInfoHasBeenSet(false),
    m_endpointsHasBeenSet(false)
{
  *this = jsonValue;
}

BrokerNodeInfo& BrokerNodeInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attachedENIId"))
  {
    m_attachedENIId = jsonValue.GetString("attachedENIId");

    m_attachedENIIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("brokerId"))
  {
    m_brokerId = jsonValue.GetDouble("brokerId");

    m_brokerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientSubnet"))
  {
    m_clientSubnet = jsonValue.GetString("clientSubnet");

    m_clientSubnetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientVpcIpAddress"))
  {
    m_clientVpcIpAddress = jsonValue.GetString("clientVpcIpAddress");

    m_clientVpcIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentBrokerSoftwareInfo"))
  {
    m_currentBrokerSoftwareInfo = jsonValue.GetObject("currentBrokerSoftwareInfo");

    m_currentBrokerSoftwareInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoints"))
  {
    Array<JsonView> endpointsJsonList = jsonValue.GetArray("endpoints");
    for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
    {
      m_endpoints.push_back(endpointsJsonList[endpointsIndex].AsString());
    }
    m_endpointsHasBeenSet = true;
  }

  return *this;
}

JsonValue BrokerNodeInfo::Jsonize() const
{
  JsonValue payload;

  if(m_attachedENIIdHasBeenSet)
  {
   payload.WithString("attachedENIId", m_attachedENIId);

  }

  if(m_brokerIdHasBeenSet)
  {
   payload.WithDouble("brokerId", m_brokerId);

  }

  if(m_clientSubnetHasBeenSet)
  {
   payload.WithString("clientSubnet", m_clientSubnet);

  }

  if(m_clientVpcIpAddressHasBeenSet)
  {
   payload.WithString("clientVpcIpAddress", m_clientVpcIpAddress);

  }

  if(m_currentBrokerSoftwareInfoHasBeenSet)
  {
   payload.WithObject("currentBrokerSoftwareInfo", m_currentBrokerSoftwareInfo.Jsonize());

  }

  if(m_endpointsHasBeenSet)
  {
   Array<JsonValue> endpointsJsonList(m_endpoints.size());
   for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
   {
     endpointsJsonList[endpointsIndex].AsString(m_endpoints[endpointsIndex]);
   }
   payload.WithArray("endpoints", std::move(endpointsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
