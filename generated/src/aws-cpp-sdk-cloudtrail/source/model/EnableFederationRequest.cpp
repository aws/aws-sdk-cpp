/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/EnableFederationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableFederationRequest::EnableFederationRequest() : 
    m_eventDataStoreHasBeenSet(false),
    m_federationRoleArnHasBeenSet(false)
{
}

Aws::String EnableFederationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventDataStoreHasBeenSet)
  {
   payload.WithString("EventDataStore", m_eventDataStore);

  }

  if(m_federationRoleArnHasBeenSet)
  {
   payload.WithString("FederationRoleArn", m_federationRoleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection EnableFederationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.EnableFederation"));
  return headers;

}




