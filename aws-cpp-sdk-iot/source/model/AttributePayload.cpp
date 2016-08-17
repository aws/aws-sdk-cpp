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
#include <aws/iot/model/AttributePayload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AttributePayload::AttributePayload() : 
    m_attributesHasBeenSet(false),
    m_merge(false),
    m_mergeHasBeenSet(false)
{
}

AttributePayload::AttributePayload(const JsonValue& jsonValue) : 
    m_attributesHasBeenSet(false),
    m_merge(false),
    m_mergeHasBeenSet(false)
{
  *this = jsonValue;
}

AttributePayload& AttributePayload::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonValue> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("merge"))
  {
    m_merge = jsonValue.GetBool("merge");

    m_mergeHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributePayload::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_mergeHasBeenSet)
  {
   payload.WithBool("merge", m_merge);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws