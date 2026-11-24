/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/PortalSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

PortalSummary::PortalSummary(JsonView jsonValue) { *this = jsonValue; }

PortalSummary& PortalSummary::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue PortalSummary::Jsonize() const {
  JsonValue payload;

  if (m_portalIdHasBeenSet) {
    payload.WithString("portalId", m_portalId);
  }

  if (m_portalArnHasBeenSet) {
    payload.WithString("portalArn", m_portalArn);
  }

  if (m_endpointConfigurationHasBeenSet) {
    payload.WithObject("endpointConfiguration", m_endpointConfiguration.Jsonize());
  }

  if (m_authorizationHasBeenSet) {
    payload.WithObject("authorization", m_authorization.Jsonize());
  }

  if (m_portalContentHasBeenSet) {
    payload.WithObject("portalContent", m_portalContent.Jsonize());
  }

  if (m_includedProductArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> includedProductArnsJsonList(m_includedProductArns.size());
    for (unsigned includedProductArnsIndex = 0; includedProductArnsIndex < includedProductArnsJsonList.GetLength();
         ++includedProductArnsIndex) {
      includedProductArnsJsonList[includedProductArnsIndex].AsString(m_includedProductArns[includedProductArnsIndex]);
    }
    payload.WithArray("includedProductArns", std::move(includedProductArnsJsonList));
  }

  if (m_publishStatusHasBeenSet) {
    payload.WithString("publishStatus", PublishStatusMapper::GetNameForPublishStatus(m_publishStatus));
  }

  if (m_statusExceptionHasBeenSet) {
    payload.WithObject("statusException", m_statusException.Jsonize());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_publishedAtHasBeenSet) {
    payload.WithDouble("publishedAt", m_publishedAt.SecondsWithMSPrecision());
  }

  if (m_publishDescriptionHasBeenSet) {
    payload.WithString("publishDescription", m_publishDescription);
  }

  if (m_rumAppMonitorNameHasBeenSet) {
    payload.WithString("rumAppMonitorName", m_rumAppMonitorName);
  }

  if (m_previewHasBeenSet) {
    payload.WithObject("preview", m_preview.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
