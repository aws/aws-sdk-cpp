/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/DistributeImageRequest.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DistributeImageRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sourceImageHasBeenSet) {
    payload.WithString("sourceImage", m_sourceImage);
  }

  if (m_distributionConfigurationArnHasBeenSet) {
    payload.WithString("distributionConfigurationArn", m_distributionConfigurationArn);
  }

  if (m_executionRoleHasBeenSet) {
    payload.WithString("executionRole", m_executionRole);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_loggingConfigurationHasBeenSet) {
    payload.WithObject("loggingConfiguration", m_loggingConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
