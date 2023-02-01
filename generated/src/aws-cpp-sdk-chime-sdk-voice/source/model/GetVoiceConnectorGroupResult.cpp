/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/GetVoiceConnectorGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetVoiceConnectorGroupResult::GetVoiceConnectorGroupResult()
{
}

GetVoiceConnectorGroupResult::GetVoiceConnectorGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetVoiceConnectorGroupResult& GetVoiceConnectorGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VoiceConnectorGroup"))
  {
    m_voiceConnectorGroup = jsonValue.GetObject("VoiceConnectorGroup");

  }



  return *this;
}
