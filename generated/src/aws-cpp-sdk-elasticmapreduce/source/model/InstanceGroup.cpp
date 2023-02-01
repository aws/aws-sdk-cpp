/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceGroup.h>
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

InstanceGroup::InstanceGroup() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_market(MarketType::NOT_SET),
    m_marketHasBeenSet(false),
    m_instanceGroupType(InstanceGroupType::NOT_SET),
    m_instanceGroupTypeHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_requestedInstanceCount(0),
    m_requestedInstanceCountHasBeenSet(false),
    m_runningInstanceCount(0),
    m_runningInstanceCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_configurationsHasBeenSet(false),
    m_configurationsVersion(0),
    m_configurationsVersionHasBeenSet(false),
    m_lastSuccessfullyAppliedConfigurationsHasBeenSet(false),
    m_lastSuccessfullyAppliedConfigurationsVersion(0),
    m_lastSuccessfullyAppliedConfigurationsVersionHasBeenSet(false),
    m_ebsBlockDevicesHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_shrinkPolicyHasBeenSet(false),
    m_autoScalingPolicyHasBeenSet(false),
    m_customAmiIdHasBeenSet(false)
{
}

InstanceGroup::InstanceGroup(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_market(MarketType::NOT_SET),
    m_marketHasBeenSet(false),
    m_instanceGroupType(InstanceGroupType::NOT_SET),
    m_instanceGroupTypeHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_requestedInstanceCount(0),
    m_requestedInstanceCountHasBeenSet(false),
    m_runningInstanceCount(0),
    m_runningInstanceCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_configurationsHasBeenSet(false),
    m_configurationsVersion(0),
    m_configurationsVersionHasBeenSet(false),
    m_lastSuccessfullyAppliedConfigurationsHasBeenSet(false),
    m_lastSuccessfullyAppliedConfigurationsVersion(0),
    m_lastSuccessfullyAppliedConfigurationsVersionHasBeenSet(false),
    m_ebsBlockDevicesHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_shrinkPolicyHasBeenSet(false),
    m_autoScalingPolicyHasBeenSet(false),
    m_customAmiIdHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceGroup& InstanceGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("InstanceGroupType"))
  {
    m_instanceGroupType = InstanceGroupTypeMapper::GetInstanceGroupTypeForName(jsonValue.GetString("InstanceGroupType"));

    m_instanceGroupTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("RequestedInstanceCount"))
  {
    m_requestedInstanceCount = jsonValue.GetInteger("RequestedInstanceCount");

    m_requestedInstanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunningInstanceCount"))
  {
    m_runningInstanceCount = jsonValue.GetInteger("RunningInstanceCount");

    m_runningInstanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
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

  if(jsonValue.ValueExists("ConfigurationsVersion"))
  {
    m_configurationsVersion = jsonValue.GetInt64("ConfigurationsVersion");

    m_configurationsVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfullyAppliedConfigurations"))
  {
    Aws::Utils::Array<JsonView> lastSuccessfullyAppliedConfigurationsJsonList = jsonValue.GetArray("LastSuccessfullyAppliedConfigurations");
    for(unsigned lastSuccessfullyAppliedConfigurationsIndex = 0; lastSuccessfullyAppliedConfigurationsIndex < lastSuccessfullyAppliedConfigurationsJsonList.GetLength(); ++lastSuccessfullyAppliedConfigurationsIndex)
    {
      m_lastSuccessfullyAppliedConfigurations.push_back(lastSuccessfullyAppliedConfigurationsJsonList[lastSuccessfullyAppliedConfigurationsIndex].AsObject());
    }
    m_lastSuccessfullyAppliedConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfullyAppliedConfigurationsVersion"))
  {
    m_lastSuccessfullyAppliedConfigurationsVersion = jsonValue.GetInt64("LastSuccessfullyAppliedConfigurationsVersion");

    m_lastSuccessfullyAppliedConfigurationsVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsBlockDevices"))
  {
    Aws::Utils::Array<JsonView> ebsBlockDevicesJsonList = jsonValue.GetArray("EbsBlockDevices");
    for(unsigned ebsBlockDevicesIndex = 0; ebsBlockDevicesIndex < ebsBlockDevicesJsonList.GetLength(); ++ebsBlockDevicesIndex)
    {
      m_ebsBlockDevices.push_back(ebsBlockDevicesJsonList[ebsBlockDevicesIndex].AsObject());
    }
    m_ebsBlockDevicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsOptimized"))
  {
    m_ebsOptimized = jsonValue.GetBool("EbsOptimized");

    m_ebsOptimizedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShrinkPolicy"))
  {
    m_shrinkPolicy = jsonValue.GetObject("ShrinkPolicy");

    m_shrinkPolicyHasBeenSet = true;
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

JsonValue InstanceGroup::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_marketHasBeenSet)
  {
   payload.WithString("Market", MarketTypeMapper::GetNameForMarketType(m_market));
  }

  if(m_instanceGroupTypeHasBeenSet)
  {
   payload.WithString("InstanceGroupType", InstanceGroupTypeMapper::GetNameForInstanceGroupType(m_instanceGroupType));
  }

  if(m_bidPriceHasBeenSet)
  {
   payload.WithString("BidPrice", m_bidPrice);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_requestedInstanceCountHasBeenSet)
  {
   payload.WithInteger("RequestedInstanceCount", m_requestedInstanceCount);

  }

  if(m_runningInstanceCountHasBeenSet)
  {
   payload.WithInteger("RunningInstanceCount", m_runningInstanceCount);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

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

  if(m_configurationsVersionHasBeenSet)
  {
   payload.WithInt64("ConfigurationsVersion", m_configurationsVersion);

  }

  if(m_lastSuccessfullyAppliedConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lastSuccessfullyAppliedConfigurationsJsonList(m_lastSuccessfullyAppliedConfigurations.size());
   for(unsigned lastSuccessfullyAppliedConfigurationsIndex = 0; lastSuccessfullyAppliedConfigurationsIndex < lastSuccessfullyAppliedConfigurationsJsonList.GetLength(); ++lastSuccessfullyAppliedConfigurationsIndex)
   {
     lastSuccessfullyAppliedConfigurationsJsonList[lastSuccessfullyAppliedConfigurationsIndex].AsObject(m_lastSuccessfullyAppliedConfigurations[lastSuccessfullyAppliedConfigurationsIndex].Jsonize());
   }
   payload.WithArray("LastSuccessfullyAppliedConfigurations", std::move(lastSuccessfullyAppliedConfigurationsJsonList));

  }

  if(m_lastSuccessfullyAppliedConfigurationsVersionHasBeenSet)
  {
   payload.WithInt64("LastSuccessfullyAppliedConfigurationsVersion", m_lastSuccessfullyAppliedConfigurationsVersion);

  }

  if(m_ebsBlockDevicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ebsBlockDevicesJsonList(m_ebsBlockDevices.size());
   for(unsigned ebsBlockDevicesIndex = 0; ebsBlockDevicesIndex < ebsBlockDevicesJsonList.GetLength(); ++ebsBlockDevicesIndex)
   {
     ebsBlockDevicesJsonList[ebsBlockDevicesIndex].AsObject(m_ebsBlockDevices[ebsBlockDevicesIndex].Jsonize());
   }
   payload.WithArray("EbsBlockDevices", std::move(ebsBlockDevicesJsonList));

  }

  if(m_ebsOptimizedHasBeenSet)
  {
   payload.WithBool("EbsOptimized", m_ebsOptimized);

  }

  if(m_shrinkPolicyHasBeenSet)
  {
   payload.WithObject("ShrinkPolicy", m_shrinkPolicy.Jsonize());

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
