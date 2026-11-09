/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/DeleteSystemTableConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteSystemTableConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_tableNameHasBeenSet) {
    payload.WithString("TableName", SystemTableNameMapper::GetNameForSystemTableName(m_tableName));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteSystemTableConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.DeleteSystemTableConfiguration"));
  return headers;
}
