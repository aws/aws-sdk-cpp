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

CSVInput::CSVInput() : 
    m_fileHeaderInfo(FileHeaderInfo::NOT_SET),
    m_fileHeaderInfoHasBeenSet(false),
    m_commentsHasBeenSet(false),
    m_quoteEscapeCharacterHasBeenSet(false),
    m_recordDelimiterHasBeenSet(false),
    m_fieldDelimiterHasBeenSet(false),
    m_quoteCharacterHasBeenSet(false)
{
}

CSVInput::CSVInput(const JsonValue& jsonValue) : 
    m_fileHeaderInfo(FileHeaderInfo::NOT_SET),
    m_fileHeaderInfoHasBeenSet(false),
    m_commentsHasBeenSet(false),
    m_quoteEscapeCharacterHasBeenSet(false),
    m_recordDelimiterHasBeenSet(false),
    m_fieldDelimiterHasBeenSet(false),
    m_quoteCharacterHasBeenSet(false)
{
  *this = jsonValue;
}

CSVInput& CSVInput::operator =(const JsonValue& jsonValue)
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
