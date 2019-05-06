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

#include <aws/transcribestreaming/model/StartStreamTranscriptionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TranscribeStreamingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartStreamTranscriptionResult::StartStreamTranscriptionResult() : 
    m_languageCode(LanguageCode::NOT_SET),
    m_mediaSampleRateHertz(0),
    m_mediaEncoding(MediaEncoding::NOT_SET)
{
}

StartStreamTranscriptionResult::StartStreamTranscriptionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_languageCode(LanguageCode::NOT_SET),
    m_mediaSampleRateHertz(0),
    m_mediaEncoding(MediaEncoding::NOT_SET)
{
  *this = result;
}

StartStreamTranscriptionResult& StartStreamTranscriptionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  m_transcriptResultStream = jsonValue;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  const auto& languageCodeIter = headers.find("x-amzn-transcribe-language-code");
  if(languageCodeIter != headers.end())
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(languageCodeIter->second);
  }

  const auto& mediaSampleRateHertzIter = headers.find("x-amzn-transcribe-sample-rate");
  if(mediaSampleRateHertzIter != headers.end())
  {
     m_mediaSampleRateHertz = StringUtils::ConvertToInt32(mediaSampleRateHertzIter->second.c_str());
  }

  const auto& mediaEncodingIter = headers.find("x-amzn-transcribe-media-encoding");
  if(mediaEncodingIter != headers.end())
  {
    m_mediaEncoding = MediaEncodingMapper::GetMediaEncodingForName(mediaEncodingIter->second);
  }

  const auto& vocabularyNameIter = headers.find("x-amzn-transcribe-vocabulary-name");
  if(vocabularyNameIter != headers.end())
  {
    m_vocabularyName = vocabularyNameIter->second;
  }

  const auto& sessionIdIter = headers.find("x-amzn-transcribe-session-id");
  if(sessionIdIter != headers.end())
  {
    m_sessionId = sessionIdIter->second;
  }


  return *this;
}
