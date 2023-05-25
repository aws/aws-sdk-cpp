/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/FacetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

FacetResult::FacetResult() : 
    m_documentAttributeKeyHasBeenSet(false),
    m_documentAttributeValueType(DocumentAttributeValueType::NOT_SET),
    m_documentAttributeValueTypeHasBeenSet(false),
    m_documentAttributeValueCountPairsHasBeenSet(false)
{
}

FacetResult::FacetResult(JsonView jsonValue) : 
    m_documentAttributeKeyHasBeenSet(false),
    m_documentAttributeValueType(DocumentAttributeValueType::NOT_SET),
    m_documentAttributeValueTypeHasBeenSet(false),
    m_documentAttributeValueCountPairsHasBeenSet(false)
{
  *this = jsonValue;
}

FacetResult& FacetResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentAttributeKey"))
  {
    m_documentAttributeKey = jsonValue.GetString("DocumentAttributeKey");

    m_documentAttributeKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentAttributeValueType"))
  {
    m_documentAttributeValueType = DocumentAttributeValueTypeMapper::GetDocumentAttributeValueTypeForName(jsonValue.GetString("DocumentAttributeValueType"));

    m_documentAttributeValueTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentAttributeValueCountPairs"))
  {
    Aws::Utils::Array<JsonView> documentAttributeValueCountPairsJsonList = jsonValue.GetArray("DocumentAttributeValueCountPairs");
    for(unsigned documentAttributeValueCountPairsIndex = 0; documentAttributeValueCountPairsIndex < documentAttributeValueCountPairsJsonList.GetLength(); ++documentAttributeValueCountPairsIndex)
    {
      m_documentAttributeValueCountPairs.push_back(documentAttributeValueCountPairsJsonList[documentAttributeValueCountPairsIndex].AsObject());
    }
    m_documentAttributeValueCountPairsHasBeenSet = true;
  }

  return *this;
}

JsonValue FacetResult::Jsonize() const
{
  JsonValue payload;

  if(m_documentAttributeKeyHasBeenSet)
  {
   payload.WithString("DocumentAttributeKey", m_documentAttributeKey);

  }

  if(m_documentAttributeValueTypeHasBeenSet)
  {
   payload.WithString("DocumentAttributeValueType", DocumentAttributeValueTypeMapper::GetNameForDocumentAttributeValueType(m_documentAttributeValueType));
  }

  if(m_documentAttributeValueCountPairsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentAttributeValueCountPairsJsonList(m_documentAttributeValueCountPairs.size());
   for(unsigned documentAttributeValueCountPairsIndex = 0; documentAttributeValueCountPairsIndex < documentAttributeValueCountPairsJsonList.GetLength(); ++documentAttributeValueCountPairsIndex)
   {
     documentAttributeValueCountPairsJsonList[documentAttributeValueCountPairsIndex].AsObject(m_documentAttributeValueCountPairs[documentAttributeValueCountPairsIndex].Jsonize());
   }
   payload.WithArray("DocumentAttributeValueCountPairs", std::move(documentAttributeValueCountPairsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
