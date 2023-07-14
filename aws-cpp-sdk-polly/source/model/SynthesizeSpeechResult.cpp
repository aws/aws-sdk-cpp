/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/SynthesizeSpeechResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Polly::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

SynthesizeSpeechResult::SynthesizeSpeechResult() : 
    m_requestCharacters(0)
{
}

SynthesizeSpeechResult::SynthesizeSpeechResult(SynthesizeSpeechResult&& toMove) : 
    m_audioStream(std::move(toMove.m_audioStream)),
    m_contentType(std::move(toMove.m_contentType)),
    m_requestCharacters(toMove.m_requestCharacters)
{
}

SynthesizeSpeechResult& SynthesizeSpeechResult::operator=(SynthesizeSpeechResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_audioStream = std::move(toMove.m_audioStream);
   m_contentType = std::move(toMove.m_contentType);
   m_requestCharacters = toMove.m_requestCharacters;

   return *this;
}

SynthesizeSpeechResult::SynthesizeSpeechResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_requestCharacters(0)
{
  *this = std::move(result);
}

SynthesizeSpeechResult& SynthesizeSpeechResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_audioStream = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

  const auto& requestCharactersIter = headers.find("x-amzn-requestcharacters");
  if(requestCharactersIter != headers.end())
  {
     m_requestCharacters = StringUtils::ConvertToInt32(requestCharactersIter->second.c_str());
  }

   return *this;
}
