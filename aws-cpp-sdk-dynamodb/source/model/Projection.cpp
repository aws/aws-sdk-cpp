/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

Projection::Projection(const JsonValue& jsonValue) : 
    m_projectionType(ProjectionType::NOT_SET),
    m_projectionTypeHasBeenSet(false),
    m_nonKeyAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

Projection& Projection::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ProjectionType"))
  {
    m_projectionType = ProjectionTypeMapper::GetProjectionTypeForName(jsonValue.GetString("ProjectionType"));

    m_projectionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonKeyAttributes"))
  {
    Array<JsonValue> nonKeyAttributesJsonList = jsonValue.GetArray("NonKeyAttributes");
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
   Array<JsonValue> nonKeyAttributesJsonList(m_nonKeyAttributes.size());
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