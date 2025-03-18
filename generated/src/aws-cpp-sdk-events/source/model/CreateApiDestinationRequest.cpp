/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/CreateApiDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateApiDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_connectionArnHasBeenSet)
  {
   payload.WithString("ConnectionArn", m_connectionArn);

  }

  if(m_invocationEndpointHasBeenSet)
  {
   payload.WithString("InvocationEndpoint", m_invocationEndpoint);

  }

  if(m_httpMethodHasBeenSet)
  {
   payload.WithString("HttpMethod", ApiDestinationHttpMethodMapper::GetNameForApiDestinationHttpMethod(m_httpMethod));
  }

  if(m_invocationRateLimitPerSecondHasBeenSet)
  {
   payload.WithInteger("InvocationRateLimitPerSecond", m_invocationRateLimitPerSecond);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateApiDestinationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.CreateApiDestination"));
  return headers;

}




