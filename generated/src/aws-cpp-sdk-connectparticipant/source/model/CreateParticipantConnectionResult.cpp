/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/CreateParticipantConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectParticipant::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateParticipantConnectionResult::CreateParticipantConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateParticipantConnectionResult& CreateParticipantConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Websocket"))
  {
    m_websocket = jsonValue.GetObject("Websocket");
    m_websocketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionCredentials"))
  {
    m_connectionCredentials = jsonValue.GetObject("ConnectionCredentials");
    m_connectionCredentialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebRTCConnection"))
  {
    m_webRTCConnection = jsonValue.GetObject("WebRTCConnection");
    m_webRTCConnectionHasBeenSet = true;
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
