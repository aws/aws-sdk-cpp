﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DeleteServiceLinkedConfigurationRecorderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteServiceLinkedConfigurationRecorderRequest::DeleteServiceLinkedConfigurationRecorderRequest() : 
    m_servicePrincipalHasBeenSet(false)
{
}

Aws::String DeleteServiceLinkedConfigurationRecorderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_servicePrincipalHasBeenSet)
  {
   payload.WithString("ServicePrincipal", m_servicePrincipal);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteServiceLinkedConfigurationRecorderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DeleteServiceLinkedConfigurationRecorder"));
  return headers;

}




