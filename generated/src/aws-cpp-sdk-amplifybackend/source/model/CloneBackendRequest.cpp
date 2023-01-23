/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/CloneBackendRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CloneBackendRequest::CloneBackendRequest() : 
    m_appIdHasBeenSet(false),
    m_backendEnvironmentNameHasBeenSet(false),
    m_targetEnvironmentNameHasBeenSet(false)
{
}

Aws::String CloneBackendRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetEnvironmentNameHasBeenSet)
  {
   payload.WithString("targetEnvironmentName", m_targetEnvironmentName);

  }

  return payload.View().WriteReadable();
}




