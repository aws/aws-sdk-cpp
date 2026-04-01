/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ManagedResourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ManagedResourceDetails::ManagedResourceDetails(JsonView jsonValue) { *this = jsonValue; }

ManagedResourceDetails& ManagedResourceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domain")) {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceGatewayArn")) {
    m_resourceGatewayArn = jsonValue.GetString("resourceGatewayArn");
    m_resourceGatewayArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceAssociationArn")) {
    m_resourceAssociationArn = jsonValue.GetString("resourceAssociationArn");
    m_resourceAssociationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedResourceDetails::Jsonize() const {
  JsonValue payload;

  if (m_domainHasBeenSet) {
    payload.WithString("domain", m_domain);
  }

  if (m_resourceGatewayArnHasBeenSet) {
    payload.WithString("resourceGatewayArn", m_resourceGatewayArn);
  }

  if (m_resourceAssociationArnHasBeenSet) {
    payload.WithString("resourceAssociationArn", m_resourceAssociationArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
