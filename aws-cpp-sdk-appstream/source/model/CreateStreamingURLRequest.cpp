/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStreamingURLRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateStreamingURL"));
  return headers;

}




