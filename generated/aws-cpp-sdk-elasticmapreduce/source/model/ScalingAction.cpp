/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ScalingAction::ScalingAction(JsonView jsonValue) : 
    m_market(MarketType::NOT_SET),
    m_marketHasBeenSet(false),
    m_simpleScalingPolicyConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ScalingAction& ScalingAction::operator =(JsonView jsonValue)
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
