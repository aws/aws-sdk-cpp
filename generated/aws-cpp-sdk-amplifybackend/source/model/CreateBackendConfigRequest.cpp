/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/CreateBackendConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBackendConfigRequest::CreateBackendConfigRequest() : 
    m_appIdHasBeenSet(false),
    m_backendManagerAppIdHasBeenSet(false)
{
}

Aws::String CreateBackendConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backendManagerAppIdHasBeenSet)
  {
   payload.WithString("backendManagerAppId", m_backendManagerAppId);

  }

  return payload.View().WriteReadable();
}




