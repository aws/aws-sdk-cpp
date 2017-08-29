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

#include <aws/clouddirectory/model/TypedLinkFacet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

TypedLinkFacet::TypedLinkFacet() : 
    m_nameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_identityAttributeOrderHasBeenSet(false)
{
}

TypedLinkFacet::TypedLinkFacet(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_identityAttributeOrderHasBeenSet(false)
{
  *this = jsonValue;
}

TypedLinkFacet& TypedLinkFacet::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Array<JsonValue> attributesJsonList = jsonValue.GetArray("Attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityAttributeOrder"))
  {
    Array<JsonValue> identityAttributeOrderJsonList = jsonValue.GetArray("IdentityAttributeOrder");
    for(unsigned identityAttributeOrderIndex = 0; identityAttributeOrderIndex < identityAttributeOrderJsonList.GetLength(); ++identityAttributeOrderIndex)
    {
      m_identityAttributeOrder.push_back(identityAttributeOrderJsonList[identityAttributeOrderIndex].AsString());
    }
    m_identityAttributeOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue TypedLinkFacet::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_attributesHasBeenSet)
  {
   Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  if(m_identityAttributeOrderHasBeenSet)
  {
   Array<JsonValue> identityAttributeOrderJsonList(m_identityAttributeOrder.size());
   for(unsigned identityAttributeOrderIndex = 0; identityAttributeOrderIndex < identityAttributeOrderJsonList.GetLength(); ++identityAttributeOrderIndex)
   {
     identityAttributeOrderJsonList[identityAttributeOrderIndex].AsString(m_identityAttributeOrder[identityAttributeOrderIndex]);
   }
   payload.WithArray("IdentityAttributeOrder", std::move(identityAttributeOrderJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
