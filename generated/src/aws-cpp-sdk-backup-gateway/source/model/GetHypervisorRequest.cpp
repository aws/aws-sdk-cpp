/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/GetHypervisorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetHypervisorRequest::GetHypervisorRequest() : 
    m_hypervisorArnHasBeenSet(false)
{
}

Aws::String GetHypervisorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hypervisorArnHasBeenSet)
  {
   payload.WithString("HypervisorArn", m_hypervisorArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetHypervisorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BackupOnPremises_v20210101.GetHypervisor"));
  return headers;

}




