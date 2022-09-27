/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/UpdateSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSnapshotRequest::UpdateSnapshotRequest() : 
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_snapshotNameHasBeenSet(false)
{
}

Aws::String UpdateSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithInteger("retentionPeriod", m_retentionPeriod);

  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("snapshotName", m_snapshotName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.UpdateSnapshot"));
  return headers;

}




