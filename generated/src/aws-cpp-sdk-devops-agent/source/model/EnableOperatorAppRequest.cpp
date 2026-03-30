/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/EnableOperatorAppRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String EnableOperatorAppRequest::SerializePayload() const {
  JsonValue payload;

  if (m_authFlowHasBeenSet) {
    payload.WithString("authFlow", AuthFlowMapper::GetNameForAuthFlow(m_authFlow));
  }

  if (m_operatorAppRoleArnHasBeenSet) {
    payload.WithString("operatorAppRoleArn", m_operatorAppRoleArn);
  }

  if (m_idcInstanceArnHasBeenSet) {
    payload.WithString("idcInstanceArn", m_idcInstanceArn);
  }

  if (m_issuerUrlHasBeenSet) {
    payload.WithString("issuerUrl", m_issuerUrl);
  }

  if (m_idpClientIdHasBeenSet) {
    payload.WithString("idpClientId", m_idpClientId);
  }

  if (m_idpClientSecretHasBeenSet) {
    payload.WithString("idpClientSecret", m_idpClientSecret);
  }

  if (m_providerHasBeenSet) {
    payload.WithString("provider", m_provider);
  }

  return payload.View().WriteReadable();
}
