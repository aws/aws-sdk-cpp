/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/UpdateBackendJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBackendJobRequest::UpdateBackendJobRequest() : 
    m_appIdHasBeenSet(false),
    m_backendEnvironmentNameHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateBackendJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_operationHasBeenSet)
  {
   payload.WithString("operation", m_operation);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  return payload.View().WriteReadable();
}




