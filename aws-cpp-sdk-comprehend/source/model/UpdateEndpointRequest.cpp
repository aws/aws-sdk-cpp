/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/UpdateEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEndpointRequest::UpdateEndpointRequest() : 
    m_endpointArnHasBeenSet(false),
    m_desiredInferenceUnits(0),
    m_desiredInferenceUnitsHasBeenSet(false)
{
}

Aws::String UpdateEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("EndpointArn", m_endpointArn);

  }

  if(m_desiredInferenceUnitsHasBeenSet)
  {
   payload.WithInteger("DesiredInferenceUnits", m_desiredInferenceUnits);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.UpdateEndpoint"));
  return headers;

}




