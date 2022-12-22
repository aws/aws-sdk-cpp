/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ListVoiceConnectorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVoiceConnectorsResult::ListVoiceConnectorsResult()
{
}

ListVoiceConnectorsResult::ListVoiceConnectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVoiceConnectorsResult& ListVoiceConnectorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VoiceConnectors"))
  {
    Aws::Utils::Array<JsonView> voiceConnectorsJsonList = jsonValue.GetArray("VoiceConnectors");
    for(unsigned voiceConnectorsIndex = 0; voiceConnectorsIndex < voiceConnectorsJsonList.GetLength(); ++voiceConnectorsIndex)
    {
      m_voiceConnectors.push_back(voiceConnectorsJsonList[voiceConnectorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
