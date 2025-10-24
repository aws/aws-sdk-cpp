﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateAgentRuntimeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAgentRuntimeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agentRuntimeArtifactHasBeenSet) {
    payload.WithObject("agentRuntimeArtifact", m_agentRuntimeArtifact.Jsonize());
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_networkConfigurationHasBeenSet) {
    payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_authorizerConfigurationHasBeenSet) {
    payload.WithObject("authorizerConfiguration", m_authorizerConfiguration.Jsonize());
  }

  if (m_requestHeaderConfigurationHasBeenSet) {
    payload.WithObject("requestHeaderConfiguration", m_requestHeaderConfiguration.Jsonize());
  }

  if (m_protocolConfigurationHasBeenSet) {
    payload.WithObject("protocolConfiguration", m_protocolConfiguration.Jsonize());
  }

  if (m_lifecycleConfigurationHasBeenSet) {
    payload.WithObject("lifecycleConfiguration", m_lifecycleConfiguration.Jsonize());
  }

  if (m_environmentVariablesHasBeenSet) {
    JsonValue environmentVariablesJsonMap;
    for (auto& environmentVariablesItem : m_environmentVariables) {
      environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
    }
    payload.WithObject("environmentVariables", std::move(environmentVariablesJsonMap));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
