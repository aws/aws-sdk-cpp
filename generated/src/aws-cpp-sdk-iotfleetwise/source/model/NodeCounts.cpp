/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/NodeCounts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

NodeCounts::NodeCounts() : 
    m_totalNodes(0),
    m_totalNodesHasBeenSet(false),
    m_totalBranches(0),
    m_totalBranchesHasBeenSet(false),
    m_totalSensors(0),
    m_totalSensorsHasBeenSet(false),
    m_totalAttributes(0),
    m_totalAttributesHasBeenSet(false),
    m_totalActuators(0),
    m_totalActuatorsHasBeenSet(false)
{
}

NodeCounts::NodeCounts(JsonView jsonValue) : 
    m_totalNodes(0),
    m_totalNodesHasBeenSet(false),
    m_totalBranches(0),
    m_totalBranchesHasBeenSet(false),
    m_totalSensors(0),
    m_totalSensorsHasBeenSet(false),
    m_totalAttributes(0),
    m_totalAttributesHasBeenSet(false),
    m_totalActuators(0),
    m_totalActuatorsHasBeenSet(false)
{
  *this = jsonValue;
}

NodeCounts& NodeCounts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("totalNodes"))
  {
    m_totalNodes = jsonValue.GetInteger("totalNodes");

    m_totalNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalBranches"))
  {
    m_totalBranches = jsonValue.GetInteger("totalBranches");

    m_totalBranchesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalSensors"))
  {
    m_totalSensors = jsonValue.GetInteger("totalSensors");

    m_totalSensorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalAttributes"))
  {
    m_totalAttributes = jsonValue.GetInteger("totalAttributes");

    m_totalAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalActuators"))
  {
    m_totalActuators = jsonValue.GetInteger("totalActuators");

    m_totalActuatorsHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeCounts::Jsonize() const
{
  JsonValue payload;

  if(m_totalNodesHasBeenSet)
  {
   payload.WithInteger("totalNodes", m_totalNodes);

  }

  if(m_totalBranchesHasBeenSet)
  {
   payload.WithInteger("totalBranches", m_totalBranches);

  }

  if(m_totalSensorsHasBeenSet)
  {
   payload.WithInteger("totalSensors", m_totalSensors);

  }

  if(m_totalAttributesHasBeenSet)
  {
   payload.WithInteger("totalAttributes", m_totalAttributes);

  }

  if(m_totalActuatorsHasBeenSet)
  {
   payload.WithInteger("totalActuators", m_totalActuators);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
