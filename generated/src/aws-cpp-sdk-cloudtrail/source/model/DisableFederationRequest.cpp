/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/DisableFederationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisableFederationRequest::DisableFederationRequest() : 
    m_eventDataStoreHasBeenSet(false)
{
}

Aws::String DisableFederationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventDataStoreHasBeenSet)
  {
   payload.WithString("EventDataStore", m_eventDataStore);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisableFederationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.DisableFederation"));
  return headers;

}




