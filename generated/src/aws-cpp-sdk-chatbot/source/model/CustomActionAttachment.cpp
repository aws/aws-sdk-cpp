/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/CustomActionAttachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace chatbot
{
namespace Model
{

CustomActionAttachment::CustomActionAttachment(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomActionAttachment& CustomActionAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotificationType"))
  {
    m_notificationType = jsonValue.GetString("NotificationType");
    m_notificationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ButtonText"))
  {
    m_buttonText = jsonValue.GetString("ButtonText");
    m_buttonTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Criteria"))
  {
    Aws::Utils::Array<JsonView> criteriaJsonList = jsonValue.GetArray("Criteria");
    for(unsigned criteriaIndex = 0; criteriaIndex < criteriaJsonList.GetLength(); ++criteriaIndex)
    {
      m_criteria.push_back(criteriaJsonList[criteriaIndex].AsObject());
    }
    m_criteriaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Variables"))
  {
    Aws::Map<Aws::String, JsonView> variablesJsonMap = jsonValue.GetObject("Variables").GetAllObjects();
    for(auto& variablesItem : variablesJsonMap)
    {
      m_variables[variablesItem.first] = variablesItem.second.AsString();
    }
    m_variablesHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomActionAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_notificationTypeHasBeenSet)
  {
   payload.WithString("NotificationType", m_notificationType);

  }

  if(m_buttonTextHasBeenSet)
  {
   payload.WithString("ButtonText", m_buttonText);

  }

  if(m_criteriaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> criteriaJsonList(m_criteria.size());
   for(unsigned criteriaIndex = 0; criteriaIndex < criteriaJsonList.GetLength(); ++criteriaIndex)
   {
     criteriaJsonList[criteriaIndex].AsObject(m_criteria[criteriaIndex].Jsonize());
   }
   payload.WithArray("Criteria", std::move(criteriaJsonList));

  }

  if(m_variablesHasBeenSet)
  {
   JsonValue variablesJsonMap;
   for(auto& variablesItem : m_variables)
   {
     variablesJsonMap.WithString(variablesItem.first, variablesItem.second);
   }
   payload.WithObject("Variables", std::move(variablesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws
