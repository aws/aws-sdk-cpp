/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/model/InstanceGroupConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InstanceGroupConfig::InstanceGroupConfig() : 
    m_nameHasBeenSet(false),
    m_marketHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_instanceCount(0)
{
}

InstanceGroupConfig::InstanceGroupConfig(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_marketHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_instanceCount(0)
{
  *this = jsonValue;
}

InstanceGroupConfig& InstanceGroupConfig::operator =(const JsonValue& jsonValue)
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

  m_instanceRole = InstanceRoleTypeMapper::GetInstanceRoleTypeForName(jsonValue.GetString("InstanceRole"));

  if(jsonValue.ValueExists("BidPrice"))
  {
    m_bidPrice = jsonValue.GetString("BidPrice");

    m_bidPriceHasBeenSet = true;
  }

  m_instanceType = jsonValue.GetString("InstanceType");

  m_instanceCount = jsonValue.GetInteger("InstanceCount");

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

  payload.WithString("InstanceRole", InstanceRoleTypeMapper::GetNameForInstanceRoleType(m_instanceRole));
  if(m_bidPriceHasBeenSet)
  {
   payload.WithString("BidPrice", m_bidPrice);

  }

  payload.WithString("InstanceType", m_instanceType);

  payload.WithInteger("InstanceCount", m_instanceCount);

  return std::move(payload);
}