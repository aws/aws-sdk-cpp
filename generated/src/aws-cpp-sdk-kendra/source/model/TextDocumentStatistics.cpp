/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/TextDocumentStatistics.h>
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

TextDocumentStatistics::TextDocumentStatistics() : 
    m_indexedTextDocumentsCount(0),
    m_indexedTextDocumentsCountHasBeenSet(false),
    m_indexedTextBytes(0),
    m_indexedTextBytesHasBeenSet(false)
{
}

TextDocumentStatistics::TextDocumentStatistics(JsonView jsonValue) : 
    m_indexedTextDocumentsCount(0),
    m_indexedTextDocumentsCountHasBeenSet(false),
    m_indexedTextBytes(0),
    m_indexedTextBytesHasBeenSet(false)
{
  *this = jsonValue;
}

TextDocumentStatistics& TextDocumentStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexedTextDocumentsCount"))
  {
    m_indexedTextDocumentsCount = jsonValue.GetInteger("IndexedTextDocumentsCount");

    m_indexedTextDocumentsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexedTextBytes"))
  {
    m_indexedTextBytes = jsonValue.GetInt64("IndexedTextBytes");

    m_indexedTextBytesHasBeenSet = true;
  }

  return *this;
}

JsonValue TextDocumentStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_indexedTextDocumentsCountHasBeenSet)
  {
   payload.WithInteger("IndexedTextDocumentsCount", m_indexedTextDocumentsCount);

  }

  if(m_indexedTextBytesHasBeenSet)
  {
   payload.WithInt64("IndexedTextBytes", m_indexedTextBytes);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
