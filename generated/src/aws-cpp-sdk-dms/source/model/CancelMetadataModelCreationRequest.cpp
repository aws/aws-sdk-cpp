/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dms/model/CancelMetadataModelCreationRequest.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CancelMetadataModelCreationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_migrationProjectIdentifierHasBeenSet) {
    payload.WithString("MigrationProjectIdentifier", m_migrationProjectIdentifier);
  }

  if (m_requestIdentifierHasBeenSet) {
    payload.WithString("RequestIdentifier", m_requestIdentifier);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelMetadataModelCreationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.CancelMetadataModelCreation"));
  return headers;
}
