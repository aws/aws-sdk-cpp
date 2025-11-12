/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dms/model/CancelMetadataModelConversionRequest.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CancelMetadataModelConversionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_migrationProjectIdentifierHasBeenSet) {
    payload.WithString("MigrationProjectIdentifier", m_migrationProjectIdentifier);
  }

  if (m_requestIdentifierHasBeenSet) {
    payload.WithString("RequestIdentifier", m_requestIdentifier);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelMetadataModelConversionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.CancelMetadataModelConversion"));
  return headers;
}
