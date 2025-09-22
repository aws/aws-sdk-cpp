/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/NodeRepairConfig.h>
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

NodeRepairConfig::NodeRepairConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeRepairConfig& NodeRepairConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxUnhealthyNodeThresholdCount"))
  {
    m_maxUnhealthyNodeThresholdCount = jsonValue.GetInteger("maxUnhealthyNodeThresholdCount");
    m_maxUnhealthyNodeThresholdCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxUnhealthyNodeThresholdPercentage"))
  {
    m_maxUnhealthyNodeThresholdPercentage = jsonValue.GetInteger("maxUnhealthyNodeThresholdPercentage");
    m_maxUnhealthyNodeThresholdPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxParallelNodesRepairedCount"))
  {
    m_maxParallelNodesRepairedCount = jsonValue.GetInteger("maxParallelNodesRepairedCount");
    m_maxParallelNodesRepairedCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxParallelNodesRepairedPercentage"))
  {
    m_maxParallelNodesRepairedPercentage = jsonValue.GetInteger("maxParallelNodesRepairedPercentage");
    m_maxParallelNodesRepairedPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeRepairConfigOverrides"))
  {
    Aws::Utils::Array<JsonView> nodeRepairConfigOverridesJsonList = jsonValue.GetArray("nodeRepairConfigOverrides");
    for(unsigned nodeRepairConfigOverridesIndex = 0; nodeRepairConfigOverridesIndex < nodeRepairConfigOverridesJsonList.GetLength(); ++nodeRepairConfigOverridesIndex)
    {
      m_nodeRepairConfigOverrides.push_back(nodeRepairConfigOverridesJsonList[nodeRepairConfigOverridesIndex].AsObject());
    }
    m_nodeRepairConfigOverridesHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeRepairConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_maxUnhealthyNodeThresholdCountHasBeenSet)
  {
   payload.WithInteger("maxUnhealthyNodeThresholdCount", m_maxUnhealthyNodeThresholdCount);

  }

  if(m_maxUnhealthyNodeThresholdPercentageHasBeenSet)
  {
   payload.WithInteger("maxUnhealthyNodeThresholdPercentage", m_maxUnhealthyNodeThresholdPercentage);

  }

  if(m_maxParallelNodesRepairedCountHasBeenSet)
  {
   payload.WithInteger("maxParallelNodesRepairedCount", m_maxParallelNodesRepairedCount);

  }

  if(m_maxParallelNodesRepairedPercentageHasBeenSet)
  {
   payload.WithInteger("maxParallelNodesRepairedPercentage", m_maxParallelNodesRepairedPercentage);

  }

  if(m_nodeRepairConfigOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodeRepairConfigOverridesJsonList(m_nodeRepairConfigOverrides.size());
   for(unsigned nodeRepairConfigOverridesIndex = 0; nodeRepairConfigOverridesIndex < nodeRepairConfigOverridesJsonList.GetLength(); ++nodeRepairConfigOverridesIndex)
   {
     nodeRepairConfigOverridesJsonList[nodeRepairConfigOverridesIndex].AsObject(m_nodeRepairConfigOverrides[nodeRepairConfigOverridesIndex].Jsonize());
   }
   payload.WithArray("nodeRepairConfigOverrides", std::move(nodeRepairConfigOverridesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
