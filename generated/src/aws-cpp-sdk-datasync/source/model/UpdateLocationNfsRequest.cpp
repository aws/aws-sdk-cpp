/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/UpdateLocationNfsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLocationNfsRequest::UpdateLocationNfsRequest() : 
    m_locationArnHasBeenSet(false),
    m_subdirectoryHasBeenSet(false),
    m_onPremConfigHasBeenSet(false),
    m_mountOptionsHasBeenSet(false)
{
}

Aws::String UpdateLocationNfsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_locationArnHasBeenSet)
  {
   payload.WithString("LocationArn", m_locationArn);

  }

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

  }

  if(m_onPremConfigHasBeenSet)
  {
   payload.WithObject("OnPremConfig", m_onPremConfig.Jsonize());

  }

  if(m_mountOptionsHasBeenSet)
  {
   payload.WithObject("MountOptions", m_mountOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLocationNfsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.UpdateLocationNfs"));
  return headers;

}




