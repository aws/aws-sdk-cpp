/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/GetBackendRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBackendRequest::GetBackendRequest() : 
    m_appIdHasBeenSet(false),
    m_backendEnvironmentNameHasBeenSet(false)
{
}

Aws::String GetBackendRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backendEnvironmentNameHasBeenSet)
  {
   payload.WithString("backendEnvironmentName", m_backendEnvironmentName);

  }

  return payload.View().WriteReadable();
}




