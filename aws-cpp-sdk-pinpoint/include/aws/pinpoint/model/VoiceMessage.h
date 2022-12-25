/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the settings for a one-time voice message that's sent directly to
   * an endpoint through the voice channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/VoiceMessage">AWS
   * API Reference</a></p>
   */
  class VoiceMessage
  {
  public:
    AWS_PINPOINT_API VoiceMessage();
    AWS_PINPOINT_API VoiceMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API VoiceMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text of the script to use for the voice message.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The text of the script to use for the voice message.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The text of the script to use for the voice message.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The text of the script to use for the voice message.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The text of the script to use for the voice message.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The text of the script to use for the voice message.</p>
     */
    inline VoiceMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The text of the script to use for the voice message.</p>
     */
    inline VoiceMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The text of the script to use for the voice message.</p>
     */
    inline VoiceMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The code for the language to use when synthesizing the text of the message
     * script. For a list of supported languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The code for the language to use when synthesizing the text of the message
     * script. For a list of supported languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The code for the language to use when synthesizing the text of the message
     * script. For a list of supported languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The code for the language to use when synthesizing the text of the message
     * script. For a list of supported languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The code for the language to use when synthesizing the text of the message
     * script. For a list of supported languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }

    /**
     * <p>The code for the language to use when synthesizing the text of the message
     * script. For a list of supported languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline VoiceMessage& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The code for the language to use when synthesizing the text of the message
     * script. For a list of supported languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline VoiceMessage& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The code for the language to use when synthesizing the text of the message
     * script. For a list of supported languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline VoiceMessage& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}


    /**
     * <p>The long code to send the voice message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code in E.164 format, for
     * example +12065550100, to ensure prompt and accurate delivery of the message.</p>
     */
    inline const Aws::String& GetOriginationNumber() const{ return m_originationNumber; }

    /**
     * <p>The long code to send the voice message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code in E.164 format, for
     * example +12065550100, to ensure prompt and accurate delivery of the message.</p>
     */
    inline bool OriginationNumberHasBeenSet() const { return m_originationNumberHasBeenSet; }

    /**
     * <p>The long code to send the voice message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code in E.164 format, for
     * example +12065550100, to ensure prompt and accurate delivery of the message.</p>
     */
    inline void SetOriginationNumber(const Aws::String& value) { m_originationNumberHasBeenSet = true; m_originationNumber = value; }

    /**
     * <p>The long code to send the voice message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code in E.164 format, for
     * example +12065550100, to ensure prompt and accurate delivery of the message.</p>
     */
    inline void SetOriginationNumber(Aws::String&& value) { m_originationNumberHasBeenSet = true; m_originationNumber = std::move(value); }

    /**
     * <p>The long code to send the voice message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code in E.164 format, for
     * example +12065550100, to ensure prompt and accurate delivery of the message.</p>
     */
    inline void SetOriginationNumber(const char* value) { m_originationNumberHasBeenSet = true; m_originationNumber.assign(value); }

    /**
     * <p>The long code to send the voice message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code in E.164 format, for
     * example +12065550100, to ensure prompt and accurate delivery of the message.</p>
     */
    inline VoiceMessage& WithOriginationNumber(const Aws::String& value) { SetOriginationNumber(value); return *this;}

    /**
     * <p>The long code to send the voice message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code in E.164 format, for
     * example +12065550100, to ensure prompt and accurate delivery of the message.</p>
     */
    inline VoiceMessage& WithOriginationNumber(Aws::String&& value) { SetOriginationNumber(std::move(value)); return *this;}

    /**
     * <p>The long code to send the voice message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code in E.164 format, for
     * example +12065550100, to ensure prompt and accurate delivery of the message.</p>
     */
    inline VoiceMessage& WithOriginationNumber(const char* value) { SetOriginationNumber(value); return *this;}


    /**
     * <p>The default message variables to use in the voice message. You can override
     * the default variables with individual address variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * <p>The default message variables to use in the voice message. You can override
     * the default variables with individual address variables.</p>
     */
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }

    /**
     * <p>The default message variables to use in the voice message. You can override
     * the default variables with individual address variables.</p>
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * <p>The default message variables to use in the voice message. You can override
     * the default variables with individual address variables.</p>
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * <p>The default message variables to use in the voice message. You can override
     * the default variables with individual address variables.</p>
     */
    inline VoiceMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * <p>The default message variables to use in the voice message. You can override
     * the default variables with individual address variables.</p>
     */
    inline VoiceMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * <p>The default message variables to use in the voice message. You can override
     * the default variables with individual address variables.</p>
     */
    inline VoiceMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * <p>The default message variables to use in the voice message. You can override
     * the default variables with individual address variables.</p>
     */
    inline VoiceMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default message variables to use in the voice message. You can override
     * the default variables with individual address variables.</p>
     */
    inline VoiceMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the voice message. You can override
     * the default variables with individual address variables.</p>
     */
    inline VoiceMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the voice message. You can override
     * the default variables with individual address variables.</p>
     */
    inline VoiceMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the voice message. You can override
     * the default variables with individual address variables.</p>
     */
    inline VoiceMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }


    /**
     * <p>The name of the voice to use when delivering the message. For a list of
     * supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetVoiceId() const{ return m_voiceId; }

    /**
     * <p>The name of the voice to use when delivering the message. For a list of
     * supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }

    /**
     * <p>The name of the voice to use when delivering the message. For a list of
     * supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline void SetVoiceId(const Aws::String& value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }

    /**
     * <p>The name of the voice to use when delivering the message. For a list of
     * supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline void SetVoiceId(Aws::String&& value) { m_voiceIdHasBeenSet = true; m_voiceId = std::move(value); }

    /**
     * <p>The name of the voice to use when delivering the message. For a list of
     * supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline void SetVoiceId(const char* value) { m_voiceIdHasBeenSet = true; m_voiceId.assign(value); }

    /**
     * <p>The name of the voice to use when delivering the message. For a list of
     * supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline VoiceMessage& WithVoiceId(const Aws::String& value) { SetVoiceId(value); return *this;}

    /**
     * <p>The name of the voice to use when delivering the message. For a list of
     * supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline VoiceMessage& WithVoiceId(Aws::String&& value) { SetVoiceId(std::move(value)); return *this;}

    /**
     * <p>The name of the voice to use when delivering the message. For a list of
     * supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline VoiceMessage& WithVoiceId(const char* value) { SetVoiceId(value); return *this;}

  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_originationNumber;
    bool m_originationNumberHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet = false;

    Aws::String m_voiceId;
    bool m_voiceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
