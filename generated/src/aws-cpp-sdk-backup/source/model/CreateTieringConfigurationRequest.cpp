/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateTieringConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTieringConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_tieringConfigurationHasBeenSet) {
    payload.WithObject("TieringConfiguration", m_tieringConfiguration.Jsonize());
  }

  if (m_tieringConfigurationTagsHasBeenSet) {
    JsonValue tieringConfigurationTagsJsonMap;
    for (auto& tieringConfigurationTagsItem : m_tieringConfigurationTags) {
      tieringConfigurationTagsJsonMap.WithString(tieringConfigurationTagsItem.first, tieringConfigurationTagsItem.second);
    }
    payload.WithObject("TieringConfigurationTags", std::move(tieringConfigurationTagsJsonMap));
  }

  if (m_creatorRequestIdHasBeenSet) {
    payload.WithString("CreatorRequestId", m_creatorRequestId);
  }

  return payload.View().WriteReadable();
}
