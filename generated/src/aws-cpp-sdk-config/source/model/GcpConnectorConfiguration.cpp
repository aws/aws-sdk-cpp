/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GcpConnectorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConfigService {
namespace Model {

GcpConnectorConfiguration::GcpConnectorConfiguration(JsonView jsonValue) { *this = jsonValue; }

GcpConnectorConfiguration& GcpConnectorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("gcpOrganizationId")) {
    m_gcpOrganizationId = jsonValue.GetString("gcpOrganizationId");
    m_gcpOrganizationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceAccountEmail")) {
    m_serviceAccountEmail = jsonValue.GetString("serviceAccountEmail");
    m_serviceAccountEmailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workloadIdentityPoolProvider")) {
    m_workloadIdentityPoolProvider = jsonValue.GetString("workloadIdentityPoolProvider");
    m_workloadIdentityPoolProviderHasBeenSet = true;
  }
  return *this;
}

JsonValue GcpConnectorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_gcpOrganizationIdHasBeenSet) {
    payload.WithString("gcpOrganizationId", m_gcpOrganizationId);
  }

  if (m_serviceAccountEmailHasBeenSet) {
    payload.WithString("serviceAccountEmail", m_serviceAccountEmail);
  }

  if (m_workloadIdentityPoolProviderHasBeenSet) {
    payload.WithString("workloadIdentityPoolProvider", m_workloadIdentityPoolProvider);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
