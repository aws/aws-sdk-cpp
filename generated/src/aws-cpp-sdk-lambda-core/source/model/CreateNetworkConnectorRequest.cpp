/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/CreateNetworkConnectorRequest.h>

#include <utility>

using namespace Aws::LambdaCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateNetworkConnectorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("Configuration", m_configuration.Jsonize());
  }

  if (m_operatorRoleHasBeenSet) {
    payload.WithString("OperatorRole", m_operatorRole);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
