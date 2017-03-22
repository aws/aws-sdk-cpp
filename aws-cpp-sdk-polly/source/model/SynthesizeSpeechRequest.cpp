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
#include <aws/polly/model/SynthesizeSpeechRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Polly::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SynthesizeSpeechRequest::SynthesizeSpeechRequest() : 
    m_lexiconNamesHasBeenSet(false),
    m_outputFormat(OutputFormat::NOT_SET),
    m_outputFormatHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_textHasBeenSet(false),
    m_textType(TextType::NOT_SET),
    m_textTypeHasBeenSet(false),
    m_voiceId(VoiceId::NOT_SET),
    m_voiceIdHasBeenSet(false)
{
}

Aws::String SynthesizeSpeechRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lexiconNamesHasBeenSet)
  {
   Array<JsonValue> lexiconNamesJsonList(m_lexiconNames.size());
   for(unsigned lexiconNamesIndex = 0; lexiconNamesIndex < lexiconNamesJsonList.GetLength(); ++lexiconNamesIndex)
   {
     lexiconNamesJsonList[lexiconNamesIndex].AsString(m_lexiconNames[lexiconNamesIndex]);
   }
   payload.WithArray("LexiconNames", std::move(lexiconNamesJsonList));

  }

  if(m_outputFormatHasBeenSet)
  {
   payload.WithString("OutputFormat", OutputFormatMapper::GetNameForOutputFormat(m_outputFormat));
  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithString("SampleRate", m_sampleRate);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_textTypeHasBeenSet)
  {
   payload.WithString("TextType", TextTypeMapper::GetNameForTextType(m_textType));
  }

  if(m_voiceIdHasBeenSet)
  {
   payload.WithString("VoiceId", VoiceIdMapper::GetNameForVoiceId(m_voiceId));
  }

  return payload.WriteReadable();
}


void  SynthesizeSpeechRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  if(m_lexiconNamesHasBeenSet)
  {
    for(auto& item : m_lexiconNames)
    {
      uri.AddQueryStringParameter("LexiconNames", StringUtils::to_string(item));
    }
  }

  if(m_outputFormatHasBeenSet)
  {
    uri.AddQueryStringParameter("OutputFormat", OutputFormatMapper::GetNameForOutputFormat(m_outputFormat));
  }

  if(m_sampleRateHasBeenSet)
  {
    uri.AddQueryStringParameter("SampleRate", m_sampleRate);
  }

  if(m_textHasBeenSet)
  {
    uri.AddQueryStringParameter("Text", m_text);
  }

  if(m_textTypeHasBeenSet)
  {
    uri.AddQueryStringParameter("TextType", TextTypeMapper::GetNameForTextType(m_textType));
  }

  if(m_voiceIdHasBeenSet)
  {
    uri.AddQueryStringParameter("VoiceId", VoiceIdMapper::GetNameForVoiceId(m_voiceId));
  }

}



