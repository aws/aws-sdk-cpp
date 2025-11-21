/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/UpdatePortalProductResult.h>
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

UpdatePortalProductResult::UpdatePortalProductResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdatePortalProductResult& UpdatePortalProductResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayOrder")) {
    m_displayOrder = jsonValue.GetObject("displayOrder");
    m_displayOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModified")) {
    m_lastModified = jsonValue.GetString("lastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portalProductArn")) {
    m_portalProductArn = jsonValue.GetString("portalProductArn");
    m_portalProductArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portalProductId")) {
    m_portalProductId = jsonValue.GetString("portalProductId");
    m_portalProductIdHasBeenSet = true;
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
