/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/UpdatePortalResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIPortal::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePortalResult::UpdatePortalResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdatePortalResult& UpdatePortalResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("portalId")) {
    m_portalId = jsonValue.GetString("portalId");
    m_portalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portalArn")) {
    m_portalArn = jsonValue.GetString("portalArn");
    m_portalArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpointConfiguration")) {
    m_endpointConfiguration = jsonValue.GetObject("endpointConfiguration");
    m_endpointConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorization")) {
    m_authorization = jsonValue.GetObject("authorization");
    m_authorizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portalContent")) {
    m_portalContent = jsonValue.GetObject("portalContent");
    m_portalContentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("includedProductArns")) {
    Aws::Utils::Array<JsonView> includedProductArnsJsonList = jsonValue.GetArray("includedProductArns");
    for (unsigned includedProductArnsIndex = 0; includedProductArnsIndex < includedProductArnsJsonList.GetLength();
         ++includedProductArnsIndex) {
      m_includedProductArns.push_back(includedProductArnsJsonList[includedProductArnsIndex].AsString());
    }
    m_includedProductArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publishStatus")) {
    m_publishStatus = PublishStatusMapper::GetPublishStatusForName(jsonValue.GetString("publishStatus"));
    m_publishStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusException")) {
    m_statusException = jsonValue.GetObject("statusException");
    m_statusExceptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publishedAt")) {
    m_publishedAt = jsonValue.GetDouble("publishedAt");
    m_publishedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publishDescription")) {
    m_publishDescription = jsonValue.GetString("publishDescription");
    m_publishDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rumAppMonitorName")) {
    m_rumAppMonitorName = jsonValue.GetString("rumAppMonitorName");
    m_rumAppMonitorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("preview")) {
    m_preview = jsonValue.GetObject("preview");
    m_previewHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
