/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/BatchAssociateCodeSecurityScanConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchAssociateCodeSecurityScanConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_associateConfigurationRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associateConfigurationRequestsJsonList(m_associateConfigurationRequests.size());
   for(unsigned associateConfigurationRequestsIndex = 0; associateConfigurationRequestsIndex < associateConfigurationRequestsJsonList.GetLength(); ++associateConfigurationRequestsIndex)
   {
     associateConfigurationRequestsJsonList[associateConfigurationRequestsIndex].AsObject(m_associateConfigurationRequests[associateConfigurationRequestsIndex].Jsonize());
   }
   payload.WithArray("associateConfigurationRequests", std::move(associateConfigurationRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




