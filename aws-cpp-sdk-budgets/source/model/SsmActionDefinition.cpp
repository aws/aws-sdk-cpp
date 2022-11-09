/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/SsmActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

SsmActionDefinition::SsmActionDefinition() : 
    m_actionSubType(ActionSubType::NOT_SET),
    m_actionSubTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_instanceIdsHasBeenSet(false)
{
}

SsmActionDefinition::SsmActionDefinition(JsonView jsonValue) : 
    m_actionSubType(ActionSubType::NOT_SET),
    m_actionSubTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_instanceIdsHasBeenSet(false)
{
  *this = jsonValue;
}

SsmActionDefinition& SsmActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionSubType"))
  {
    m_actionSubType = ActionSubTypeMapper::GetActionSubTypeForName(jsonValue.GetString("ActionSubType"));

    m_actionSubTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceIds"))
  {
    Aws::Utils::Array<JsonView> instanceIdsJsonList = jsonValue.GetArray("InstanceIds");
    for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
    {
      m_instanceIds.push_back(instanceIdsJsonList[instanceIdsIndex].AsString());
    }
    m_instanceIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue SsmActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_actionSubTypeHasBeenSet)
  {
   payload.WithString("ActionSubType", ActionSubTypeMapper::GetNameForActionSubType(m_actionSubType));
  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_instanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceIdsJsonList(m_instanceIds.size());
   for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
   {
     instanceIdsJsonList[instanceIdsIndex].AsString(m_instanceIds[instanceIdsIndex]);
   }
   payload.WithArray("InstanceIds", std::move(instanceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
