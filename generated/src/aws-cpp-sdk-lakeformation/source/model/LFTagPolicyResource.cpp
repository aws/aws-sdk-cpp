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

LFTagPolicyResource::LFTagPolicyResource() : 
    m_catalogIdHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

LFTagPolicyResource::LFTagPolicyResource(JsonView jsonValue) : 
    m_catalogIdHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_expressionHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
