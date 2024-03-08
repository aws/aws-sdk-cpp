/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/UpdateExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMDataExports::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateExportRequest::UpdateExportRequest() : 
    m_exportHasBeenSet(false),
    m_exportArnHasBeenSet(false)
{
}

Aws::String UpdateExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_exportHasBeenSet)
  {
   payload.WithObject("Export", m_export.Jsonize());

  }

  if(m_exportArnHasBeenSet)
  {
   payload.WithString("ExportArn", m_exportArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateExportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBillingAndCostManagementDataExports.UpdateExport"));
  return headers;

}




