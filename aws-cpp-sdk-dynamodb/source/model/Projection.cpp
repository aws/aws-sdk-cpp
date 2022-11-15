/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/Projection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

Projection::Projection() : 
    m_projectionType(ProjectionType::NOT_SET),
    m_projectionTypeHasBeenSet(false),
    m_nonKeyAttributesHasBeenSet(false)
{
}

Projection::Projection(JsonView jsonValue) : 
    m_projectionType(ProjectionType::NOT_SET),
    m_projectionTypeHasBeenSet(false),
    m_nonKeyAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

Projection& Projection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProjectionType"))
  {
    m_projectionType = ProjectionTypeMapper::GetProjectionTypeForName(jsonValue.GetString("ProjectionType"));

    m_projectionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonKeyAttributes"))
  {
    Aws::Utils::Array<JsonView> nonKeyAttributesJsonList = jsonValue.GetArray("NonKeyAttributes");
    for(unsigned nonKeyAttributesIndex = 0; nonKeyAttributesIndex < nonKeyAttributesJsonList.GetLength(); ++nonKeyAttributesIndex)
    {
      m_nonKeyAttributes.push_back(nonKeyAttributesJsonList[nonKeyAttributesIndex].AsString());
    }
    m_nonKeyAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue Projection::Jsonize() const
{
  JsonValue payload;

  if(m_projectionTypeHasBeenSet)
  {
   payload.WithString("ProjectionType", ProjectionTypeMapper::GetNameForProjectionType(m_projectionType));
  }

  if(m_nonKeyAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nonKeyAttributesJsonList(m_nonKeyAttributes.size());
   for(unsigned nonKeyAttributesIndex = 0; nonKeyAttributesIndex < nonKeyAttributesJsonList.GetLength(); ++nonKeyAttributesIndex)
   {
     nonKeyAttributesJsonList[nonKeyAttributesIndex].AsString(m_nonKeyAttributes[nonKeyAttributesIndex]);
   }
   payload.WithArray("NonKeyAttributes", std::move(nonKeyAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
