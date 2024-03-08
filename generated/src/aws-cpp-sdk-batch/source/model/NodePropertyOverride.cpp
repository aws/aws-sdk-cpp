/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/NodePropertyOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

NodePropertyOverride::NodePropertyOverride() : 
    m_targetNodesHasBeenSet(false),
    m_containerOverridesHasBeenSet(false),
    m_ecsPropertiesOverrideHasBeenSet(false),
    m_instanceTypesHasBeenSet(false)
{
}

NodePropertyOverride::NodePropertyOverride(JsonView jsonValue) : 
    m_targetNodesHasBeenSet(false),
    m_containerOverridesHasBeenSet(false),
    m_ecsPropertiesOverrideHasBeenSet(false),
    m_instanceTypesHasBeenSet(false)
{
  *this = jsonValue;
}

NodePropertyOverride& NodePropertyOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetNodes"))
  {
    m_targetNodes = jsonValue.GetString("targetNodes");

    m_targetNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerOverrides"))
  {
    m_containerOverrides = jsonValue.GetObject("containerOverrides");

    m_containerOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecsPropertiesOverride"))
  {
    m_ecsPropertiesOverride = jsonValue.GetObject("ecsPropertiesOverride");

    m_ecsPropertiesOverrideHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceTypes"))
  {
    Aws::Utils::Array<JsonView> instanceTypesJsonList = jsonValue.GetArray("instanceTypes");
    for(unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex)
    {
      m_instanceTypes.push_back(instanceTypesJsonList[instanceTypesIndex].AsString());
    }
    m_instanceTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue NodePropertyOverride::Jsonize() const
{
  JsonValue payload;

  if(m_targetNodesHasBeenSet)
  {
   payload.WithString("targetNodes", m_targetNodes);

  }

  if(m_containerOverridesHasBeenSet)
  {
   payload.WithObject("containerOverrides", m_containerOverrides.Jsonize());

  }

  if(m_ecsPropertiesOverrideHasBeenSet)
  {
   payload.WithObject("ecsPropertiesOverride", m_ecsPropertiesOverride.Jsonize());

  }

  if(m_instanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceTypesJsonList(m_instanceTypes.size());
   for(unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex)
   {
     instanceTypesJsonList[instanceTypesIndex].AsString(m_instanceTypes[instanceTypesIndex]);
   }
   payload.WithArray("instanceTypes", std::move(instanceTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
