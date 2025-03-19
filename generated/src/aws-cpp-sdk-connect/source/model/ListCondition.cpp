/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ListCondition::ListCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

ListCondition& ListCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetListType"))
  {
    m_targetListType = TargetListTypeMapper::GetTargetListTypeForName(jsonValue.GetString("TargetListType"));
    m_targetListTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Conditions"))
  {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("Conditions");
    for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
    {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListCondition::Jsonize() const
{
  JsonValue payload;

  if(m_targetListTypeHasBeenSet)
  {
   payload.WithString("TargetListType", TargetListTypeMapper::GetNameForTargetListType(m_targetListType));
  }

  if(m_conditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionsJsonList(m_conditions.size());
   for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
   {
     conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
   }
   payload.WithArray("Conditions", std::move(conditionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
