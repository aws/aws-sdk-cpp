/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TaskTemplateConstraints.h>
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

TaskTemplateConstraints::TaskTemplateConstraints() : 
    m_requiredFieldsHasBeenSet(false),
    m_readOnlyFieldsHasBeenSet(false),
    m_invisibleFieldsHasBeenSet(false)
{
}

TaskTemplateConstraints::TaskTemplateConstraints(JsonView jsonValue) : 
    m_requiredFieldsHasBeenSet(false),
    m_readOnlyFieldsHasBeenSet(false),
    m_invisibleFieldsHasBeenSet(false)
{
  *this = jsonValue;
}

TaskTemplateConstraints& TaskTemplateConstraints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequiredFields"))
  {
    Aws::Utils::Array<JsonView> requiredFieldsJsonList = jsonValue.GetArray("RequiredFields");
    for(unsigned requiredFieldsIndex = 0; requiredFieldsIndex < requiredFieldsJsonList.GetLength(); ++requiredFieldsIndex)
    {
      m_requiredFields.push_back(requiredFieldsJsonList[requiredFieldsIndex].AsObject());
    }
    m_requiredFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadOnlyFields"))
  {
    Aws::Utils::Array<JsonView> readOnlyFieldsJsonList = jsonValue.GetArray("ReadOnlyFields");
    for(unsigned readOnlyFieldsIndex = 0; readOnlyFieldsIndex < readOnlyFieldsJsonList.GetLength(); ++readOnlyFieldsIndex)
    {
      m_readOnlyFields.push_back(readOnlyFieldsJsonList[readOnlyFieldsIndex].AsObject());
    }
    m_readOnlyFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvisibleFields"))
  {
    Aws::Utils::Array<JsonView> invisibleFieldsJsonList = jsonValue.GetArray("InvisibleFields");
    for(unsigned invisibleFieldsIndex = 0; invisibleFieldsIndex < invisibleFieldsJsonList.GetLength(); ++invisibleFieldsIndex)
    {
      m_invisibleFields.push_back(invisibleFieldsJsonList[invisibleFieldsIndex].AsObject());
    }
    m_invisibleFieldsHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskTemplateConstraints::Jsonize() const
{
  JsonValue payload;

  if(m_requiredFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiredFieldsJsonList(m_requiredFields.size());
   for(unsigned requiredFieldsIndex = 0; requiredFieldsIndex < requiredFieldsJsonList.GetLength(); ++requiredFieldsIndex)
   {
     requiredFieldsJsonList[requiredFieldsIndex].AsObject(m_requiredFields[requiredFieldsIndex].Jsonize());
   }
   payload.WithArray("RequiredFields", std::move(requiredFieldsJsonList));

  }

  if(m_readOnlyFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> readOnlyFieldsJsonList(m_readOnlyFields.size());
   for(unsigned readOnlyFieldsIndex = 0; readOnlyFieldsIndex < readOnlyFieldsJsonList.GetLength(); ++readOnlyFieldsIndex)
   {
     readOnlyFieldsJsonList[readOnlyFieldsIndex].AsObject(m_readOnlyFields[readOnlyFieldsIndex].Jsonize());
   }
   payload.WithArray("ReadOnlyFields", std::move(readOnlyFieldsJsonList));

  }

  if(m_invisibleFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> invisibleFieldsJsonList(m_invisibleFields.size());
   for(unsigned invisibleFieldsIndex = 0; invisibleFieldsIndex < invisibleFieldsJsonList.GetLength(); ++invisibleFieldsIndex)
   {
     invisibleFieldsJsonList[invisibleFieldsIndex].AsObject(m_invisibleFields[invisibleFieldsIndex].Jsonize());
   }
   payload.WithArray("InvisibleFields", std::move(invisibleFieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
