/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/GetManagedThingConnectivityDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetManagedThingConnectivityDataResult::GetManagedThingConnectivityDataResult() : 
    m_connected(false),
    m_disconnectReason(DisconnectReasonValue::NOT_SET)
{
}

GetManagedThingConnectivityDataResult::GetManagedThingConnectivityDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetManagedThingConnectivityDataResult()
{
  *this = result;
}

GetManagedThingConnectivityDataResult& GetManagedThingConnectivityDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ManagedThingId"))
  {
    m_managedThingId = jsonValue.GetString("ManagedThingId");

  }

  if(jsonValue.ValueExists("Connected"))
  {
    m_connected = jsonValue.GetBool("Connected");

  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

  }

  if(jsonValue.ValueExists("DisconnectReason"))
  {
    m_disconnectReason = DisconnectReasonValueMapper::GetDisconnectReasonValueForName(jsonValue.GetString("DisconnectReason"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
