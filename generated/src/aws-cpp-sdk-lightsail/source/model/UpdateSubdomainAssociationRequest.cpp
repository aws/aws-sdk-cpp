/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/UpdateSubdomainAssociationRequest.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSubdomainAssociationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_subdomainNameHasBeenSet) {
    payload.WithString("subdomainName", m_subdomainName);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("action", SubdomainAssociationActionMapper::GetNameForSubdomainAssociationAction(m_action));
  }

  if (m_targetResourceArnHasBeenSet) {
    payload.WithString("targetResourceArn", m_targetResourceArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSubdomainAssociationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.UpdateSubdomainAssociation"));
  return headers;
}
