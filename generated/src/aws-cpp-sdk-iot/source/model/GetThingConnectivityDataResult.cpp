/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetThingConnectivityDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetThingConnectivityDataResult::GetThingConnectivityDataResult() : 
    m_connected(false),
    m_disconnectReason(DisconnectReasonValue::NOT_SET)
{
}

GetThingConnectivityDataResult::GetThingConnectivityDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetThingConnectivityDataResult()
{
  *this = result;
}

GetThingConnectivityDataResult& GetThingConnectivityDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");

  }

  if(jsonValue.ValueExists("connected"))
  {
    m_connected = jsonValue.GetBool("connected");

  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");

  }

  if(jsonValue.ValueExists("disconnectReason"))
  {
    m_disconnectReason = DisconnectReasonValueMapper::GetDisconnectReasonValueForName(jsonValue.GetString("disconnectReason"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
