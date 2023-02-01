/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PutRemediationConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRemediationConfigurationsRequest::PutRemediationConfigurationsRequest() : 
    m_remediationConfigurationsHasBeenSet(false)
{
}

Aws::String PutRemediationConfigurationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_remediationConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> remediationConfigurationsJsonList(m_remediationConfigurations.size());
   for(unsigned remediationConfigurationsIndex = 0; remediationConfigurationsIndex < remediationConfigurationsJsonList.GetLength(); ++remediationConfigurationsIndex)
   {
     remediationConfigurationsJsonList[remediationConfigurationsIndex].AsObject(m_remediationConfigurations[remediationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("RemediationConfigurations", std::move(remediationConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRemediationConfigurationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutRemediationConfigurations"));
  return headers;

}




