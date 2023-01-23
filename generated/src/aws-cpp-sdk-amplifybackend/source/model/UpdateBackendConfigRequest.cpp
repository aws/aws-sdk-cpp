/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/UpdateBackendConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBackendConfigRequest::UpdateBackendConfigRequest() : 
    m_appIdHasBeenSet(false),
    m_loginAuthConfigHasBeenSet(false)
{
}

Aws::String UpdateBackendConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loginAuthConfigHasBeenSet)
  {
   payload.WithObject("loginAuthConfig", m_loginAuthConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




