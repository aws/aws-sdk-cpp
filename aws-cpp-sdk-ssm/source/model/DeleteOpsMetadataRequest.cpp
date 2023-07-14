/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DeleteOpsMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteOpsMetadataRequest::DeleteOpsMetadataRequest() : 
    m_opsMetadataArnHasBeenSet(false)
{
}

Aws::String DeleteOpsMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_opsMetadataArnHasBeenSet)
  {
   payload.WithString("OpsMetadataArn", m_opsMetadataArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteOpsMetadataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DeleteOpsMetadata"));
  return headers;

}




