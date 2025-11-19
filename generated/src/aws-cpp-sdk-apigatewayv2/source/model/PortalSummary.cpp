/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/PortalSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

PortalSummary::PortalSummary(JsonView jsonValue) { *this = jsonValue; }

PortalSummary& PortalSummary::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("preview")) {
    m_preview = jsonValue.GetObject("preview");
    m_previewHasBeenSet = true;
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
  return *this;
}

JsonValue PortalSummary::Jsonize() const {
  JsonValue payload;

  if (m_authorizationHasBeenSet) {
    payload.WithObject("authorization", m_authorization.Jsonize());
  }

  if (m_endpointConfigurationHasBeenSet) {
    payload.WithObject("endpointConfiguration", m_endpointConfiguration.Jsonize());
  }

  if (m_includedPortalProductArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> includedPortalProductArnsJsonList(m_includedPortalProductArns.size());
    for (unsigned includedPortalProductArnsIndex = 0; includedPortalProductArnsIndex < includedPortalProductArnsJsonList.GetLength();
         ++includedPortalProductArnsIndex) {
      includedPortalProductArnsJsonList[includedPortalProductArnsIndex].AsString(
          m_includedPortalProductArns[includedPortalProductArnsIndex]);
    }
    payload.WithArray("includedPortalProductArns", std::move(includedPortalProductArnsJsonList));
  }

  if (m_lastModifiedHasBeenSet) {
    payload.WithString("lastModified", m_lastModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastPublishedHasBeenSet) {
    payload.WithString("lastPublished", m_lastPublished.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastPublishedDescriptionHasBeenSet) {
    payload.WithString("lastPublishedDescription", m_lastPublishedDescription);
  }

  if (m_portalArnHasBeenSet) {
    payload.WithString("portalArn", m_portalArn);
  }

  if (m_portalContentHasBeenSet) {
    payload.WithObject("portalContent", m_portalContent.Jsonize());
  }

  if (m_portalIdHasBeenSet) {
    payload.WithString("portalId", m_portalId);
  }

  if (m_previewHasBeenSet) {
    payload.WithObject("preview", m_preview.Jsonize());
  }

  if (m_publishStatusHasBeenSet) {
    payload.WithString("publishStatus", PublishStatusMapper::GetNameForPublishStatus(m_publishStatus));
  }

  if (m_rumAppMonitorNameHasBeenSet) {
    payload.WithString("rumAppMonitorName", m_rumAppMonitorName);
  }

  if (m_statusExceptionHasBeenSet) {
    payload.WithObject("statusException", m_statusException.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
