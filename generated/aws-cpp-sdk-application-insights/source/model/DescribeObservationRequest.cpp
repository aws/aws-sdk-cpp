/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/DescribeObservationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeObservationRequest::DescribeObservationRequest() : 
    m_observationIdHasBeenSet(false)
{
}

Aws::String DescribeObservationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_observationIdHasBeenSet)
  {
   payload.WithString("ObservationId", m_observationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeObservationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EC2WindowsBarleyService.DescribeObservation"));
  return headers;

}




