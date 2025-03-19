/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/LFTagPolicyResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

LFTagPolicyResource::LFTagPolicyResource(JsonView jsonValue)
{
  *this = jsonValue;
}

LFTagPolicyResource& LFTagPolicyResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogId"))
  {
    m_catalogId = jsonValue.GetString("CatalogId");
    m_catalogIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Expression"))
  {
    Aws::Utils::Array<JsonView> expressionJsonList = jsonValue.GetArray("Expression");
    for(unsigned expressionIndex = 0; expressionIndex < expressionJsonList.GetLength(); ++expressionIndex)
    {
      m_expression.push_back(expressionJsonList[expressionIndex].AsObject());
    }
    m_expressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpressionName"))
  {
    m_expressionName = jsonValue.GetString("ExpressionName");
    m_expressionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue LFTagPolicyResource::Jsonize() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_expressionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> expressionJsonList(m_expression.size());
   for(unsigned expressionIndex = 0; expressionIndex < expressionJsonList.GetLength(); ++expressionIndex)
   {
     expressionJsonList[expressionIndex].AsObject(m_expression[expressionIndex].Jsonize());
   }
   payload.WithArray("Expression", std::move(expressionJsonList));

  }

  if(m_expressionNameHasBeenSet)
  {
   payload.WithString("ExpressionName", m_expressionName);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
