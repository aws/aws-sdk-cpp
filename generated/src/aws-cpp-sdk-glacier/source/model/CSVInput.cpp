/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/CSVInput.h>
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

CSVInput::CSVInput(JsonView jsonValue)
{
  *this = jsonValue;
}

CSVInput& CSVInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileHeaderInfo"))
  {
    m_fileHeaderInfo = FileHeaderInfoMapper::GetFileHeaderInfoForName(jsonValue.GetString("FileHeaderInfo"));
    m_fileHeaderInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Comments"))
  {
    m_comments = jsonValue.GetString("Comments");
    m_commentsHasBeenSet = true;
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

JsonValue CSVInput::Jsonize() const
{
  JsonValue payload;

  if(m_fileHeaderInfoHasBeenSet)
  {
   payload.WithString("FileHeaderInfo", FileHeaderInfoMapper::GetNameForFileHeaderInfo(m_fileHeaderInfo));
  }

  if(m_commentsHasBeenSet)
  {
   payload.WithString("Comments", m_comments);

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
