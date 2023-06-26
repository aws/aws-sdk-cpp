/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DisassociateApplicationFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateApplicationFleetRequest::DisassociateApplicationFleetRequest() : 
    m_fleetNameHasBeenSet(false),
    m_applicationArnHasBeenSet(false)
{
}

Aws::String DisassociateApplicationFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetNameHasBeenSet)
  {
   payload.WithString("FleetName", m_fleetName);

  }

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateApplicationFleetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.DisassociateApplicationFleet"));
  return headers;

}




