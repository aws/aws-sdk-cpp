/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/DeleteAutoScalingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAutoScalingConfigurationRequest::DeleteAutoScalingConfigurationRequest() : 
    m_autoScalingConfigurationArnHasBeenSet(false),
    m_deleteAllRevisions(false),
    m_deleteAllRevisionsHasBeenSet(false)
{
}

Aws::String DeleteAutoScalingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoScalingConfigurationArnHasBeenSet)
  {
   payload.WithString("AutoScalingConfigurationArn", m_autoScalingConfigurationArn);

  }

  if(m_deleteAllRevisionsHasBeenSet)
  {
   payload.WithBool("DeleteAllRevisions", m_deleteAllRevisions);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAutoScalingConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.DeleteAutoScalingConfiguration"));
  return headers;

}




