/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/NetworkConnectorVpcEgressConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {

NetworkConnectorVpcEgressConfiguration::NetworkConnectorVpcEgressConfiguration(JsonView jsonValue) { *this = jsonValue; }

NetworkConnectorVpcEgressConfiguration& NetworkConnectorVpcEgressConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SubnetIds")) {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SecurityGroupIds")) {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NetworkProtocol")) {
    m_networkProtocol = NetworkProtocolMapper::GetNetworkProtocolForName(jsonValue.GetString("NetworkProtocol"));
    m_networkProtocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssociatedComputeResourceTypes")) {
    Aws::Utils::Array<JsonView> associatedComputeResourceTypesJsonList = jsonValue.GetArray("AssociatedComputeResourceTypes");
    for (unsigned associatedComputeResourceTypesIndex = 0;
         associatedComputeResourceTypesIndex < associatedComputeResourceTypesJsonList.GetLength(); ++associatedComputeResourceTypesIndex) {
      m_associatedComputeResourceTypes.push_back(ComputeResourceTypeMapper::GetComputeResourceTypeForName(
          associatedComputeResourceTypesJsonList[associatedComputeResourceTypesIndex].AsString()));
    }
    m_associatedComputeResourceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkConnectorVpcEgressConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_subnetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
    }
    payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));
  }

  if (m_securityGroupIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
    }
    payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));
  }

  if (m_networkProtocolHasBeenSet) {
    payload.WithString("NetworkProtocol", NetworkProtocolMapper::GetNameForNetworkProtocol(m_networkProtocol));
  }

  if (m_associatedComputeResourceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedComputeResourceTypesJsonList(m_associatedComputeResourceTypes.size());
    for (unsigned associatedComputeResourceTypesIndex = 0;
         associatedComputeResourceTypesIndex < associatedComputeResourceTypesJsonList.GetLength(); ++associatedComputeResourceTypesIndex) {
      associatedComputeResourceTypesJsonList[associatedComputeResourceTypesIndex].AsString(
          ComputeResourceTypeMapper::GetNameForComputeResourceType(m_associatedComputeResourceTypes[associatedComputeResourceTypesIndex]));
    }
    payload.WithArray("AssociatedComputeResourceTypes", std::move(associatedComputeResourceTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
