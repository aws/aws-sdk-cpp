/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateWorkforceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkforceRequest::UpdateWorkforceRequest() : 
    m_workforceNameHasBeenSet(false),
    m_sourceIpConfigHasBeenSet(false)
{
}

Aws::String UpdateWorkforceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workforceNameHasBeenSet)
  {
   payload.WithString("WorkforceName", m_workforceName);

  }

  if(m_sourceIpConfigHasBeenSet)
  {
   payload.WithObject("SourceIpConfig", m_sourceIpConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateWorkforceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateWorkforce"));
  return headers;

}




