/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateStreamingURLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStreamingURLRequest::CreateStreamingURLRequest() : 
    m_stackNameHasBeenSet(false),
    m_fleetNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_validity(0),
    m_validityHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

Aws::String CreateStreamingURLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("StackName", m_stackName);

  }

  if(m_fleetNameHasBeenSet)
  {
   payload.WithString("FleetName", m_fleetName);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_validityHasBeenSet)
  {
   payload.WithInt64("Validity", m_validity);

  }

  if(m_sessionContextHasBeenSet)
  {
   payload.WithString("SessionContext", m_sessionContext);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStreamingURLRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateStreamingURL"));
  return headers;

}




