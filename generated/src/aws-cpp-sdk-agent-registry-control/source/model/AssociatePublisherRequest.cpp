/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AssociatePublisherRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AgentRegistryControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociatePublisherRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recordArnHasBeenSet) {
    payload.WithString("recordArn", m_recordArn);
  }

  if (m_publisherArnHasBeenSet) {
    payload.WithString("publisherArn", m_publisherArn);
  }

  if (m_subdomainHasBeenSet) {
    payload.WithString("subdomain", m_subdomain);
  }

  if (m_categoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
    for (unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex) {
      categoriesJsonList[categoriesIndex].AsString(m_categories[categoriesIndex]);
    }
    payload.WithArray("categories", std::move(categoriesJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
