/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ListAvailableVoiceConnectorRegionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAvailableVoiceConnectorRegionsResult::ListAvailableVoiceConnectorRegionsResult()
{
}

ListAvailableVoiceConnectorRegionsResult::ListAvailableVoiceConnectorRegionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAvailableVoiceConnectorRegionsResult& ListAvailableVoiceConnectorRegionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VoiceConnectorRegions"))
  {
    Aws::Utils::Array<JsonView> voiceConnectorRegionsJsonList = jsonValue.GetArray("VoiceConnectorRegions");
    for(unsigned voiceConnectorRegionsIndex = 0; voiceConnectorRegionsIndex < voiceConnectorRegionsJsonList.GetLength(); ++voiceConnectorRegionsIndex)
    {
      m_voiceConnectorRegions.push_back(VoiceConnectorAwsRegionMapper::GetVoiceConnectorAwsRegionForName(voiceConnectorRegionsJsonList[voiceConnectorRegionsIndex].AsString()));
    }
  }



  return *this;
}
