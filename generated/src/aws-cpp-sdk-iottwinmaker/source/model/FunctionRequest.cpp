/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/FunctionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

FunctionRequest::FunctionRequest() : 
    m_requiredPropertiesHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_implementedByHasBeenSet(false)
{
}

FunctionRequest::FunctionRequest(JsonView jsonValue) : 
    m_requiredPropertiesHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_implementedByHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionRequest& FunctionRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("requiredProperties"))
  {
    Aws::Utils::Array<JsonView> requiredPropertiesJsonList = jsonValue.GetArray("requiredProperties");
    for(unsigned requiredPropertiesIndex = 0; requiredPropertiesIndex < requiredPropertiesJsonList.GetLength(); ++requiredPropertiesIndex)
    {
      m_requiredProperties.push_back(requiredPropertiesJsonList[requiredPropertiesIndex].AsString());
    }
    m_requiredPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scope"))
  {
    m_scope = ScopeMapper::GetScopeForName(jsonValue.GetString("scope"));

    m_scopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("implementedBy"))
  {
    m_implementedBy = jsonValue.GetObject("implementedBy");

    m_implementedByHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionRequest::Jsonize() const
{
  JsonValue payload;

  if(m_requiredPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiredPropertiesJsonList(m_requiredProperties.size());
   for(unsigned requiredPropertiesIndex = 0; requiredPropertiesIndex < requiredPropertiesJsonList.GetLength(); ++requiredPropertiesIndex)
   {
     requiredPropertiesJsonList[requiredPropertiesIndex].AsString(m_requiredProperties[requiredPropertiesIndex]);
   }
   payload.WithArray("requiredProperties", std::move(requiredPropertiesJsonList));

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if(m_implementedByHasBeenSet)
  {
   payload.WithObject("implementedBy", m_implementedBy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
