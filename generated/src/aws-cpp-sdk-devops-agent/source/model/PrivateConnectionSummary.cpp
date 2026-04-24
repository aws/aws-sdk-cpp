/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/PrivateConnectionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

PrivateConnectionSummary::PrivateConnectionSummary(JsonView jsonValue) { *this = jsonValue; }

PrivateConnectionSummary& PrivateConnectionSummary::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue PrivateConnectionSummary::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", PrivateConnectionTypeMapper::GetNameForPrivateConnectionType(m_type));
  }

  if (m_resourceGatewayIdHasBeenSet) {
    payload.WithString("resourceGatewayId", m_resourceGatewayId);
  }

  if (m_hostAddressHasBeenSet) {
    payload.WithString("hostAddress", m_hostAddress);
  }

  if (m_vpcIdHasBeenSet) {
    payload.WithString("vpcId", m_vpcId);
  }

  if (m_resourceConfigurationIdHasBeenSet) {
    payload.WithString("resourceConfigurationId", m_resourceConfigurationId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PrivateConnectionStatusMapper::GetNameForPrivateConnectionStatus(m_status));
  }

  if (m_certificateExpiryTimeHasBeenSet) {
    payload.WithString("certificateExpiryTime", m_certificateExpiryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
