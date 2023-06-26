/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchGetLinkAttributes.h>
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

BatchGetLinkAttributes::BatchGetLinkAttributes() : 
    m_typedLinkSpecifierHasBeenSet(false),
    m_attributeNamesHasBeenSet(false)
{
}

BatchGetLinkAttributes::BatchGetLinkAttributes(JsonView jsonValue) : 
    m_typedLinkSpecifierHasBeenSet(false),
    m_attributeNamesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetLinkAttributes& BatchGetLinkAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TypedLinkSpecifier"))
  {
    m_typedLinkSpecifier = jsonValue.GetObject("TypedLinkSpecifier");

    m_typedLinkSpecifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeNames"))
  {
    Aws::Utils::Array<JsonView> attributeNamesJsonList = jsonValue.GetArray("AttributeNames");
    for(unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex)
    {
      m_attributeNames.push_back(attributeNamesJsonList[attributeNamesIndex].AsString());
    }
    m_attributeNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetLinkAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_typedLinkSpecifierHasBeenSet)
  {
   payload.WithObject("TypedLinkSpecifier", m_typedLinkSpecifier.Jsonize());

  }

  if(m_attributeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeNamesJsonList(m_attributeNames.size());
   for(unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex)
   {
     attributeNamesJsonList[attributeNamesIndex].AsString(m_attributeNames[attributeNamesIndex]);
   }
   payload.WithArray("AttributeNames", std::move(attributeNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
