/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PutVoiceConnectorLoggingConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutVoiceConnectorLoggingConfigurationResult::PutVoiceConnectorLoggingConfigurationResult()
{
}

PutVoiceConnectorLoggingConfigurationResult::PutVoiceConnectorLoggingConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutVoiceConnectorLoggingConfigurationResult& PutVoiceConnectorLoggingConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LoggingConfiguration"))
  {
    m_loggingConfiguration = jsonValue.GetObject("LoggingConfiguration");

  }



  return *this;
}
