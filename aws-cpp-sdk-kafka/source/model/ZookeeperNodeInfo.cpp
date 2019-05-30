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

#include <aws/kafka/model/ZookeeperNodeInfo.h>
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

ZookeeperNodeInfo::ZookeeperNodeInfo() : 
    m_attachedENIIdHasBeenSet(false),
    m_clientVpcIpAddressHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_zookeeperId(0.0),
    m_zookeeperIdHasBeenSet(false),
    m_zookeeperVersionHasBeenSet(false)
{
}

ZookeeperNodeInfo::ZookeeperNodeInfo(JsonView jsonValue) : 
    m_attachedENIIdHasBeenSet(false),
    m_clientVpcIpAddressHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_zookeeperId(0.0),
    m_zookeeperIdHasBeenSet(false),
    m_zookeeperVersionHasBeenSet(false)
{
  *this = jsonValue;
}

ZookeeperNodeInfo& ZookeeperNodeInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attachedENIId"))
  {
    m_attachedENIId = jsonValue.GetString("attachedENIId");

    m_attachedENIIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientVpcIpAddress"))
  {
    m_clientVpcIpAddress = jsonValue.GetString("clientVpcIpAddress");

    m_clientVpcIpAddressHasBeenSet = true;
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

  if(jsonValue.ValueExists("zookeeperId"))
  {
    m_zookeeperId = jsonValue.GetDouble("zookeeperId");

    m_zookeeperIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("zookeeperVersion"))
  {
    m_zookeeperVersion = jsonValue.GetString("zookeeperVersion");

    m_zookeeperVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue ZookeeperNodeInfo::Jsonize() const
{
  JsonValue payload;

  if(m_attachedENIIdHasBeenSet)
  {
   payload.WithString("attachedENIId", m_attachedENIId);

  }

  if(m_clientVpcIpAddressHasBeenSet)
  {
   payload.WithString("clientVpcIpAddress", m_clientVpcIpAddress);

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

  if(m_zookeeperIdHasBeenSet)
  {
   payload.WithDouble("zookeeperId", m_zookeeperId);

  }

  if(m_zookeeperVersionHasBeenSet)
  {
   payload.WithString("zookeeperVersion", m_zookeeperVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
