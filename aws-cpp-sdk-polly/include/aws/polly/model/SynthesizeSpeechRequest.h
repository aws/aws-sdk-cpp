/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/polly/PollyRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/polly/model/OutputFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/TextType.h>
#include <aws/polly/model/VoiceId.h>

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
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLexiconNames() const{ return m_lexiconNames; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline void SetLexiconNames(const Aws::Vector<Aws::String>& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames = value; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline void SetLexiconNames(Aws::Vector<Aws::String>&& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames = value; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline SynthesizeSpeechRequest& WithLexiconNames(const Aws::Vector<Aws::String>& value) { SetLexiconNames(value); return *this;}

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline SynthesizeSpeechRequest& WithLexiconNames(Aws::Vector<Aws::String>&& value) { SetLexiconNames(value); return *this;}

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline SynthesizeSpeechRequest& AddLexiconNames(const Aws::String& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.push_back(value); return *this; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline SynthesizeSpeechRequest& AddLexiconNames(Aws::String&& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.push_back(value); return *this; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline SynthesizeSpeechRequest& AddLexiconNames(const char* value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.push_back(value); return *this; }

    /**
     * <p> The audio format in which the resulting stream will be encoded. </p>
     */
    inline const OutputFormat& GetOutputFormat() const{ return m_outputFormat; }

    /**
     * <p> The audio format in which the resulting stream will be encoded. </p>
     */
    inline void SetOutputFormat(const OutputFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    /**
     * <p> The audio format in which the resulting stream will be encoded. </p>
     */
    inline void SetOutputFormat(OutputFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    /**
     * <p> The audio format in which the resulting stream will be encoded. </p>
     */
    inline SynthesizeSpeechRequest& WithOutputFormat(const OutputFormat& value) { SetOutputFormat(value); return *this;}

    /**
     * <p> The audio format in which the resulting stream will be encoded. </p>
     */
    inline SynthesizeSpeechRequest& WithOutputFormat(OutputFormat&& value) { SetOutputFormat(value); return *this;}

    /**
     * <p> The audio frequency specified in Hz. </p> <p>The valid values for
     * <code>mp3</code> and <code>ogg_vorbis</code> are "8000", "16000", and "22050".
     * The default value is "22050". </p> <p> Valid values for <code>pcm</code> are
     * "8000" and "16000" The default value is "16000". </p>
     */
    inline const Aws::String& GetSampleRate() const{ return m_sampleRate; }

    /**
     * <p> The audio frequency specified in Hz. </p> <p>The valid values for
     * <code>mp3</code> and <code>ogg_vorbis</code> are "8000", "16000", and "22050".
     * The default value is "22050". </p> <p> Valid values for <code>pcm</code> are
     * "8000" and "16000" The default value is "16000". </p>
     */
    inline void SetSampleRate(const Aws::String& value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * <p> The audio frequency specified in Hz. </p> <p>The valid values for
     * <code>mp3</code> and <code>ogg_vorbis</code> are "8000", "16000", and "22050".
     * The default value is "22050". </p> <p> Valid values for <code>pcm</code> are
     * "8000" and "16000" The default value is "16000". </p>
     */
    inline void SetSampleRate(Aws::String&& value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * <p> The audio frequency specified in Hz. </p> <p>The valid values for
     * <code>mp3</code> and <code>ogg_vorbis</code> are "8000", "16000", and "22050".
     * The default value is "22050". </p> <p> Valid values for <code>pcm</code> are
     * "8000" and "16000" The default value is "16000". </p>
     */
    inline void SetSampleRate(const char* value) { m_sampleRateHasBeenSet = true; m_sampleRate.assign(value); }

    /**
     * <p> The audio frequency specified in Hz. </p> <p>The valid values for
     * <code>mp3</code> and <code>ogg_vorbis</code> are "8000", "16000", and "22050".
     * The default value is "22050". </p> <p> Valid values for <code>pcm</code> are
     * "8000" and "16000" The default value is "16000". </p>
     */
    inline SynthesizeSpeechRequest& WithSampleRate(const Aws::String& value) { SetSampleRate(value); return *this;}

    /**
     * <p> The audio frequency specified in Hz. </p> <p>The valid values for
     * <code>mp3</code> and <code>ogg_vorbis</code> are "8000", "16000", and "22050".
     * The default value is "22050". </p> <p> Valid values for <code>pcm</code> are
     * "8000" and "16000" The default value is "16000". </p>
     */
    inline SynthesizeSpeechRequest& WithSampleRate(Aws::String&& value) { SetSampleRate(value); return *this;}

    /**
     * <p> The audio frequency specified in Hz. </p> <p>The valid values for
     * <code>mp3</code> and <code>ogg_vorbis</code> are "8000", "16000", and "22050".
     * The default value is "22050". </p> <p> Valid values for <code>pcm</code> are
     * "8000" and "16000" The default value is "16000". </p>
     */
    inline SynthesizeSpeechRequest& WithSampleRate(const char* value) { SetSampleRate(value); return *this;}

    /**
     * <p> Input text to synthesize. If you specify <code>ssml</code> as the
     * <code>TextType</code>, follow the SSML format for the input text. </p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p> Input text to synthesize. If you specify <code>ssml</code> as the
     * <code>TextType</code>, follow the SSML format for the input text. </p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p> Input text to synthesize. If you specify <code>ssml</code> as the
     * <code>TextType</code>, follow the SSML format for the input text. </p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = value; }

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
    inline SynthesizeSpeechRequest& WithText(Aws::String&& value) { SetText(value); return *this;}

    /**
     * <p> Input text to synthesize. If you specify <code>ssml</code> as the
     * <code>TextType</code>, follow the SSML format for the input text. </p>
     */
    inline SynthesizeSpeechRequest& WithText(const char* value) { SetText(value); return *this;}

    /**
     * <p> Specifies whether the input text is plain text or SSML. The default value is
     * plain text. For more information, see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/ssml.html">Using SSML</a>.</p>
     */
    inline const TextType& GetTextType() const{ return m_textType; }

    /**
     * <p> Specifies whether the input text is plain text or SSML. The default value is
     * plain text. For more information, see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/ssml.html">Using SSML</a>.</p>
     */
    inline void SetTextType(const TextType& value) { m_textTypeHasBeenSet = true; m_textType = value; }

    /**
     * <p> Specifies whether the input text is plain text or SSML. The default value is
     * plain text. For more information, see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/ssml.html">Using SSML</a>.</p>
     */
    inline void SetTextType(TextType&& value) { m_textTypeHasBeenSet = true; m_textType = value; }

    /**
     * <p> Specifies whether the input text is plain text or SSML. The default value is
     * plain text. For more information, see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/ssml.html">Using SSML</a>.</p>
     */
    inline SynthesizeSpeechRequest& WithTextType(const TextType& value) { SetTextType(value); return *this;}

    /**
     * <p> Specifies whether the input text is plain text or SSML. The default value is
     * plain text. For more information, see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/ssml.html">Using SSML</a>.</p>
     */
    inline SynthesizeSpeechRequest& WithTextType(TextType&& value) { SetTextType(value); return *this;}

    /**
     * <p> Voice ID to use for the synthesis. You can get a list of available voice IDs
     * by calling the <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation. </p>
     */
    inline const VoiceId& GetVoiceId() const{ return m_voiceId; }

    /**
     * <p> Voice ID to use for the synthesis. You can get a list of available voice IDs
     * by calling the <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation. </p>
     */
    inline void SetVoiceId(const VoiceId& value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }

    /**
     * <p> Voice ID to use for the synthesis. You can get a list of available voice IDs
     * by calling the <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation. </p>
     */
    inline void SetVoiceId(VoiceId&& value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }

    /**
     * <p> Voice ID to use for the synthesis. You can get a list of available voice IDs
     * by calling the <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation. </p>
     */
    inline SynthesizeSpeechRequest& WithVoiceId(const VoiceId& value) { SetVoiceId(value); return *this;}

    /**
     * <p> Voice ID to use for the synthesis. You can get a list of available voice IDs
     * by calling the <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation. </p>
     */
    inline SynthesizeSpeechRequest& WithVoiceId(VoiceId&& value) { SetVoiceId(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_lexiconNames;
    bool m_lexiconNamesHasBeenSet;
    OutputFormat m_outputFormat;
    bool m_outputFormatHasBeenSet;
    Aws::String m_sampleRate;
    bool m_sampleRateHasBeenSet;
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
