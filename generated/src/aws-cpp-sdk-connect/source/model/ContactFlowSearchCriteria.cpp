/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlowSearchCriteria.h>
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

ContactFlowSearchCriteria::ContactFlowSearchCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

ContactFlowSearchCriteria& ContactFlowSearchCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrConditions"))
  {
    Aws::Utils::Array<JsonView> orConditionsJsonList = jsonValue.GetArray("OrConditions");
    for(unsigned orConditionsIndex = 0; orConditionsIndex < orConditionsJsonList.GetLength(); ++orConditionsIndex)
    {
      m_orConditions.push_back(orConditionsJsonList[orConditionsIndex].AsObject());
    }
    m_orConditionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AndConditions"))
  {
    Aws::Utils::Array<JsonView> andConditionsJsonList = jsonValue.GetArray("AndConditions");
    for(unsigned andConditionsIndex = 0; andConditionsIndex < andConditionsJsonList.GetLength(); ++andConditionsIndex)
    {
      m_andConditions.push_back(andConditionsJsonList[andConditionsIndex].AsObject());
    }
    m_andConditionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StringCondition"))
  {
    m_stringCondition = jsonValue.GetObject("StringCondition");
    m_stringConditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TypeCondition"))
  {
    m_typeCondition = ContactFlowTypeMapper::GetContactFlowTypeForName(jsonValue.GetString("TypeCondition"));
    m_typeConditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateCondition"))
  {
    m_stateCondition = ContactFlowStateMapper::GetContactFlowStateForName(jsonValue.GetString("StateCondition"));
    m_stateConditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusCondition"))
  {
    m_statusCondition = ContactFlowStatusMapper::GetContactFlowStatusForName(jsonValue.GetString("StatusCondition"));
    m_statusConditionHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactFlowSearchCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_orConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orConditionsJsonList(m_orConditions.size());
   for(unsigned orConditionsIndex = 0; orConditionsIndex < orConditionsJsonList.GetLength(); ++orConditionsIndex)
   {
     orConditionsJsonList[orConditionsIndex].AsObject(m_orConditions[orConditionsIndex].Jsonize());
   }
   payload.WithArray("OrConditions", std::move(orConditionsJsonList));

  }

  if(m_andConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> andConditionsJsonList(m_andConditions.size());
   for(unsigned andConditionsIndex = 0; andConditionsIndex < andConditionsJsonList.GetLength(); ++andConditionsIndex)
   {
     andConditionsJsonList[andConditionsIndex].AsObject(m_andConditions[andConditionsIndex].Jsonize());
   }
   payload.WithArray("AndConditions", std::move(andConditionsJsonList));

  }

  if(m_stringConditionHasBeenSet)
  {
   payload.WithObject("StringCondition", m_stringCondition.Jsonize());

  }

  if(m_typeConditionHasBeenSet)
  {
   payload.WithString("TypeCondition", ContactFlowTypeMapper::GetNameForContactFlowType(m_typeCondition));
  }

  if(m_stateConditionHasBeenSet)
  {
   payload.WithString("StateCondition", ContactFlowStateMapper::GetNameForContactFlowState(m_stateCondition));
  }

  if(m_statusConditionHasBeenSet)
  {
   payload.WithString("StatusCondition", ContactFlowStatusMapper::GetNameForContactFlowStatus(m_statusCondition));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
