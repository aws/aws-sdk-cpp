/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/PollyRequest.h>
#include <aws/polly/model/Engine.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/polly/model/OutputFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/TextType.h>
#include <aws/polly/model/VoiceId.h>
#include <aws/polly/model/SpeechMarkType.h>
#include <utility>

namespace Aws
{
namespace Polly
{
namespace Model
{

  /**
   */
  class AWS_POLLY_API SynthesizeSpeechRequest : public PollyRequest
  {
  public:
    SynthesizeSpeechRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SynthesizeSpeech"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Specifies the engine (<code>standard</code> or <code>neural</code>) for
     * Amazon Polly to use when processing input text for speech synthesis. For
     * information on Amazon Polly voices and which voices are available in
     * standard-only, NTTS-only, and both standard and NTTS formats, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a>.</p> <p> <b>NTTS-only voices</b> </p> <p>When using NTTS-only voices
     * such as Kevin (en-US), this parameter is required and must be set to
     * <code>neural</code>. If the engine is not specified, or is set to
     * <code>standard</code>, this will result in an error. </p> <p>Type: String</p>
     * <p>Valid Values: <code>standard</code> | <code>neural</code> </p> <p>Required:
     * Yes</p> <p> <b>Standard voices</b> </p> <p>For standard voices, this is not
     * required; the engine parameter defaults to <code>standard</code>. If the engine
     * is not specified, or is set to <code>standard</code> and an NTTS-only voice is
     * selected, this will result in an error. </p>
     */
    inline const Engine& GetEngine() const{ return m_engine; }

    /**
     * <p>Specifies the engine (<code>standard</code> or <code>neural</code>) for
     * Amazon Polly to use when processing input text for speech synthesis. For
     * information on Amazon Polly voices and which voices are available in
     * standard-only, NTTS-only, and both standard and NTTS formats, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a>.</p> <p> <b>NTTS-only voices</b> </p> <p>When using NTTS-only voices
     * such as Kevin (en-US), this parameter is required and must be set to
     * <code>neural</code>. If the engine is not specified, or is set to
     * <code>standard</code>, this will result in an error. </p> <p>Type: String</p>
     * <p>Valid Values: <code>standard</code> | <code>neural</code> </p> <p>Required:
     * Yes</p> <p> <b>Standard voices</b> </p> <p>For standard voices, this is not
     * required; the engine parameter defaults to <code>standard</code>. If the engine
     * is not specified, or is set to <code>standard</code> and an NTTS-only voice is
     * selected, this will result in an error. </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>Specifies the engine (<code>standard</code> or <code>neural</code>) for
     * Amazon Polly to use when processing input text for speech synthesis. For
     * information on Amazon Polly voices and which voices are available in
     * standard-only, NTTS-only, and both standard and NTTS formats, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a>.</p> <p> <b>NTTS-only voices</b> </p> <p>When using NTTS-only voices
     * such as Kevin (en-US), this parameter is required and must be set to
     * <code>neural</code>. If the engine is not specified, or is set to
     * <code>standard</code>, this will result in an error. </p> <p>Type: String</p>
     * <p>Valid Values: <code>standard</code> | <code>neural</code> </p> <p>Required:
     * Yes</p> <p> <b>Standard voices</b> </p> <p>For standard voices, this is not
     * required; the engine parameter defaults to <code>standard</code>. If the engine
     * is not specified, or is set to <code>standard</code> and an NTTS-only voice is
     * selected, this will result in an error. </p>
     */
    inline void SetEngine(const Engine& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>Specifies the engine (<code>standard</code> or <code>neural</code>) for
     * Amazon Polly to use when processing input text for speech synthesis. For
     * information on Amazon Polly voices and which voices are available in
     * standard-only, NTTS-only, and both standard and NTTS formats, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a>.</p> <p> <b>NTTS-only voices</b> </p> <p>When using NTTS-only voices
     * such as Kevin (en-US), this parameter is required and must be set to
     * <code>neural</code>. If the engine is not specified, or is set to
     * <code>standard</code>, this will result in an error. </p> <p>Type: String</p>
     * <p>Valid Values: <code>standard</code> | <code>neural</code> </p> <p>Required:
     * Yes</p> <p> <b>Standard voices</b> </p> <p>For standard voices, this is not
     * required; the engine parameter defaults to <code>standard</code>. If the engine
     * is not specified, or is set to <code>standard</code> and an NTTS-only voice is
     * selected, this will result in an error. </p>
     */
    inline void SetEngine(Engine&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>Specifies the engine (<code>standard</code> or <code>neural</code>) for
     * Amazon Polly to use when processing input text for speech synthesis. For
     * information on Amazon Polly voices and which voices are available in
     * standard-only, NTTS-only, and both standard and NTTS formats, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a>.</p> <p> <b>NTTS-only voices</b> </p> <p>When using NTTS-only voices
     * such as Kevin (en-US), this parameter is required and must be set to
     * <code>neural</code>. If the engine is not specified, or is set to
     * <code>standard</code>, this will result in an error. </p> <p>Type: String</p>
     * <p>Valid Values: <code>standard</code> | <code>neural</code> </p> <p>Required:
     * Yes</p> <p> <b>Standard voices</b> </p> <p>For standard voices, this is not
     * required; the engine parameter defaults to <code>standard</code>. If the engine
     * is not specified, or is set to <code>standard</code> and an NTTS-only voice is
     * selected, this will result in an error. </p>
     */
    inline SynthesizeSpeechRequest& WithEngine(const Engine& value) { SetEngine(value); return *this;}

    /**
     * <p>Specifies the engine (<code>standard</code> or <code>neural</code>) for
     * Amazon Polly to use when processing input text for speech synthesis. For
     * information on Amazon Polly voices and which voices are available in
     * standard-only, NTTS-only, and both standard and NTTS formats, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a>.</p> <p> <b>NTTS-only voices</b> </p> <p>When using NTTS-only voices
     * such as Kevin (en-US), this parameter is required and must be set to
     * <code>neural</code>. If the engine is not specified, or is set to
     * <code>standard</code>, this will result in an error. </p> <p>Type: String</p>
     * <p>Valid Values: <code>standard</code> | <code>neural</code> </p> <p>Required:
     * Yes</p> <p> <b>Standard voices</b> </p> <p>For standard voices, this is not
     * required; the engine parameter defaults to <code>standard</code>. If the engine
     * is not specified, or is set to <code>standard</code> and an NTTS-only voice is
     * selected, this will result in an error. </p>
     */
    inline SynthesizeSpeechRequest& WithEngine(Engine&& value) { SetEngine(std::move(value)); return *this;}


    /**
     * <p>Optional language code for the Synthesize Speech request. This is only
     * necessary if using a bilingual voice, such as Aditi, which can be used for
     * either Indian English (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is
     * used and no language code is specified, Amazon Polly will use the default
     * language of the bilingual voice. The default language for any voice is the one
     * returned by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Optional language code for the Synthesize Speech request. This is only
     * necessary if using a bilingual voice, such as Aditi, which can be used for
     * either Indian English (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is
     * used and no language code is specified, Amazon Polly will use the default
     * language of the bilingual voice. The default language for any voice is the one
     * returned by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>Optional language code for the Synthesize Speech request. This is only
     * necessary if using a bilingual voice, such as Aditi, which can be used for
     * either Indian English (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is
     * used and no language code is specified, Amazon Polly will use the default
     * language of the bilingual voice. The default language for any voice is the one
     * returned by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Optional language code for the Synthesize Speech request. This is only
     * necessary if using a bilingual voice, such as Aditi, which can be used for
     * either Indian English (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is
     * used and no language code is specified, Amazon Polly will use the default
     * language of the bilingual voice. The default language for any voice is the one
     * returned by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Optional language code for the Synthesize Speech request. This is only
     * necessary if using a bilingual voice, such as Aditi, which can be used for
     * either Indian English (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is
     * used and no language code is specified, Amazon Polly will use the default
     * language of the bilingual voice. The default language for any voice is the one
     * returned by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline SynthesizeSpeechRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Optional language code for the Synthesize Speech request. This is only
     * necessary if using a bilingual voice, such as Aditi, which can be used for
     * either Indian English (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is
     * used and no language code is specified, Amazon Polly will use the default
     * language of the bilingual voice. The default language for any voice is the one
     * returned by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline SynthesizeSpeechRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLexiconNames() const{ return m_lexiconNames; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline bool LexiconNamesHasBeenSet() const { return m_lexiconNamesHasBeenSet; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline void SetLexiconNames(const Aws::Vector<Aws::String>& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames = value; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline void SetLexiconNames(Aws::Vector<Aws::String>&& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames = std::move(value); }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline SynthesizeSpeechRequest& WithLexiconNames(const Aws::Vector<Aws::String>& value) { SetLexiconNames(value); return *this;}

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline SynthesizeSpeechRequest& WithLexiconNames(Aws::Vector<Aws::String>&& value) { SetLexiconNames(std::move(value)); return *this;}

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline SynthesizeSpeechRequest& AddLexiconNames(const Aws::String& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.push_back(value); return *this; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline SynthesizeSpeechRequest& AddLexiconNames(Aws::String&& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.push_back(std::move(value)); return *this; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline SynthesizeSpeechRequest& AddLexiconNames(const char* value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.push_back(value); return *this; }


    /**
     * <p> The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     * <p>When pcm is used, the content returned is audio/pcm in a signed 16-bit, 1
     * channel (mono), little-endian format. </p>
     */
    inline const OutputFormat& GetOutputFormat() const{ return m_outputFormat; }

    /**
     * <p> The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     * <p>When pcm is used, the content returned is audio/pcm in a signed 16-bit, 1
     * channel (mono), little-endian format. </p>
     */
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }

    /**
     * <p> The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     * <p>When pcm is used, the content returned is audio/pcm in a signed 16-bit, 1
     * channel (mono), little-endian format. </p>
     */
    inline void SetOutputFormat(const OutputFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    /**
     * <p> The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     * <p>When pcm is used, the content returned is audio/pcm in a signed 16-bit, 1
     * channel (mono), little-endian format. </p>
     */
    inline void SetOutputFormat(OutputFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }

    /**
     * <p> The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     * <p>When pcm is used, the content returned is audio/pcm in a signed 16-bit, 1
     * channel (mono), little-endian format. </p>
     */
    inline SynthesizeSpeechRequest& WithOutputFormat(const OutputFormat& value) { SetOutputFormat(value); return *this;}

    /**
     * <p> The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     * <p>When pcm is used, the content returned is audio/pcm in a signed 16-bit, 1
     * channel (mono), little-endian format. </p>
     */
    inline SynthesizeSpeechRequest& WithOutputFormat(OutputFormat&& value) { SetOutputFormat(std::move(value)); return *this;}


    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", "22050", and "24000". The default value for
     * standard voices is "22050". The default value for neural voices is "24000".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline const Aws::String& GetSampleRate() const{ return m_sampleRate; }

    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", "22050", and "24000". The default value for
     * standard voices is "22050". The default value for neural voices is "24000".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }

    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", "22050", and "24000". The default value for
     * standard voices is "22050". The default value for neural voices is "24000".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline void SetSampleRate(const Aws::String& value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", "22050", and "24000". The default value for
     * standard voices is "22050". The default value for neural voices is "24000".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline void SetSampleRate(Aws::String&& value) { m_sampleRateHasBeenSet = true; m_sampleRate = std::move(value); }

    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", "22050", and "24000". The default value for
     * standard voices is "22050". The default value for neural voices is "24000".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline void SetSampleRate(const char* value) { m_sampleRateHasBeenSet = true; m_sampleRate.assign(value); }

    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", "22050", and "24000". The default value for
     * standard voices is "22050". The default value for neural voices is "24000".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline SynthesizeSpeechRequest& WithSampleRate(const Aws::String& value) { SetSampleRate(value); return *this;}

    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", "22050", and "24000". The default value for
     * standard voices is "22050". The default value for neural voices is "24000".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline SynthesizeSpeechRequest& WithSampleRate(Aws::String&& value) { SetSampleRate(std::move(value)); return *this;}

    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", "22050", and "24000". The default value for
     * standard voices is "22050". The default value for neural voices is "24000".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline SynthesizeSpeechRequest& WithSampleRate(const char* value) { SetSampleRate(value); return *this;}


    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline const Aws::Vector<SpeechMarkType>& GetSpeechMarkTypes() const{ return m_speechMarkTypes; }

    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline bool SpeechMarkTypesHasBeenSet() const { return m_speechMarkTypesHasBeenSet; }

    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline void SetSpeechMarkTypes(const Aws::Vector<SpeechMarkType>& value) { m_speechMarkTypesHasBeenSet = true; m_speechMarkTypes = value; }

    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline void SetSpeechMarkTypes(Aws::Vector<SpeechMarkType>&& value) { m_speechMarkTypesHasBeenSet = true; m_speechMarkTypes = std::move(value); }

    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline SynthesizeSpeechRequest& WithSpeechMarkTypes(const Aws::Vector<SpeechMarkType>& value) { SetSpeechMarkTypes(value); return *this;}

    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline SynthesizeSpeechRequest& WithSpeechMarkTypes(Aws::Vector<SpeechMarkType>&& value) { SetSpeechMarkTypes(std::move(value)); return *this;}

    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline SynthesizeSpeechRequest& AddSpeechMarkTypes(const SpeechMarkType& value) { m_speechMarkTypesHasBeenSet = true; m_speechMarkTypes.push_back(value); return *this; }

    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline SynthesizeSpeechRequest& AddSpeechMarkTypes(SpeechMarkType&& value) { m_speechMarkTypesHasBeenSet = true; m_speechMarkTypes.push_back(std::move(value)); return *this; }


    /**
     * <p> Input text to synthesize. If you specify <code>ssml</code> as the
     * <code>TextType</code>, follow the SSML format for the input text. </p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p> Input text to synthesize. If you specify <code>ssml</code> as the
     * <code>TextType</code>, follow the SSML format for the input text. </p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p> Input text to synthesize. If you specify <code>ssml</code> as the
     * <code>TextType</code>, follow the SSML format for the input text. </p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p> Input text to synthesize. If you specify <code>ssml</code> as the
     * <code>TextType</code>, follow the SSML format for the input text. </p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p> Input text to synthesize. If you specify <code>ssml</code> as the
     * <code>TextType</code>, follow the SSML format for the input text. </p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p> Input text to synthesize. If you specify <code>ssml</code> as the
     * <code>TextType</code>, follow the SSML format for the input text. </p>
     */
    inline SynthesizeSpeechRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p> Input text to synthesize. If you specify <code>ssml</code> as the
     * <code>TextType</code>, follow the SSML format for the input text. </p>
     */
    inline SynthesizeSpeechRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p> Input text to synthesize. If you specify <code>ssml</code> as the
     * <code>TextType</code>, follow the SSML format for the input text. </p>
     */
    inline SynthesizeSpeechRequest& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p> Specifies whether the input text is plain text or SSML. The default value is
     * plain text. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/ssml.html">Using SSML</a>.</p>
     */
    inline const TextType& GetTextType() const{ return m_textType; }

    /**
     * <p> Specifies whether the input text is plain text or SSML. The default value is
     * plain text. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/ssml.html">Using SSML</a>.</p>
     */
    inline bool TextTypeHasBeenSet() const { return m_textTypeHasBeenSet; }

    /**
     * <p> Specifies whether the input text is plain text or SSML. The default value is
     * plain text. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/ssml.html">Using SSML</a>.</p>
     */
    inline void SetTextType(const TextType& value) { m_textTypeHasBeenSet = true; m_textType = value; }

    /**
     * <p> Specifies whether the input text is plain text or SSML. The default value is
     * plain text. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/ssml.html">Using SSML</a>.</p>
     */
    inline void SetTextType(TextType&& value) { m_textTypeHasBeenSet = true; m_textType = std::move(value); }

    /**
     * <p> Specifies whether the input text is plain text or SSML. The default value is
     * plain text. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/ssml.html">Using SSML</a>.</p>
     */
    inline SynthesizeSpeechRequest& WithTextType(const TextType& value) { SetTextType(value); return *this;}

    /**
     * <p> Specifies whether the input text is plain text or SSML. The default value is
     * plain text. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/ssml.html">Using SSML</a>.</p>
     */
    inline SynthesizeSpeechRequest& WithTextType(TextType&& value) { SetTextType(std::move(value)); return *this;}


    /**
     * <p> Voice ID to use for the synthesis. You can get a list of available voice IDs
     * by calling the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation. </p>
     */
    inline const VoiceId& GetVoiceId() const{ return m_voiceId; }

    /**
     * <p> Voice ID to use for the synthesis. You can get a list of available voice IDs
     * by calling the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation. </p>
     */
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }

    /**
     * <p> Voice ID to use for the synthesis. You can get a list of available voice IDs
     * by calling the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation. </p>
     */
    inline void SetVoiceId(const VoiceId& value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }

    /**
     * <p> Voice ID to use for the synthesis. You can get a list of available voice IDs
     * by calling the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation. </p>
     */
    inline void SetVoiceId(VoiceId&& value) { m_voiceIdHasBeenSet = true; m_voiceId = std::move(value); }

    /**
     * <p> Voice ID to use for the synthesis. You can get a list of available voice IDs
     * by calling the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation. </p>
     */
    inline SynthesizeSpeechRequest& WithVoiceId(const VoiceId& value) { SetVoiceId(value); return *this;}

    /**
     * <p> Voice ID to use for the synthesis. You can get a list of available voice IDs
     * by calling the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation. </p>
     */
    inline SynthesizeSpeechRequest& WithVoiceId(VoiceId&& value) { SetVoiceId(std::move(value)); return *this;}

  private:

    Engine m_engine;
    bool m_engineHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::Vector<Aws::String> m_lexiconNames;
    bool m_lexiconNamesHasBeenSet;

    OutputFormat m_outputFormat;
    bool m_outputFormatHasBeenSet;

    Aws::String m_sampleRate;
    bool m_sampleRateHasBeenSet;

    Aws::Vector<SpeechMarkType> m_speechMarkTypes;
    bool m_speechMarkTypesHasBeenSet;

    Aws::String m_text;
    bool m_textHasBeenSet;

    TextType m_textType;
    bool m_textTypeHasBeenSet;

    VoiceId m_voiceId;
    bool m_voiceIdHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
