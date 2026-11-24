/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ApiInventoryItemDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ApiInventoryItemDetail::ApiInventoryItemDetail(JsonView jsonValue) { *this = jsonValue; }

ApiInventoryItemDetail& ApiInventoryItemDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("method")) {
    m_method = HttpMethodMapper::GetHttpMethodForName(jsonValue.GetString("method"));
    m_methodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("host")) {
    m_host = jsonValue.GetString("host");
    m_hostHasBeenSet = true;
  }
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceArn")) {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("discoverySource")) {
    m_discoverySource = DiscoverySourceMapper::GetDiscoverySourceForName(jsonValue.GetString("discoverySource"));
    m_discoverySourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("visibility")) {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("visibility"));
    m_visibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("wafStatus")) {
    m_wafStatus = WafStatusMapper::GetWafStatusForName(jsonValue.GetString("wafStatus"));
    m_wafStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("classification")) {
    m_classification = ClassificationMapper::GetClassificationForName(jsonValue.GetString("classification"));
    m_classificationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("managedBy")) {
    m_managedBy = ManagedByMapper::GetManagedByForName(jsonValue.GetString("managedBy"));
    m_managedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workloads")) {
    Aws::Utils::Array<JsonView> workloadsJsonList = jsonValue.GetArray("workloads");
    for (unsigned workloadsIndex = 0; workloadsIndex < workloadsJsonList.GetLength(); ++workloadsIndex) {
      m_workloads.push_back(WorkloadMapper::GetWorkloadForName(workloadsJsonList[workloadsIndex].AsString()));
    }
    m_workloadsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("managedApiId")) {
    m_managedApiId = jsonValue.GetString("managedApiId");
    m_managedApiIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiInventoryItemDetail::Jsonize() const {
  JsonValue payload;

  if (m_methodHasBeenSet) {
    payload.WithString("method", HttpMethodMapper::GetNameForHttpMethod(m_method));
  }

  if (m_hostHasBeenSet) {
    payload.WithString("host", m_host);
  }

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("resourceArn", m_resourceArn);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_discoverySourceHasBeenSet) {
    payload.WithString("discoverySource", DiscoverySourceMapper::GetNameForDiscoverySource(m_discoverySource));
  }

  if (m_visibilityHasBeenSet) {
    payload.WithString("visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if (m_wafStatusHasBeenSet) {
    payload.WithString("wafStatus", WafStatusMapper::GetNameForWafStatus(m_wafStatus));
  }

  if (m_classificationHasBeenSet) {
    payload.WithString("classification", ClassificationMapper::GetNameForClassification(m_classification));
  }

  if (m_managedByHasBeenSet) {
    payload.WithString("managedBy", ManagedByMapper::GetNameForManagedBy(m_managedBy));
  }

  if (m_workloadsHasBeenSet) {
    Aws::Utils::Array<JsonValue> workloadsJsonList(m_workloads.size());
    for (unsigned workloadsIndex = 0; workloadsIndex < workloadsJsonList.GetLength(); ++workloadsIndex) {
      workloadsJsonList[workloadsIndex].AsString(WorkloadMapper::GetNameForWorkload(m_workloads[workloadsIndex]));
    }
    payload.WithArray("workloads", std::move(workloadsJsonList));
  }

  if (m_managedApiIdHasBeenSet) {
    payload.WithString("managedApiId", m_managedApiId);
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
