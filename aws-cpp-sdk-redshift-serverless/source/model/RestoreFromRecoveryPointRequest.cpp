/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/RestoreFromRecoveryPointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RestoreFromRecoveryPointRequest::RestoreFromRecoveryPointRequest() : 
    m_namespaceNameHasBeenSet(false),
    m_recoveryPointIdHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
}

Aws::String RestoreFromRecoveryPointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_recoveryPointIdHasBeenSet)
  {
   payload.WithString("recoveryPointId", m_recoveryPointId);

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RestoreFromRecoveryPointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.RestoreFromRecoveryPoint"));
  return headers;

}




