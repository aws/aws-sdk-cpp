/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/CodeSecurityIntegrationVpcConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

CodeSecurityIntegrationVpcConfiguration::CodeSecurityIntegrationVpcConfiguration(JsonView jsonValue) { *this = jsonValue; }

CodeSecurityIntegrationVpcConfiguration& CodeSecurityIntegrationVpcConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vpcId")) {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcEndpointId")) {
    m_vpcEndpointId = jsonValue.GetString("vpcEndpointId");
    m_vpcEndpointIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeConnectionsHostArn")) {
    m_codeConnectionsHostArn = jsonValue.GetString("codeConnectionsHostArn");
    m_codeConnectionsHostArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetIds")) {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroups")) {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for (unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex) {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tlsCertificate")) {
    m_tlsCertificate = jsonValue.GetString("tlsCertificate");
    m_tlsCertificateHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeSecurityIntegrationVpcConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_vpcIdHasBeenSet) {
    payload.WithString("vpcId", m_vpcId);
  }

  if (m_vpcEndpointIdHasBeenSet) {
    payload.WithString("vpcEndpointId", m_vpcEndpointId);
  }

  if (m_codeConnectionsHostArnHasBeenSet) {
    payload.WithString("codeConnectionsHostArn", m_codeConnectionsHostArn);
  }

  if (m_subnetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
    }
    payload.WithArray("subnetIds", std::move(subnetIdsJsonList));
  }

  if (m_securityGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
    for (unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex) {
      securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
    }
    payload.WithArray("securityGroups", std::move(securityGroupsJsonList));
  }

  if (m_tlsCertificateHasBeenSet) {
    payload.WithString("tlsCertificate", m_tlsCertificate);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
