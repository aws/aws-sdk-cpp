/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DisallowIntermediateTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisallowIntermediateTableRequest::SerializePayload() const {
  JsonValue payload;

  if (m_intermediateTableNameHasBeenSet) {
    payload.WithString("intermediateTableName", m_intermediateTableName);
  }

  if (m_includeDescendantsHasBeenSet) {
    payload.WithBool("includeDescendants", m_includeDescendants);
  }

  return payload.View().WriteReadable();
}
