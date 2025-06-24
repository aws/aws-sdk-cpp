/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/BatchDisassociateCodeSecurityScanConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDisassociateCodeSecurityScanConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_disassociateConfigurationRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> disassociateConfigurationRequestsJsonList(m_disassociateConfigurationRequests.size());
   for(unsigned disassociateConfigurationRequestsIndex = 0; disassociateConfigurationRequestsIndex < disassociateConfigurationRequestsJsonList.GetLength(); ++disassociateConfigurationRequestsIndex)
   {
     disassociateConfigurationRequestsJsonList[disassociateConfigurationRequestsIndex].AsObject(m_disassociateConfigurationRequests[disassociateConfigurationRequestsIndex].Jsonize());
   }
   payload.WithArray("disassociateConfigurationRequests", std::move(disassociateConfigurationRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




