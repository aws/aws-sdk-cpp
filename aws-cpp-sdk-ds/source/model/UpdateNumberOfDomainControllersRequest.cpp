/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/UpdateNumberOfDomainControllersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNumberOfDomainControllersRequest::UpdateNumberOfDomainControllersRequest() : 
    m_directoryIdHasBeenSet(false),
    m_desiredNumber(0),
    m_desiredNumberHasBeenSet(false)
{
}

Aws::String UpdateNumberOfDomainControllersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_desiredNumberHasBeenSet)
  {
   payload.WithInteger("DesiredNumber", m_desiredNumber);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNumberOfDomainControllersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.UpdateNumberOfDomainControllers"));
  return headers;

}




