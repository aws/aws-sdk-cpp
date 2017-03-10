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
    m_configurationsHasBeenSet(false)
{
}

InstanceTypeConfig::InstanceTypeConfig(const JsonValue& jsonValue) : 
    m_instanceTypeHasBeenSet(false),
    m_weightedCapacity(0),
    m_weightedCapacityHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_bidPriceAsPercentageOfOnDemandPrice(0.0),
    m_bidPriceAsPercentageOfOnDemandPriceHasBeenSet(false),
    m_ebsConfigurationHasBeenSet(false),
    m_configurationsHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceTypeConfig& InstanceTypeConfig::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> configurationsJsonList = jsonValue.GetArray("Configurations");
    for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
    {
      m_configurations.push_back(configurationsJsonList[configurationsIndex].AsObject());
    }
    m_configurationsHasBeenSet = true;
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
   Array<JsonValue> configurationsJsonList(m_configurations.size());
   for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
   {
     configurationsJsonList[configurationsIndex].AsObject(m_configurations[configurationsIndex].Jsonize());
   }
   payload.WithArray("Configurations", std::move(configurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws