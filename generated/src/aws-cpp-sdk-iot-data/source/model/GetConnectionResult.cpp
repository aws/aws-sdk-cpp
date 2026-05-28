/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iot-data/model/GetConnectionResult.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConnectionResult::GetConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetConnectionResult& GetConnectionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("connected")) {
    m_connected = jsonValue.GetBool("connected");
    m_connectedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("thingName")) {
    m_thingName = jsonValue.GetString("thingName");
    m_thingNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cleanSession")) {
    m_cleanSession = jsonValue.GetBool("cleanSession");
    m_cleanSessionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceIp")) {
    m_sourceIp = jsonValue.GetString("sourceIp");
    m_sourceIpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourcePort")) {
    m_sourcePort = jsonValue.GetInteger("sourcePort");
    m_sourcePortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetIp")) {
    m_targetIp = jsonValue.GetString("targetIp");
    m_targetIpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetPort")) {
    m_targetPort = jsonValue.GetInteger("targetPort");
    m_targetPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("keepAliveDuration")) {
    m_keepAliveDuration = jsonValue.GetInteger("keepAliveDuration");
    m_keepAliveDurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectedSince")) {
    m_connectedSince = jsonValue.GetInt64("connectedSince");
    m_connectedSinceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("disconnectedSince")) {
    m_disconnectedSince = jsonValue.GetInt64("disconnectedSince");
    m_disconnectedSinceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("disconnectReason")) {
    m_disconnectReason = jsonValue.GetString("disconnectReason");
    m_disconnectReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionExpiry")) {
    m_sessionExpiry = jsonValue.GetInt64("sessionExpiry");
    m_sessionExpiryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcEndpointId")) {
    m_vpcEndpointId = jsonValue.GetString("vpcEndpointId");
    m_vpcEndpointIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
