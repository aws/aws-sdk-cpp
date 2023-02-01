/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchUpdateLinkAttributes.h>
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

BatchUpdateLinkAttributes::BatchUpdateLinkAttributes() : 
    m_typedLinkSpecifierHasBeenSet(false),
    m_attributeUpdatesHasBeenSet(false)
{
}

BatchUpdateLinkAttributes::BatchUpdateLinkAttributes(JsonView jsonValue) : 
    m_typedLinkSpecifierHasBeenSet(false),
    m_attributeUpdatesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchUpdateLinkAttributes& BatchUpdateLinkAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TypedLinkSpecifier"))
  {
    m_typedLinkSpecifier = jsonValue.GetObject("TypedLinkSpecifier");

    m_typedLinkSpecifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeUpdates"))
  {
    Aws::Utils::Array<JsonView> attributeUpdatesJsonList = jsonValue.GetArray("AttributeUpdates");
    for(unsigned attributeUpdatesIndex = 0; attributeUpdatesIndex < attributeUpdatesJsonList.GetLength(); ++attributeUpdatesIndex)
    {
      m_attributeUpdates.push_back(attributeUpdatesJsonList[attributeUpdatesIndex].AsObject());
    }
    m_attributeUpdatesHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchUpdateLinkAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_typedLinkSpecifierHasBeenSet)
  {
   payload.WithObject("TypedLinkSpecifier", m_typedLinkSpecifier.Jsonize());

  }

  if(m_attributeUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeUpdatesJsonList(m_attributeUpdates.size());
   for(unsigned attributeUpdatesIndex = 0; attributeUpdatesIndex < attributeUpdatesJsonList.GetLength(); ++attributeUpdatesIndex)
   {
     attributeUpdatesJsonList[attributeUpdatesIndex].AsObject(m_attributeUpdates[attributeUpdatesIndex].Jsonize());
   }
   payload.WithArray("AttributeUpdates", std::move(attributeUpdatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
