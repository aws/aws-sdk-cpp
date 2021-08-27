/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/Gender.h>
#include <aws/polly/model/VoiceId.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/polly/model/Engine.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
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
    Voice(Aws::Utils::Json::JsonView jsonValue);
    Voice& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Gender of the voice.</p>
     */
    inline const Gender& GetGender() const{ return m_gender; }

    /**
     * <p>Gender of the voice.</p>
     */
    inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }

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
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

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
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

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
    inline bool LanguageNameHasBeenSet() const { return m_languageNameHasBeenSet; }

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
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

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


    /**
     * <p>Additional codes for languages available for the specified voice in addition
     * to its default language. </p> <p>For example, the default language for Aditi is
     * Indian English (en-IN) because it was first used for that language. Since Aditi
     * is bilingual and fluent in both Indian English and Hindi, this parameter would
     * show the code <code>hi-IN</code>.</p>
     */
    inline const Aws::Vector<LanguageCode>& GetAdditionalLanguageCodes() const{ return m_additionalLanguageCodes; }

    /**
     * <p>Additional codes for languages available for the specified voice in addition
     * to its default language. </p> <p>For example, the default language for Aditi is
     * Indian English (en-IN) because it was first used for that language. Since Aditi
     * is bilingual and fluent in both Indian English and Hindi, this parameter would
     * show the code <code>hi-IN</code>.</p>
     */
    inline bool AdditionalLanguageCodesHasBeenSet() const { return m_additionalLanguageCodesHasBeenSet; }

    /**
     * <p>Additional codes for languages available for the specified voice in addition
     * to its default language. </p> <p>For example, the default language for Aditi is
     * Indian English (en-IN) because it was first used for that language. Since Aditi
     * is bilingual and fluent in both Indian English and Hindi, this parameter would
     * show the code <code>hi-IN</code>.</p>
     */
    inline void SetAdditionalLanguageCodes(const Aws::Vector<LanguageCode>& value) { m_additionalLanguageCodesHasBeenSet = true; m_additionalLanguageCodes = value; }

    /**
     * <p>Additional codes for languages available for the specified voice in addition
     * to its default language. </p> <p>For example, the default language for Aditi is
     * Indian English (en-IN) because it was first used for that language. Since Aditi
     * is bilingual and fluent in both Indian English and Hindi, this parameter would
     * show the code <code>hi-IN</code>.</p>
     */
    inline void SetAdditionalLanguageCodes(Aws::Vector<LanguageCode>&& value) { m_additionalLanguageCodesHasBeenSet = true; m_additionalLanguageCodes = std::move(value); }

    /**
     * <p>Additional codes for languages available for the specified voice in addition
     * to its default language. </p> <p>For example, the default language for Aditi is
     * Indian English (en-IN) because it was first used for that language. Since Aditi
     * is bilingual and fluent in both Indian English and Hindi, this parameter would
     * show the code <code>hi-IN</code>.</p>
     */
    inline Voice& WithAdditionalLanguageCodes(const Aws::Vector<LanguageCode>& value) { SetAdditionalLanguageCodes(value); return *this;}

    /**
     * <p>Additional codes for languages available for the specified voice in addition
     * to its default language. </p> <p>For example, the default language for Aditi is
     * Indian English (en-IN) because it was first used for that language. Since Aditi
     * is bilingual and fluent in both Indian English and Hindi, this parameter would
     * show the code <code>hi-IN</code>.</p>
     */
    inline Voice& WithAdditionalLanguageCodes(Aws::Vector<LanguageCode>&& value) { SetAdditionalLanguageCodes(std::move(value)); return *this;}

    /**
     * <p>Additional codes for languages available for the specified voice in addition
     * to its default language. </p> <p>For example, the default language for Aditi is
     * Indian English (en-IN) because it was first used for that language. Since Aditi
     * is bilingual and fluent in both Indian English and Hindi, this parameter would
     * show the code <code>hi-IN</code>.</p>
     */
    inline Voice& AddAdditionalLanguageCodes(const LanguageCode& value) { m_additionalLanguageCodesHasBeenSet = true; m_additionalLanguageCodes.push_back(value); return *this; }

    /**
     * <p>Additional codes for languages available for the specified voice in addition
     * to its default language. </p> <p>For example, the default language for Aditi is
     * Indian English (en-IN) because it was first used for that language. Since Aditi
     * is bilingual and fluent in both Indian English and Hindi, this parameter would
     * show the code <code>hi-IN</code>.</p>
     */
    inline Voice& AddAdditionalLanguageCodes(LanguageCode&& value) { m_additionalLanguageCodesHasBeenSet = true; m_additionalLanguageCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies which engines (<code>standard</code> or <code>neural</code>) that
     * are supported by a given voice.</p>
     */
    inline const Aws::Vector<Engine>& GetSupportedEngines() const{ return m_supportedEngines; }

    /**
     * <p>Specifies which engines (<code>standard</code> or <code>neural</code>) that
     * are supported by a given voice.</p>
     */
    inline bool SupportedEnginesHasBeenSet() const { return m_supportedEnginesHasBeenSet; }

    /**
     * <p>Specifies which engines (<code>standard</code> or <code>neural</code>) that
     * are supported by a given voice.</p>
     */
    inline void SetSupportedEngines(const Aws::Vector<Engine>& value) { m_supportedEnginesHasBeenSet = true; m_supportedEngines = value; }

    /**
     * <p>Specifies which engines (<code>standard</code> or <code>neural</code>) that
     * are supported by a given voice.</p>
     */
    inline void SetSupportedEngines(Aws::Vector<Engine>&& value) { m_supportedEnginesHasBeenSet = true; m_supportedEngines = std::move(value); }

    /**
     * <p>Specifies which engines (<code>standard</code> or <code>neural</code>) that
     * are supported by a given voice.</p>
     */
    inline Voice& WithSupportedEngines(const Aws::Vector<Engine>& value) { SetSupportedEngines(value); return *this;}

    /**
     * <p>Specifies which engines (<code>standard</code> or <code>neural</code>) that
     * are supported by a given voice.</p>
     */
    inline Voice& WithSupportedEngines(Aws::Vector<Engine>&& value) { SetSupportedEngines(std::move(value)); return *this;}

    /**
     * <p>Specifies which engines (<code>standard</code> or <code>neural</code>) that
     * are supported by a given voice.</p>
     */
    inline Voice& AddSupportedEngines(const Engine& value) { m_supportedEnginesHasBeenSet = true; m_supportedEngines.push_back(value); return *this; }

    /**
     * <p>Specifies which engines (<code>standard</code> or <code>neural</code>) that
     * are supported by a given voice.</p>
     */
    inline Voice& AddSupportedEngines(Engine&& value) { m_supportedEnginesHasBeenSet = true; m_supportedEngines.push_back(std::move(value)); return *this; }

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

    Aws::Vector<LanguageCode> m_additionalLanguageCodes;
    bool m_additionalLanguageCodesHasBeenSet;

    Aws::Vector<Engine> m_supportedEngines;
    bool m_supportedEnginesHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
