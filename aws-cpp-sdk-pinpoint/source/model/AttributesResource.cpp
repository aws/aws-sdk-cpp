/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/pinpoint/model/AttributesResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

AttributesResource::AttributesResource() : 
    m_applicationIdHasBeenSet(false),
    m_attributeTypeHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

AttributesResource::AttributesResource(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_attributeTypeHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

AttributesResource& AttributesResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeType"))
  {
    m_attributeType = jsonValue.GetString("AttributeType");

    m_attributeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Array<JsonView> attributesJsonList = jsonValue.GetArray("Attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsString());
    }
    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributesResource::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_attributeTypeHasBeenSet)
  {
   payload.WithString("AttributeType", m_attributeType);

  }

  if(m_attributesHasBeenSet)
  {
   Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsString(m_attributes[attributesIndex]);
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
