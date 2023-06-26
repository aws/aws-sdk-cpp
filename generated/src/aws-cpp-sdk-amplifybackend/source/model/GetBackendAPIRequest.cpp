/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/GetBackendAPIRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBackendAPIRequest::GetBackendAPIRequest() : 
    m_appIdHasBeenSet(false),
    m_backendEnvironmentNameHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

Aws::String GetBackendAPIRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceConfigHasBeenSet)
  {
   payload.WithObject("resourceConfig", m_resourceConfig.Jsonize());

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  return payload.View().WriteReadable();
}




