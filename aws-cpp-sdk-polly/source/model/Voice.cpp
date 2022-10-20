/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_nameHasBeenSet(false),
    m_additionalLanguageCodesHasBeenSet(false),
    m_supportedEnginesHasBeenSet(false)
{
}

Voice::Voice(JsonView jsonValue) : 
    m_gender(Gender::NOT_SET),
    m_genderHasBeenSet(false),
    m_id(VoiceId::NOT_SET),
    m_idHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_languageNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_additionalLanguageCodesHasBeenSet(false),
    m_supportedEnginesHasBeenSet(false)
{
  *this = jsonValue;
}

Voice& Voice::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("AdditionalLanguageCodes"))
  {
    Aws::Utils::Array<JsonView> additionalLanguageCodesJsonList = jsonValue.GetArray("AdditionalLanguageCodes");
    for(unsigned additionalLanguageCodesIndex = 0; additionalLanguageCodesIndex < additionalLanguageCodesJsonList.GetLength(); ++additionalLanguageCodesIndex)
    {
      m_additionalLanguageCodes.push_back(LanguageCodeMapper::GetLanguageCodeForName(additionalLanguageCodesJsonList[additionalLanguageCodesIndex].AsString()));
    }
    m_additionalLanguageCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedEngines"))
  {
    Aws::Utils::Array<JsonView> supportedEnginesJsonList = jsonValue.GetArray("SupportedEngines");
    for(unsigned supportedEnginesIndex = 0; supportedEnginesIndex < supportedEnginesJsonList.GetLength(); ++supportedEnginesIndex)
    {
      m_supportedEngines.push_back(EngineMapper::GetEngineForName(supportedEnginesJsonList[supportedEnginesIndex].AsString()));
    }
    m_supportedEnginesHasBeenSet = true;
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

  if(m_additionalLanguageCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalLanguageCodesJsonList(m_additionalLanguageCodes.size());
   for(unsigned additionalLanguageCodesIndex = 0; additionalLanguageCodesIndex < additionalLanguageCodesJsonList.GetLength(); ++additionalLanguageCodesIndex)
   {
     additionalLanguageCodesJsonList[additionalLanguageCodesIndex].AsString(LanguageCodeMapper::GetNameForLanguageCode(m_additionalLanguageCodes[additionalLanguageCodesIndex]));
   }
   payload.WithArray("AdditionalLanguageCodes", std::move(additionalLanguageCodesJsonList));

  }

  if(m_supportedEnginesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedEnginesJsonList(m_supportedEngines.size());
   for(unsigned supportedEnginesIndex = 0; supportedEnginesIndex < supportedEnginesJsonList.GetLength(); ++supportedEnginesIndex)
   {
     supportedEnginesJsonList[supportedEnginesIndex].AsString(EngineMapper::GetNameForEngine(m_supportedEngines[supportedEnginesIndex]));
   }
   payload.WithArray("SupportedEngines", std::move(supportedEnginesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Polly
} // namespace Aws
