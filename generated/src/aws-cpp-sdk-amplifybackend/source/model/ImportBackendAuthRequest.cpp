/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/ImportBackendAuthRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportBackendAuthRequest::ImportBackendAuthRequest() : 
    m_appIdHasBeenSet(false),
    m_backendEnvironmentNameHasBeenSet(false),
    m_identityPoolIdHasBeenSet(false),
    m_nativeClientIdHasBeenSet(false),
    m_userPoolIdHasBeenSet(false),
    m_webClientIdHasBeenSet(false)
{
}

Aws::String ImportBackendAuthRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityPoolIdHasBeenSet)
  {
   payload.WithString("identityPoolId", m_identityPoolId);

  }

  if(m_nativeClientIdHasBeenSet)
  {
   payload.WithString("nativeClientId", m_nativeClientId);

  }

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("userPoolId", m_userPoolId);

  }

  if(m_webClientIdHasBeenSet)
  {
   payload.WithString("webClientId", m_webClientId);

  }

  return payload.View().WriteReadable();
}




