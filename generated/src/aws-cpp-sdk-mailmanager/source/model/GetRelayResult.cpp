/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetRelayResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRelayResult::GetRelayResult() : 
    m_serverPort(0)
{
}

GetRelayResult::GetRelayResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetRelayResult()
{
  *this = result;
}

GetRelayResult& GetRelayResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Authentication"))
  {
    m_authentication = jsonValue.GetObject("Authentication");

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }

  if(jsonValue.ValueExists("LastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("LastModifiedTimestamp");

  }

  if(jsonValue.ValueExists("RelayArn"))
  {
    m_relayArn = jsonValue.GetString("RelayArn");

  }

  if(jsonValue.ValueExists("RelayId"))
  {
    m_relayId = jsonValue.GetString("RelayId");

  }

  if(jsonValue.ValueExists("RelayName"))
  {
    m_relayName = jsonValue.GetString("RelayName");

  }

  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");

  }

  if(jsonValue.ValueExists("ServerPort"))
  {
    m_serverPort = jsonValue.GetInteger("ServerPort");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
