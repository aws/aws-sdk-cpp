/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ListVoiceConnectorTerminationCredentialsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVoiceConnectorTerminationCredentialsResult::ListVoiceConnectorTerminationCredentialsResult()
{
}

ListVoiceConnectorTerminationCredentialsResult::ListVoiceConnectorTerminationCredentialsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVoiceConnectorTerminationCredentialsResult& ListVoiceConnectorTerminationCredentialsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Usernames"))
  {
    Aws::Utils::Array<JsonView> usernamesJsonList = jsonValue.GetArray("Usernames");
    for(unsigned usernamesIndex = 0; usernamesIndex < usernamesJsonList.GetLength(); ++usernamesIndex)
    {
      m_usernames.push_back(usernamesJsonList[usernamesIndex].AsString());
    }
  }



  return *this;
}
