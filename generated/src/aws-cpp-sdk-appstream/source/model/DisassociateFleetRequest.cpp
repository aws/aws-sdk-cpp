/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DisassociateFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateFleetRequest::DisassociateFleetRequest() : 
    m_fleetNameHasBeenSet(false),
    m_stackNameHasBeenSet(false)
{
}

Aws::String DisassociateFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetNameHasBeenSet)
  {
   payload.WithString("FleetName", m_fleetName);

  }

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("StackName", m_stackName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateFleetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.DisassociateFleet"));
  return headers;

}




