/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/ListSpeakersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::VoiceID::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSpeakersResult::ListSpeakersResult()
{
}

ListSpeakersResult::ListSpeakersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSpeakersResult& ListSpeakersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("SpeakerSummaries"))
  {
    Aws::Utils::Array<JsonView> speakerSummariesJsonList = jsonValue.GetArray("SpeakerSummaries");
    for(unsigned speakerSummariesIndex = 0; speakerSummariesIndex < speakerSummariesJsonList.GetLength(); ++speakerSummariesIndex)
    {
      m_speakerSummaries.push_back(speakerSummariesJsonList[speakerSummariesIndex].AsObject());
    }
  }



  return *this;
}
