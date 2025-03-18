/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetArchiveExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetArchiveExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_exportIdHasBeenSet)
  {
   payload.WithString("ExportId", m_exportId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetArchiveExportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.GetArchiveExport"));
  return headers;

}




