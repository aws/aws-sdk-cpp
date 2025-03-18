﻿/**
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

GetRelayResult::GetRelayResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRelayResult& GetRelayResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Authentication"))
  {
    m_authentication = jsonValue.GetObject("Authentication");
    m_authenticationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("LastModifiedTimestamp");
    m_lastModifiedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RelayArn"))
  {
    m_relayArn = jsonValue.GetString("RelayArn");
    m_relayArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RelayId"))
  {
    m_relayId = jsonValue.GetString("RelayId");
    m_relayIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RelayName"))
  {
    m_relayName = jsonValue.GetString("RelayName");
    m_relayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");
    m_serverNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerPort"))
  {
    m_serverPort = jsonValue.GetInteger("ServerPort");
    m_serverPortHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
