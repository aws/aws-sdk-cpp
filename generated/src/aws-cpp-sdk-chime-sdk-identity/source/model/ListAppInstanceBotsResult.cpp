/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/ListAppInstanceBotsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppInstanceBotsResult::ListAppInstanceBotsResult()
{
}

ListAppInstanceBotsResult::ListAppInstanceBotsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppInstanceBotsResult& ListAppInstanceBotsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppInstanceArn"))
  {
    m_appInstanceArn = jsonValue.GetString("AppInstanceArn");

  }

  if(jsonValue.ValueExists("AppInstanceBots"))
  {
    Aws::Utils::Array<JsonView> appInstanceBotsJsonList = jsonValue.GetArray("AppInstanceBots");
    for(unsigned appInstanceBotsIndex = 0; appInstanceBotsIndex < appInstanceBotsJsonList.GetLength(); ++appInstanceBotsIndex)
    {
      m_appInstanceBots.push_back(appInstanceBotsJsonList[appInstanceBotsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
