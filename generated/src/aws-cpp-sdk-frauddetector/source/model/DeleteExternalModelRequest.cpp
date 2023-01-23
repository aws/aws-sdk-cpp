/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/DeleteExternalModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteExternalModelRequest::DeleteExternalModelRequest() : 
    m_modelEndpointHasBeenSet(false)
{
}

Aws::String DeleteExternalModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelEndpointHasBeenSet)
  {
   payload.WithString("modelEndpoint", m_modelEndpoint);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteExternalModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.DeleteExternalModel"));
  return headers;

}




