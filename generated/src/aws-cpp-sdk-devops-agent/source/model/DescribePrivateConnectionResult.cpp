/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/devops-agent/model/DescribePrivateConnectionResult.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePrivateConnectionResult::DescribePrivateConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribePrivateConnectionResult& DescribePrivateConnectionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = PrivateConnectionTypeMapper::GetPrivateConnectionTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceGatewayId")) {
    m_resourceGatewayId = jsonValue.GetString("resourceGatewayId");
    m_resourceGatewayIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hostAddress")) {
    m_hostAddress = jsonValue.GetString("hostAddress");
    m_hostAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcId")) {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceConfigurationId")) {
    m_resourceConfigurationId = jsonValue.GetString("resourceConfigurationId");
    m_resourceConfigurationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PrivateConnectionStatusMapper::GetPrivateConnectionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("certificateExpiryTime")) {
    m_certificateExpiryTime = jsonValue.GetString("certificateExpiryTime");
    m_certificateExpiryTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
