/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ListVoiceConnectorGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVoiceConnectorGroupsResult::ListVoiceConnectorGroupsResult()
{
}

ListVoiceConnectorGroupsResult::ListVoiceConnectorGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVoiceConnectorGroupsResult& ListVoiceConnectorGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VoiceConnectorGroups"))
  {
    Aws::Utils::Array<JsonView> voiceConnectorGroupsJsonList = jsonValue.GetArray("VoiceConnectorGroups");
    for(unsigned voiceConnectorGroupsIndex = 0; voiceConnectorGroupsIndex < voiceConnectorGroupsJsonList.GetLength(); ++voiceConnectorGroupsIndex)
    {
      m_voiceConnectorGroups.push_back(voiceConnectorGroupsJsonList[voiceConnectorGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
