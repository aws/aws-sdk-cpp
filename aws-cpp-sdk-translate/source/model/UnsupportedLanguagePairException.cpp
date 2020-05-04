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

#include <aws/translate/model/UnsupportedLanguagePairException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

UnsupportedLanguagePairException::UnsupportedLanguagePairException() : 
    m_messageHasBeenSet(false),
    m_sourceLanguageCodeHasBeenSet(false),
    m_targetLanguageCodeHasBeenSet(false)
{
}

UnsupportedLanguagePairException::UnsupportedLanguagePairException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_sourceLanguageCodeHasBeenSet(false),
    m_targetLanguageCodeHasBeenSet(false)
{
  *this = jsonValue;
}

UnsupportedLanguagePairException& UnsupportedLanguagePairException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceLanguageCode"))
  {
    m_sourceLanguageCode = jsonValue.GetString("SourceLanguageCode");

    m_sourceLanguageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetLanguageCode"))
  {
    m_targetLanguageCode = jsonValue.GetString("TargetLanguageCode");

    m_targetLanguageCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue UnsupportedLanguagePairException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_sourceLanguageCodeHasBeenSet)
  {
   payload.WithString("SourceLanguageCode", m_sourceLanguageCode);

  }

  if(m_targetLanguageCodeHasBeenSet)
  {
   payload.WithString("TargetLanguageCode", m_targetLanguageCode);

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
