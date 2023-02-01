/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceGroupConfig.h>
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

InstanceGroupConfig::InstanceGroupConfig() : 
    m_nameHasBeenSet(false),
    m_market(MarketType::NOT_SET),
    m_marketHasBeenSet(false),
    m_instanceRole(InstanceRoleType::NOT_SET),
    m_instanceRoleHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_configurationsHasBeenSet(false),
    m_ebsConfigurationHasBeenSet(false),
    m_autoScalingPolicyHasBeenSet(false),
    m_customAmiIdHasBeenSet(false)
{
}

InstanceGroupConfig::InstanceGroupConfig(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_market(MarketType::NOT_SET),
    m_marketHasBeenSet(false),
    m_instanceRole(InstanceRoleType::NOT_SET),
    m_instanceRoleHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_configurationsHasBeenSet(false),
    m_ebsConfigurationHasBeenSet(false),
    m_autoScalingPolicyHasBeenSet(false),
    m_customAmiIdHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceGroupConfig& InstanceGroupConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Market"))
  {
    m_market = MarketTypeMapper::GetMarketTypeForName(jsonValue.GetString("Market"));

    m_marketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceRole"))
  {
    m_instanceRole = InstanceRoleTypeMapper::GetInstanceRoleTypeForName(jsonValue.GetString("InstanceRole"));

    m_instanceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BidPrice"))
  {
    m_bidPrice = jsonValue.GetString("BidPrice");

    m_bidPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configurations"))
  {
    Aws::Utils::Array<JsonView> configurationsJsonList = jsonValue.GetArray("Configurations");
    for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
    {
      m_configurations.push_back(configurationsJsonList[configurationsIndex].AsObject());
    }
    m_configurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsConfiguration"))
  {
    m_ebsConfiguration = jsonValue.GetObject("EbsConfiguration");

    m_ebsConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingPolicy"))
  {
    m_autoScalingPolicy = jsonValue.GetObject("AutoScalingPolicy");

    m_autoScalingPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomAmiId"))
  {
    m_customAmiId = jsonValue.GetString("CustomAmiId");

    m_customAmiIdHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceGroupConfig::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_marketHasBeenSet)
  {
   payload.WithString("Market", MarketTypeMapper::GetNameForMarketType(m_market));
  }

  if(m_instanceRoleHasBeenSet)
  {
   payload.WithString("InstanceRole", InstanceRoleTypeMapper::GetNameForInstanceRoleType(m_instanceRole));
  }

  if(m_bidPriceHasBeenSet)
  {
   payload.WithString("BidPrice", m_bidPrice);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_configurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationsJsonList(m_configurations.size());
   for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
   {
     configurationsJsonList[configurationsIndex].AsObject(m_configurations[configurationsIndex].Jsonize());
   }
   payload.WithArray("Configurations", std::move(configurationsJsonList));

  }

  if(m_ebsConfigurationHasBeenSet)
  {
   payload.WithObject("EbsConfiguration", m_ebsConfiguration.Jsonize());

  }

  if(m_autoScalingPolicyHasBeenSet)
  {
   payload.WithObject("AutoScalingPolicy", m_autoScalingPolicy.Jsonize());

  }

  if(m_customAmiIdHasBeenSet)
  {
   payload.WithString("CustomAmiId", m_customAmiId);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
