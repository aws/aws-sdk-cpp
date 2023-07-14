/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/StopContinuousExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopContinuousExportRequest::StopContinuousExportRequest() : 
    m_exportIdHasBeenSet(false)
{
}

Aws::String StopContinuousExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_exportIdHasBeenSet)
  {
   payload.WithString("exportId", m_exportId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopContinuousExportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.StopContinuousExport"));
  return headers;

}




