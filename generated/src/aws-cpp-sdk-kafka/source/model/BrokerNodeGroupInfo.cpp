/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/BrokerNodeGroupInfo.h>
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

BrokerNodeGroupInfo::BrokerNodeGroupInfo() : 
    m_brokerAZDistribution(BrokerAZDistribution::NOT_SET),
    m_brokerAZDistributionHasBeenSet(false),
    m_clientSubnetsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_storageInfoHasBeenSet(false),
    m_connectivityInfoHasBeenSet(false),
    m_zoneIdsHasBeenSet(false)
{
}

BrokerNodeGroupInfo::BrokerNodeGroupInfo(JsonView jsonValue) : 
    m_brokerAZDistribution(BrokerAZDistribution::NOT_SET),
    m_brokerAZDistributionHasBeenSet(false),
    m_clientSubnetsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_storageInfoHasBeenSet(false),
    m_connectivityInfoHasBeenSet(false),
    m_zoneIdsHasBeenSet(false)
{
  *this = jsonValue;
}

BrokerNodeGroupInfo& BrokerNodeGroupInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("brokerAZDistribution"))
  {
    m_brokerAZDistribution = BrokerAZDistributionMapper::GetBrokerAZDistributionForName(jsonValue.GetString("brokerAZDistribution"));

    m_brokerAZDistributionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientSubnets"))
  {
    Aws::Utils::Array<JsonView> clientSubnetsJsonList = jsonValue.GetArray("clientSubnets");
    for(unsigned clientSubnetsIndex = 0; clientSubnetsIndex < clientSubnetsJsonList.GetLength(); ++clientSubnetsIndex)
    {
      m_clientSubnets.push_back(clientSubnetsJsonList[clientSubnetsIndex].AsString());
    }
    m_clientSubnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageInfo"))
  {
    m_storageInfo = jsonValue.GetObject("storageInfo");

    m_storageInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectivityInfo"))
  {
    m_connectivityInfo = jsonValue.GetObject("connectivityInfo");

    m_connectivityInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("zoneIds"))
  {
    Aws::Utils::Array<JsonView> zoneIdsJsonList = jsonValue.GetArray("zoneIds");
    for(unsigned zoneIdsIndex = 0; zoneIdsIndex < zoneIdsJsonList.GetLength(); ++zoneIdsIndex)
    {
      m_zoneIds.push_back(zoneIdsJsonList[zoneIdsIndex].AsString());
    }
    m_zoneIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue BrokerNodeGroupInfo::Jsonize() const
{
  JsonValue payload;

  if(m_brokerAZDistributionHasBeenSet)
  {
   payload.WithString("brokerAZDistribution", BrokerAZDistributionMapper::GetNameForBrokerAZDistribution(m_brokerAZDistribution));
  }

  if(m_clientSubnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clientSubnetsJsonList(m_clientSubnets.size());
   for(unsigned clientSubnetsIndex = 0; clientSubnetsIndex < clientSubnetsJsonList.GetLength(); ++clientSubnetsIndex)
   {
     clientSubnetsJsonList[clientSubnetsIndex].AsString(m_clientSubnets[clientSubnetsIndex]);
   }
   payload.WithArray("clientSubnets", std::move(clientSubnetsJsonList));

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("securityGroups", std::move(securityGroupsJsonList));

  }

  if(m_storageInfoHasBeenSet)
  {
   payload.WithObject("storageInfo", m_storageInfo.Jsonize());

  }

  if(m_connectivityInfoHasBeenSet)
  {
   payload.WithObject("connectivityInfo", m_connectivityInfo.Jsonize());

  }

  if(m_zoneIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> zoneIdsJsonList(m_zoneIds.size());
   for(unsigned zoneIdsIndex = 0; zoneIdsIndex < zoneIdsJsonList.GetLength(); ++zoneIdsIndex)
   {
     zoneIdsJsonList[zoneIdsIndex].AsString(m_zoneIds[zoneIdsIndex]);
   }
   payload.WithArray("zoneIds", std::move(zoneIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
