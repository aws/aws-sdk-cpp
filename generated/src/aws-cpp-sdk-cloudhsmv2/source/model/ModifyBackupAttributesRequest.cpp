/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/ModifyBackupAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSMV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyBackupAttributesRequest::ModifyBackupAttributesRequest() : 
    m_backupIdHasBeenSet(false),
    m_neverExpires(false),
    m_neverExpiresHasBeenSet(false)
{
}

Aws::String ModifyBackupAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backupIdHasBeenSet)
  {
   payload.WithString("BackupId", m_backupId);

  }

  if(m_neverExpiresHasBeenSet)
  {
   payload.WithBool("NeverExpires", m_neverExpires);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyBackupAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BaldrApiService.ModifyBackupAttributes"));
  return headers;

}




