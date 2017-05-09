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

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/Gender.h>
#include <aws/polly/model/VoiceId.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Polly
{
namespace Model
{

  /**
   * <p>Description of the voice.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/Voice">AWS API
   * Reference</a></p>
   */
  class AWS_POLLY_API Voice
  {
  public:
    Voice();
    Voice(const Aws::Utils::Json::JsonValue& jsonValue);
    Voice& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Gender of the voice.</p>
     */
    inline const Gender& GetGender() const{ return m_gender; }

    /**
     * <p>Gender of the voice.</p>
     */
    inline void SetGender(const Gender& value) { m_genderHasBeenSet = true; m_gender = value; }

    /**
     * <p>Gender of the voice.</p>
     */
    inline void SetGender(Gender&& value) { m_genderHasBeenSet = true; m_gender = std::move(value); }

    /**
     * <p>Gender of the voice.</p>
     */
    inline Voice& WithGender(const Gender& value) { SetGender(value); return *this;}

    /**
     * <p>Gender of the voice.</p>
     */
    inline Voice& WithGender(Gender&& value) { SetGender(std::move(value)); return *this;}

    /**
     * <p>Amazon Polly assigned voice ID. This is the ID that you specify when calling
     * the <code>SynthesizeSpeech</code> operation.</p>
     */
    inline const VoiceId& GetId() const{ return m_id; }

    /**
     * <p>Amazon Polly assigned voice ID. This is the ID that you specify when calling
     * the <code>SynthesizeSpeech</code> operation.</p>
     */
    inline void SetId(const VoiceId& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Amazon Polly assigned voice ID. This is the ID that you specify when calling
     * the <code>SynthesizeSpeech</code> operation.</p>
     */
    inline void SetId(VoiceId&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Amazon Polly assigned voice ID. This is the ID that you specify when calling
     * the <code>SynthesizeSpeech</code> operation.</p>
     */
    inline Voice& WithId(const VoiceId& value) { SetId(value); return *this;}

    /**
     * <p>Amazon Polly assigned voice ID. This is the ID that you specify when calling
     * the <code>SynthesizeSpeech</code> operation.</p>
     */
    inline Voice& WithId(VoiceId&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Language code of the voice.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Language code of the voice.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Language code of the voice.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Language code of the voice.</p>
     */
    inline Voice& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Language code of the voice.</p>
     */
    inline Voice& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>Human readable name of the language in English.</p>
     */
    inline const Aws::String& GetLanguageName() const{ return m_languageName; }

    /**
     * <p>Human readable name of the language in English.</p>
     */
    inline void SetLanguageName(const Aws::String& value) { m_languageNameHasBeenSet = true; m_languageName = value; }

    /**
     * <p>Human readable name of the language in English.</p>
     */
    inline void SetLanguageName(Aws::String&& value) { m_languageNameHasBeenSet = true; m_languageName = std::move(value); }

    /**
     * <p>Human readable name of the language in English.</p>
     */
    inline void SetLanguageName(const char* value) { m_languageNameHasBeenSet = true; m_languageName.assign(value); }

    /**
     * <p>Human readable name of the language in English.</p>
     */
    inline Voice& WithLanguageName(const Aws::String& value) { SetLanguageName(value); return *this;}

    /**
     * <p>Human readable name of the language in English.</p>
     */
    inline Voice& WithLanguageName(Aws::String&& value) { SetLanguageName(std::move(value)); return *this;}

    /**
     * <p>Human readable name of the language in English.</p>
     */
    inline Voice& WithLanguageName(const char* value) { SetLanguageName(value); return *this;}

    /**
     * <p>Name of the voice (for example, Salli, Kendra, etc.). This provides a human
     * readable voice name that you might display in your application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the voice (for example, Salli, Kendra, etc.). This provides a human
     * readable voice name that you might display in your application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the voice (for example, Salli, Kendra, etc.). This provides a human
     * readable voice name that you might display in your application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the voice (for example, Salli, Kendra, etc.). This provides a human
     * readable voice name that you might display in your application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the voice (for example, Salli, Kendra, etc.). This provides a human
     * readable voice name that you might display in your application.</p>
     */
    inline Voice& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the voice (for example, Salli, Kendra, etc.). This provides a human
     * readable voice name that you might display in your application.</p>
     */
    inline Voice& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the voice (for example, Salli, Kendra, etc.). This provides a human
     * readable voice name that you might display in your application.</p>
     */
    inline Voice& WithName(const char* value) { SetName(value); return *this;}

  private:
    Gender m_gender;
    bool m_genderHasBeenSet;
    VoiceId m_id;
    bool m_idHasBeenSet;
    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;
    Aws::String m_languageName;
    bool m_languageNameHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
