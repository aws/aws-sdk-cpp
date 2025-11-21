/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreatePortalResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePortalResult::CreatePortalResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreatePortalResult& CreatePortalResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("authorization")) {
    m_authorization = jsonValue.GetObject("authorization");
    m_authorizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpointConfiguration")) {
    m_endpointConfiguration = jsonValue.GetObject("endpointConfiguration");
    m_endpointConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("includedPortalProductArns")) {
    Aws::Utils::Array<JsonView> includedPortalProductArnsJsonList = jsonValue.GetArray("includedPortalProductArns");
    for (unsigned includedPortalProductArnsIndex = 0; includedPortalProductArnsIndex < includedPortalProductArnsJsonList.GetLength();
         ++includedPortalProductArnsIndex) {
      m_includedPortalProductArns.push_back(includedPortalProductArnsJsonList[includedPortalProductArnsIndex].AsString());
    }
    m_includedPortalProductArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModified")) {
    m_lastModified = jsonValue.GetString("lastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastPublished")) {
    m_lastPublished = jsonValue.GetString("lastPublished");
    m_lastPublishedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastPublishedDescription")) {
    m_lastPublishedDescription = jsonValue.GetString("lastPublishedDescription");
    m_lastPublishedDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portalArn")) {
    m_portalArn = jsonValue.GetString("portalArn");
    m_portalArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portalContent")) {
    m_portalContent = jsonValue.GetObject("portalContent");
    m_portalContentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portalId")) {
    m_portalId = jsonValue.GetString("portalId");
    m_portalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publishStatus")) {
    m_publishStatus = PublishStatusMapper::GetPublishStatusForName(jsonValue.GetString("publishStatus"));
    m_publishStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rumAppMonitorName")) {
    m_rumAppMonitorName = jsonValue.GetString("rumAppMonitorName");
    m_rumAppMonitorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusException")) {
    m_statusException = jsonValue.GetObject("statusException");
    m_statusExceptionHasBeenSet = true;
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
