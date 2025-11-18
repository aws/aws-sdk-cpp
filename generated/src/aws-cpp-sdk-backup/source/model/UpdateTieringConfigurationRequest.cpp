/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/UpdateTieringConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTieringConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_tieringConfigurationHasBeenSet) {
    payload.WithObject("TieringConfiguration", m_tieringConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
