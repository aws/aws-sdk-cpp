﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/TaskStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/polly/model/OutputFormat.h>
#include <aws/polly/model/TextType.h>
#include <aws/polly/model/VoiceId.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/polly/model/SpeechMarkType.h>
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
   * <p>SynthesisTask object that provides information about a speech synthesis
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/SynthesisTask">AWS
   * API Reference</a></p>
   */
  class AWS_POLLY_API SynthesisTask
  {
  public:
    SynthesisTask();
    SynthesisTask(Aws::Utils::Json::JsonView jsonValue);
    SynthesisTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Polly generated identifier for a speech synthesis task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The Amazon Polly generated identifier for a speech synthesis task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The Amazon Polly generated identifier for a speech synthesis task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The Amazon Polly generated identifier for a speech synthesis task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The Amazon Polly generated identifier for a speech synthesis task.</p>
     */
    inline SynthesisTask& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The Amazon Polly generated identifier for a speech synthesis task.</p>
     */
    inline SynthesisTask& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Polly generated identifier for a speech synthesis task.</p>
     */
    inline SynthesisTask& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>Current status of the individual speech synthesis task.</p>
     */
    inline const TaskStatus& GetTaskStatus() const{ return m_taskStatus; }

    /**
     * <p>Current status of the individual speech synthesis task.</p>
     */
    inline void SetTaskStatus(const TaskStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }

    /**
     * <p>Current status of the individual speech synthesis task.</p>
     */
    inline void SetTaskStatus(TaskStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }

    /**
     * <p>Current status of the individual speech synthesis task.</p>
     */
    inline SynthesisTask& WithTaskStatus(const TaskStatus& value) { SetTaskStatus(value); return *this;}

    /**
     * <p>Current status of the individual speech synthesis task.</p>
     */
    inline SynthesisTask& WithTaskStatus(TaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}


    /**
     * <p>Reason for the current status of a specific speech synthesis task, including
     * errors if the task has failed.</p>
     */
    inline const Aws::String& GetTaskStatusReason() const{ return m_taskStatusReason; }

    /**
     * <p>Reason for the current status of a specific speech synthesis task, including
     * errors if the task has failed.</p>
     */
    inline void SetTaskStatusReason(const Aws::String& value) { m_taskStatusReasonHasBeenSet = true; m_taskStatusReason = value; }

    /**
     * <p>Reason for the current status of a specific speech synthesis task, including
     * errors if the task has failed.</p>
     */
    inline void SetTaskStatusReason(Aws::String&& value) { m_taskStatusReasonHasBeenSet = true; m_taskStatusReason = std::move(value); }

    /**
     * <p>Reason for the current status of a specific speech synthesis task, including
     * errors if the task has failed.</p>
     */
    inline void SetTaskStatusReason(const char* value) { m_taskStatusReasonHasBeenSet = true; m_taskStatusReason.assign(value); }

    /**
     * <p>Reason for the current status of a specific speech synthesis task, including
     * errors if the task has failed.</p>
     */
    inline SynthesisTask& WithTaskStatusReason(const Aws::String& value) { SetTaskStatusReason(value); return *this;}

    /**
     * <p>Reason for the current status of a specific speech synthesis task, including
     * errors if the task has failed.</p>
     */
    inline SynthesisTask& WithTaskStatusReason(Aws::String&& value) { SetTaskStatusReason(std::move(value)); return *this;}

    /**
     * <p>Reason for the current status of a specific speech synthesis task, including
     * errors if the task has failed.</p>
     */
    inline SynthesisTask& WithTaskStatusReason(const char* value) { SetTaskStatusReason(value); return *this;}


    /**
     * <p>Pathway for the output speech file.</p>
     */
    inline const Aws::String& GetOutputUri() const{ return m_outputUri; }

    /**
     * <p>Pathway for the output speech file.</p>
     */
    inline void SetOutputUri(const Aws::String& value) { m_outputUriHasBeenSet = true; m_outputUri = value; }

    /**
     * <p>Pathway for the output speech file.</p>
     */
    inline void SetOutputUri(Aws::String&& value) { m_outputUriHasBeenSet = true; m_outputUri = std::move(value); }

    /**
     * <p>Pathway for the output speech file.</p>
     */
    inline void SetOutputUri(const char* value) { m_outputUriHasBeenSet = true; m_outputUri.assign(value); }

    /**
     * <p>Pathway for the output speech file.</p>
     */
    inline SynthesisTask& WithOutputUri(const Aws::String& value) { SetOutputUri(value); return *this;}

    /**
     * <p>Pathway for the output speech file.</p>
     */
    inline SynthesisTask& WithOutputUri(Aws::String&& value) { SetOutputUri(std::move(value)); return *this;}

    /**
     * <p>Pathway for the output speech file.</p>
     */
    inline SynthesisTask& WithOutputUri(const char* value) { SetOutputUri(value); return *this;}


    /**
     * <p>Timestamp for the time the synthesis task was started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Timestamp for the time the synthesis task was started.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Timestamp for the time the synthesis task was started.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Timestamp for the time the synthesis task was started.</p>
     */
    inline SynthesisTask& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Timestamp for the time the synthesis task was started.</p>
     */
    inline SynthesisTask& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Number of billable characters synthesized.</p>
     */
    inline int GetRequestCharacters() const{ return m_requestCharacters; }

    /**
     * <p>Number of billable characters synthesized.</p>
     */
    inline void SetRequestCharacters(int value) { m_requestCharactersHasBeenSet = true; m_requestCharacters = value; }

    /**
     * <p>Number of billable characters synthesized.</p>
     */
    inline SynthesisTask& WithRequestCharacters(int value) { SetRequestCharacters(value); return *this;}


    /**
     * <p>ARN for the SNS topic optionally used for providing status notification for a
     * speech synthesis task.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>ARN for the SNS topic optionally used for providing status notification for a
     * speech synthesis task.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>ARN for the SNS topic optionally used for providing status notification for a
     * speech synthesis task.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>ARN for the SNS topic optionally used for providing status notification for a
     * speech synthesis task.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>ARN for the SNS topic optionally used for providing status notification for a
     * speech synthesis task.</p>
     */
    inline SynthesisTask& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>ARN for the SNS topic optionally used for providing status notification for a
     * speech synthesis task.</p>
     */
    inline SynthesisTask& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>ARN for the SNS topic optionally used for providing status notification for a
     * speech synthesis task.</p>
     */
    inline SynthesisTask& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLexiconNames() const{ return m_lexiconNames; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. </p>
     */
    inline void SetLexiconNames(const Aws::Vector<Aws::String>& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames = value; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. </p>
     */
    inline void SetLexiconNames(Aws::Vector<Aws::String>&& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames = std::move(value); }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. </p>
     */
    inline SynthesisTask& WithLexiconNames(const Aws::Vector<Aws::String>& value) { SetLexiconNames(value); return *this;}

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. </p>
     */
    inline SynthesisTask& WithLexiconNames(Aws::Vector<Aws::String>&& value) { SetLexiconNames(std::move(value)); return *this;}

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. </p>
     */
    inline SynthesisTask& AddLexiconNames(const Aws::String& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.push_back(value); return *this; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. </p>
     */
    inline SynthesisTask& AddLexiconNames(Aws::String&& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.push_back(std::move(value)); return *this; }

    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. </p>
     */
    inline SynthesisTask& AddLexiconNames(const char* value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.push_back(value); return *this; }


    /**
     * <p>The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     */
    inline const OutputFormat& GetOutputFormat() const{ return m_outputFormat; }

    /**
     * <p>The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     */
    inline void SetOutputFormat(const OutputFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    /**
     * <p>The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     */
    inline void SetOutputFormat(OutputFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }

    /**
     * <p>The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     */
    inline SynthesisTask& WithOutputFormat(const OutputFormat& value) { SetOutputFormat(value); return *this;}

    /**
     * <p>The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     */
    inline SynthesisTask& WithOutputFormat(OutputFormat&& value) { SetOutputFormat(std::move(value)); return *this;}


    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", and "22050". The default value is "22050".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline const Aws::String& GetSampleRate() const{ return m_sampleRate; }

    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", and "22050". The default value is "22050".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline void SetSampleRate(const Aws::String& value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", and "22050". The default value is "22050".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline void SetSampleRate(Aws::String&& value) { m_sampleRateHasBeenSet = true; m_sampleRate = std::move(value); }

    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", and "22050". The default value is "22050".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline void SetSampleRate(const char* value) { m_sampleRateHasBeenSet = true; m_sampleRate.assign(value); }

    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", and "22050". The default value is "22050".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline SynthesisTask& WithSampleRate(const Aws::String& value) { SetSampleRate(value); return *this;}

    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", and "22050". The default value is "22050".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline SynthesisTask& WithSampleRate(Aws::String&& value) { SetSampleRate(std::move(value)); return *this;}

    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", and "22050". The default value is "22050".</p>
     * <p>Valid values for pcm are "8000" and "16000" The default value is "16000".
     * </p>
     */
    inline SynthesisTask& WithSampleRate(const char* value) { SetSampleRate(value); return *this;}


    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline const Aws::Vector<SpeechMarkType>& GetSpeechMarkTypes() const{ return m_speechMarkTypes; }

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
    inline SynthesisTask& WithSpeechMarkTypes(const Aws::Vector<SpeechMarkType>& value) { SetSpeechMarkTypes(value); return *this;}

    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline SynthesisTask& WithSpeechMarkTypes(Aws::Vector<SpeechMarkType>&& value) { SetSpeechMarkTypes(std::move(value)); return *this;}

    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline SynthesisTask& AddSpeechMarkTypes(const SpeechMarkType& value) { m_speechMarkTypesHasBeenSet = true; m_speechMarkTypes.push_back(value); return *this; }

    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline SynthesisTask& AddSpeechMarkTypes(SpeechMarkType&& value) { m_speechMarkTypesHasBeenSet = true; m_speechMarkTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether the input text is plain text or SSML. The default value is
     * plain text. </p>
     */
    inline const TextType& GetTextType() const{ return m_textType; }

    /**
     * <p>Specifies whether the input text is plain text or SSML. The default value is
     * plain text. </p>
     */
    inline void SetTextType(const TextType& value) { m_textTypeHasBeenSet = true; m_textType = value; }

    /**
     * <p>Specifies whether the input text is plain text or SSML. The default value is
     * plain text. </p>
     */
    inline void SetTextType(TextType&& value) { m_textTypeHasBeenSet = true; m_textType = std::move(value); }

    /**
     * <p>Specifies whether the input text is plain text or SSML. The default value is
     * plain text. </p>
     */
    inline SynthesisTask& WithTextType(const TextType& value) { SetTextType(value); return *this;}

    /**
     * <p>Specifies whether the input text is plain text or SSML. The default value is
     * plain text. </p>
     */
    inline SynthesisTask& WithTextType(TextType&& value) { SetTextType(std::move(value)); return *this;}


    /**
     * <p>Voice ID to use for the synthesis. </p>
     */
    inline const VoiceId& GetVoiceId() const{ return m_voiceId; }

    /**
     * <p>Voice ID to use for the synthesis. </p>
     */
    inline void SetVoiceId(const VoiceId& value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }

    /**
     * <p>Voice ID to use for the synthesis. </p>
     */
    inline void SetVoiceId(VoiceId&& value) { m_voiceIdHasBeenSet = true; m_voiceId = std::move(value); }

    /**
     * <p>Voice ID to use for the synthesis. </p>
     */
    inline SynthesisTask& WithVoiceId(const VoiceId& value) { SetVoiceId(value); return *this;}

    /**
     * <p>Voice ID to use for the synthesis. </p>
     */
    inline SynthesisTask& WithVoiceId(VoiceId&& value) { SetVoiceId(std::move(value)); return *this;}


    /**
     * <p>Optional language code for a synthesis task. This is only necessary if using
     * a bilingual voice, such as Aditi, which can be used for either Indian English
     * (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is used and no language
     * code is specified, Amazon Polly will use the default language of the bilingual
     * voice. The default language for any voice is the one returned by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Optional language code for a synthesis task. This is only necessary if using
     * a bilingual voice, such as Aditi, which can be used for either Indian English
     * (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is used and no language
     * code is specified, Amazon Polly will use the default language of the bilingual
     * voice. The default language for any voice is the one returned by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Optional language code for a synthesis task. This is only necessary if using
     * a bilingual voice, such as Aditi, which can be used for either Indian English
     * (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is used and no language
     * code is specified, Amazon Polly will use the default language of the bilingual
     * voice. The default language for any voice is the one returned by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Optional language code for a synthesis task. This is only necessary if using
     * a bilingual voice, such as Aditi, which can be used for either Indian English
     * (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is used and no language
     * code is specified, Amazon Polly will use the default language of the bilingual
     * voice. The default language for any voice is the one returned by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline SynthesisTask& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Optional language code for a synthesis task. This is only necessary if using
     * a bilingual voice, such as Aditi, which can be used for either Indian English
     * (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is used and no language
     * code is specified, Amazon Polly will use the default language of the bilingual
     * voice. The default language for any voice is the one returned by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline SynthesisTask& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet;

    TaskStatus m_taskStatus;
    bool m_taskStatusHasBeenSet;

    Aws::String m_taskStatusReason;
    bool m_taskStatusReasonHasBeenSet;

    Aws::String m_outputUri;
    bool m_outputUriHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    int m_requestCharacters;
    bool m_requestCharactersHasBeenSet;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet;

    Aws::Vector<Aws::String> m_lexiconNames;
    bool m_lexiconNamesHasBeenSet;

    OutputFormat m_outputFormat;
    bool m_outputFormatHasBeenSet;

    Aws::String m_sampleRate;
    bool m_sampleRateHasBeenSet;

    Aws::Vector<SpeechMarkType> m_speechMarkTypes;
    bool m_speechMarkTypesHasBeenSet;

    TextType m_textType;
    bool m_textTypeHasBeenSet;

    VoiceId m_voiceId;
    bool m_voiceIdHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
