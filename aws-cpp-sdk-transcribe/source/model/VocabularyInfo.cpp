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

#include <aws/transcribe/model/VocabularyInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

VocabularyInfo::VocabularyInfo() : 
    m_vocabularyNameHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_vocabularyState(VocabularyState::NOT_SET),
    m_vocabularyStateHasBeenSet(false)
{
}

VocabularyInfo::VocabularyInfo(const JsonValue& jsonValue) : 
    m_vocabularyNameHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_vocabularyState(VocabularyState::NOT_SET),
    m_vocabularyStateHasBeenSet(false)
{
  *this = jsonValue;
}

VocabularyInfo& VocabularyInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("VocabularyName"))
  {
    m_vocabularyName = jsonValue.GetString("VocabularyName");

    m_vocabularyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyState"))
  {
    m_vocabularyState = VocabularyStateMapper::GetVocabularyStateForName(jsonValue.GetString("VocabularyState"));

    m_vocabularyStateHasBeenSet = true;
  }

  return *this;
}

JsonValue VocabularyInfo::Jsonize() const
{
  JsonValue payload;

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_vocabularyStateHasBeenSet)
  {
   payload.WithString("VocabularyState", VocabularyStateMapper::GetNameForVocabularyState(m_vocabularyState));
  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
