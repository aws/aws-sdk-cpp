/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceTypeConfig.h>
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

InstanceTypeConfig::InstanceTypeConfig() : 
    m_instanceTypeHasBeenSet(false),
    m_weightedCapacity(0),
    m_weightedCapacityHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_bidPriceAsPercentageOfOnDemandPrice(0.0),
    m_bidPriceAsPercentageOfOnDemandPriceHasBeenSet(false),
    m_ebsConfigurationHasBeenSet(false),
    m_configurationsHasBeenSet(false),
    m_customAmiIdHasBeenSet(false)
{
}

InstanceTypeConfig::InstanceTypeConfig(JsonView jsonValue) : 
    m_instanceTypeHasBeenSet(false),
    m_weightedCapacity(0),
    m_weightedCapacityHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_bidPriceAsPercentageOfOnDemandPrice(0.0),
    m_bidPriceAsPercentageOfOnDemandPriceHasBeenSet(false),
    m_ebsConfigurationHasBeenSet(false),
    m_configurationsHasBeenSet(false),
    m_customAmiIdHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceTypeConfig& InstanceTypeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WeightedCapacity"))
  {
    m_weightedCapacity = jsonValue.GetInteger("WeightedCapacity");

    m_weightedCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BidPrice"))
  {
    m_bidPrice = jsonValue.GetString("BidPrice");

    m_bidPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BidPriceAsPercentageOfOnDemandPrice"))
  {
    m_bidPriceAsPercentageOfOnDemandPrice = jsonValue.GetDouble("BidPriceAsPercentageOfOnDemandPrice");

    m_bidPriceAsPercentageOfOnDemandPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsConfiguration"))
  {
    m_ebsConfiguration = jsonValue.GetObject("EbsConfiguration");

    m_ebsConfigurationHasBeenSet = true;
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

  if(jsonValue.ValueExists("CustomAmiId"))
  {
    m_customAmiId = jsonValue.GetString("CustomAmiId");

    m_customAmiIdHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceTypeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_weightedCapacityHasBeenSet)
  {
   payload.WithInteger("WeightedCapacity", m_weightedCapacity);

  }

  if(m_bidPriceHasBeenSet)
  {
   payload.WithString("BidPrice", m_bidPrice);

  }

  if(m_bidPriceAsPercentageOfOnDemandPriceHasBeenSet)
  {
   payload.WithDouble("BidPriceAsPercentageOfOnDemandPrice", m_bidPriceAsPercentageOfOnDemandPrice);

  }

  if(m_ebsConfigurationHasBeenSet)
  {
   payload.WithObject("EbsConfiguration", m_ebsConfiguration.Jsonize());

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

  if(m_customAmiIdHasBeenSet)
  {
   payload.WithString("CustomAmiId", m_customAmiId);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
