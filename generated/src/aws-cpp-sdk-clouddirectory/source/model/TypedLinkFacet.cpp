/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

TypedLinkFacet::TypedLinkFacet(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_identityAttributeOrderHasBeenSet(false)
{
  *this = jsonValue;
}

TypedLinkFacet& TypedLinkFacet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("Attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityAttributeOrder"))
  {
    Aws::Utils::Array<JsonView> identityAttributeOrderJsonList = jsonValue.GetArray("IdentityAttributeOrder");
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
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  if(m_identityAttributeOrderHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identityAttributeOrderJsonList(m_identityAttributeOrder.size());
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
