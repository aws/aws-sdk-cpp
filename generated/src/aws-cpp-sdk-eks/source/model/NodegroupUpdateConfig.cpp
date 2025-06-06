﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/NodegroupUpdateConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

NodegroupUpdateConfig::NodegroupUpdateConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

NodegroupUpdateConfig& NodegroupUpdateConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxUnavailable"))
  {
    m_maxUnavailable = jsonValue.GetInteger("maxUnavailable");
    m_maxUnavailableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxUnavailablePercentage"))
  {
    m_maxUnavailablePercentage = jsonValue.GetInteger("maxUnavailablePercentage");
    m_maxUnavailablePercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateStrategy"))
  {
    m_updateStrategy = NodegroupUpdateStrategiesMapper::GetNodegroupUpdateStrategiesForName(jsonValue.GetString("updateStrategy"));
    m_updateStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue NodegroupUpdateConfig::Jsonize() const
{
  JsonValue payload;

  if(m_maxUnavailableHasBeenSet)
  {
   payload.WithInteger("maxUnavailable", m_maxUnavailable);

  }

  if(m_maxUnavailablePercentageHasBeenSet)
  {
   payload.WithInteger("maxUnavailablePercentage", m_maxUnavailablePercentage);

  }

  if(m_updateStrategyHasBeenSet)
  {
   payload.WithString("updateStrategy", NodegroupUpdateStrategiesMapper::GetNameForNodegroupUpdateStrategies(m_updateStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
