/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PutVoiceConnectorOriginationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutVoiceConnectorOriginationResult::PutVoiceConnectorOriginationResult()
{
}

PutVoiceConnectorOriginationResult::PutVoiceConnectorOriginationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutVoiceConnectorOriginationResult& PutVoiceConnectorOriginationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Origination"))
  {
    m_origination = jsonValue.GetObject("Origination");

  }



  return *this;
}
