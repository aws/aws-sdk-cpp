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

#include <aws/elasticmapreduce/model/ScalingAction.h>
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

ScalingAction::ScalingAction() : 
    m_market(MarketType::NOT_SET),
    m_marketHasBeenSet(false),
    m_simpleScalingPolicyConfigurationHasBeenSet(false)
{
}

ScalingAction::ScalingAction(const JsonValue& jsonValue) : 
    m_market(MarketType::NOT_SET),
    m_marketHasBeenSet(false),
    m_simpleScalingPolicyConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ScalingAction& ScalingAction::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Market"))
  {
    m_market = MarketTypeMapper::GetMarketTypeForName(jsonValue.GetString("Market"));

    m_marketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SimpleScalingPolicyConfiguration"))
  {
    m_simpleScalingPolicyConfiguration = jsonValue.GetObject("SimpleScalingPolicyConfiguration");

    m_simpleScalingPolicyConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ScalingAction::Jsonize() const
{
  JsonValue payload;

  if(m_marketHasBeenSet)
  {
   payload.WithString("Market", MarketTypeMapper::GetNameForMarketType(m_market));
  }

  if(m_simpleScalingPolicyConfigurationHasBeenSet)
  {
   payload.WithObject("SimpleScalingPolicyConfiguration", m_simpleScalingPolicyConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws