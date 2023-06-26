/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GetImportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetImportRequest::GetImportRequest() : 
    m_importIdHasBeenSet(false)
{
}

Aws::String GetImportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_importIdHasBeenSet)
  {
   payload.WithString("ImportId", m_importId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetImportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.GetImport"));
  return headers;

}




