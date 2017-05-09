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

#include <aws/polly/model/Voice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Polly
{
namespace Model
{

Voice::Voice() : 
    m_gender(Gender::NOT_SET),
    m_genderHasBeenSet(false),
    m_id(VoiceId::NOT_SET),
    m_idHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_languageNameHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Voice::Voice(const JsonValue& jsonValue) : 
    m_gender(Gender::NOT_SET),
    m_genderHasBeenSet(false),
    m_id(VoiceId::NOT_SET),
    m_idHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_languageNameHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

Voice& Voice::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Gender"))
  {
    m_gender = GenderMapper::GetGenderForName(jsonValue.GetString("Gender"));

    m_genderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = VoiceIdMapper::GetVoiceIdForName(jsonValue.GetString("Id"));

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageName"))
  {
    m_languageName = jsonValue.GetString("LanguageName");

    m_languageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue Voice::Jsonize() const
{
  JsonValue payload;

  if(m_genderHasBeenSet)
  {
   payload.WithString("Gender", GenderMapper::GetNameForGender(m_gender));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", VoiceIdMapper::GetNameForVoiceId(m_id));
  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_languageNameHasBeenSet)
  {
   payload.WithString("LanguageName", m_languageName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace Polly
} // namespace Aws