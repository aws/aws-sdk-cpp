/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/PutDataCatalogExportConfigurationRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutDataCatalogExportConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_s3TablesConfigurationHasBeenSet) {
    payload.WithObject("S3TablesConfiguration", m_s3TablesConfiguration.Jsonize());
  }

  if (m_assetsHasBeenSet) {
    payload.WithObject("Assets", m_assets.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutDataCatalogExportConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.PutDataCatalogExportConfiguration"));
  return headers;
}
