/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-web/model/GetWebFunctionEndpointResult.h>

#include <utility>

using namespace Aws::LambdaWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWebFunctionEndpointResult::GetWebFunctionEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetWebFunctionEndpointResult& GetWebFunctionEndpointResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("functionArn")) {
    m_functionArn = jsonValue.GetString("functionArn");
    m_functionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpointArn")) {
    m_endpointArn = jsonValue.GetString("endpointArn");
    m_endpointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpointName")) {
    m_endpointName = jsonValue.GetString("endpointName");
    m_endpointNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpointType")) {
    m_endpointType = EndpointTypeMapper::GetEndpointTypeForName(jsonValue.GetString("endpointType"));
    m_endpointTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainName")) {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authType")) {
    m_authType = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("authType"));
    m_authTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoDeploymentMode")) {
    m_autoDeploymentMode = AutoDeploymentModeMapper::GetAutoDeploymentModeForName(jsonValue.GetString("autoDeploymentMode"));
    m_autoDeploymentModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revisionWeights")) {
    Aws::Utils::Array<JsonView> revisionWeightsJsonList = jsonValue.GetArray("revisionWeights");
    for (unsigned revisionWeightsIndex = 0; revisionWeightsIndex < revisionWeightsJsonList.GetLength(); ++revisionWeightsIndex) {
      m_revisionWeights.push_back(revisionWeightsJsonList[revisionWeightsIndex].AsObject());
    }
    m_revisionWeightsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scalingConfig")) {
    m_scalingConfig = jsonValue.GetObject("scalingConfig");
    m_scalingConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("throttleConfig")) {
    m_throttleConfig = jsonValue.GetObject("throttleConfig");
    m_throttleConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = EndpointStateMapper::GetEndpointStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateReason")) {
    m_stateReason = jsonValue.GetString("stateReason");
    m_stateReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateStatus")) {
    m_updateStatus = EndpointUpdateStatusMapper::GetEndpointUpdateStatusForName(jsonValue.GetString("updateStatus"));
    m_updateStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateStatusReason")) {
    m_updateStatusReason = jsonValue.GetString("updateStatusReason");
    m_updateStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regionalEndpoints")) {
    Aws::Map<Aws::String, JsonView> regionalEndpointsJsonMap = jsonValue.GetObject("regionalEndpoints").GetAllObjects();
    for (auto& regionalEndpointsItem : regionalEndpointsJsonMap) {
      m_regionalEndpoints[regionalEndpointsItem.first] = regionalEndpointsItem.second.AsObject();
    }
    m_regionalEndpointsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
