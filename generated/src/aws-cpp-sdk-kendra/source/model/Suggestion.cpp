/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Suggestion.h>
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

Suggestion::Suggestion() : 
    m_idHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_sourceDocumentsHasBeenSet(false)
{
}

Suggestion::Suggestion(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_sourceDocumentsHasBeenSet(false)
{
  *this = jsonValue;
}

Suggestion& Suggestion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceDocuments"))
  {
    Aws::Utils::Array<JsonView> sourceDocumentsJsonList = jsonValue.GetArray("SourceDocuments");
    for(unsigned sourceDocumentsIndex = 0; sourceDocumentsIndex < sourceDocumentsJsonList.GetLength(); ++sourceDocumentsIndex)
    {
      m_sourceDocuments.push_back(sourceDocumentsJsonList[sourceDocumentsIndex].AsObject());
    }
    m_sourceDocumentsHasBeenSet = true;
  }

  return *this;
}

JsonValue Suggestion::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  if(m_sourceDocumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceDocumentsJsonList(m_sourceDocuments.size());
   for(unsigned sourceDocumentsIndex = 0; sourceDocumentsIndex < sourceDocumentsJsonList.GetLength(); ++sourceDocumentsIndex)
   {
     sourceDocumentsJsonList[sourceDocumentsIndex].AsObject(m_sourceDocuments[sourceDocumentsIndex].Jsonize());
   }
   payload.WithArray("SourceDocuments", std::move(sourceDocumentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
