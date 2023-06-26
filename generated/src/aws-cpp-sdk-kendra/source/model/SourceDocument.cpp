/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SourceDocument.h>
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

SourceDocument::SourceDocument() : 
    m_documentIdHasBeenSet(false),
    m_suggestionAttributesHasBeenSet(false),
    m_additionalAttributesHasBeenSet(false)
{
}

SourceDocument::SourceDocument(JsonView jsonValue) : 
    m_documentIdHasBeenSet(false),
    m_suggestionAttributesHasBeenSet(false),
    m_additionalAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

SourceDocument& SourceDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentId"))
  {
    m_documentId = jsonValue.GetString("DocumentId");

    m_documentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SuggestionAttributes"))
  {
    Aws::Utils::Array<JsonView> suggestionAttributesJsonList = jsonValue.GetArray("SuggestionAttributes");
    for(unsigned suggestionAttributesIndex = 0; suggestionAttributesIndex < suggestionAttributesJsonList.GetLength(); ++suggestionAttributesIndex)
    {
      m_suggestionAttributes.push_back(suggestionAttributesJsonList[suggestionAttributesIndex].AsString());
    }
    m_suggestionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalAttributes"))
  {
    Aws::Utils::Array<JsonView> additionalAttributesJsonList = jsonValue.GetArray("AdditionalAttributes");
    for(unsigned additionalAttributesIndex = 0; additionalAttributesIndex < additionalAttributesJsonList.GetLength(); ++additionalAttributesIndex)
    {
      m_additionalAttributes.push_back(additionalAttributesJsonList[additionalAttributesIndex].AsObject());
    }
    m_additionalAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceDocument::Jsonize() const
{
  JsonValue payload;

  if(m_documentIdHasBeenSet)
  {
   payload.WithString("DocumentId", m_documentId);

  }

  if(m_suggestionAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> suggestionAttributesJsonList(m_suggestionAttributes.size());
   for(unsigned suggestionAttributesIndex = 0; suggestionAttributesIndex < suggestionAttributesJsonList.GetLength(); ++suggestionAttributesIndex)
   {
     suggestionAttributesJsonList[suggestionAttributesIndex].AsString(m_suggestionAttributes[suggestionAttributesIndex]);
   }
   payload.WithArray("SuggestionAttributes", std::move(suggestionAttributesJsonList));

  }

  if(m_additionalAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalAttributesJsonList(m_additionalAttributes.size());
   for(unsigned additionalAttributesIndex = 0; additionalAttributesIndex < additionalAttributesJsonList.GetLength(); ++additionalAttributesIndex)
   {
     additionalAttributesJsonList[additionalAttributesIndex].AsObject(m_additionalAttributes[additionalAttributesIndex].Jsonize());
   }
   payload.WithArray("AdditionalAttributes", std::move(additionalAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
