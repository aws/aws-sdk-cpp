/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/CSVOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

CSVOutput::CSVOutput() : 
    m_quoteFields(QuoteFields::NOT_SET),
    m_quoteFieldsHasBeenSet(false),
    m_quoteEscapeCharacterHasBeenSet(false),
    m_recordDelimiterHasBeenSet(false),
    m_fieldDelimiterHasBeenSet(false),
    m_quoteCharacterHasBeenSet(false)
{
}

CSVOutput::CSVOutput(JsonView jsonValue) : 
    m_quoteFields(QuoteFields::NOT_SET),
    m_quoteFieldsHasBeenSet(false),
    m_quoteEscapeCharacterHasBeenSet(false),
    m_recordDelimiterHasBeenSet(false),
    m_fieldDelimiterHasBeenSet(false),
    m_quoteCharacterHasBeenSet(false)
{
  *this = jsonValue;
}

CSVOutput& CSVOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QuoteFields"))
  {
    m_quoteFields = QuoteFieldsMapper::GetQuoteFieldsForName(jsonValue.GetString("QuoteFields"));

    m_quoteFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuoteEscapeCharacter"))
  {
    m_quoteEscapeCharacter = jsonValue.GetString("QuoteEscapeCharacter");

    m_quoteEscapeCharacterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordDelimiter"))
  {
    m_recordDelimiter = jsonValue.GetString("RecordDelimiter");

    m_recordDelimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldDelimiter"))
  {
    m_fieldDelimiter = jsonValue.GetString("FieldDelimiter");

    m_fieldDelimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuoteCharacter"))
  {
    m_quoteCharacter = jsonValue.GetString("QuoteCharacter");

    m_quoteCharacterHasBeenSet = true;
  }

  return *this;
}

JsonValue CSVOutput::Jsonize() const
{
  JsonValue payload;

  if(m_quoteFieldsHasBeenSet)
  {
   payload.WithString("QuoteFields", QuoteFieldsMapper::GetNameForQuoteFields(m_quoteFields));
  }

  if(m_quoteEscapeCharacterHasBeenSet)
  {
   payload.WithString("QuoteEscapeCharacter", m_quoteEscapeCharacter);

  }

  if(m_recordDelimiterHasBeenSet)
  {
   payload.WithString("RecordDelimiter", m_recordDelimiter);

  }

  if(m_fieldDelimiterHasBeenSet)
  {
   payload.WithString("FieldDelimiter", m_fieldDelimiter);

  }

  if(m_quoteCharacterHasBeenSet)
  {
   payload.WithString("QuoteCharacter", m_quoteCharacter);

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
