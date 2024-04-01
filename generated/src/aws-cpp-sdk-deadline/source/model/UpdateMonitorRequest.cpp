/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMonitorRequest::UpdateMonitorRequest() : 
    m_displayNameHasBeenSet(false),
    m_monitorIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_subdomainHasBeenSet(false)
{
}

Aws::String UpdateMonitorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_subdomainHasBeenSet)
  {
   payload.WithString("subdomain", m_subdomain);

  }

  return payload.View().WriteReadable();
}




