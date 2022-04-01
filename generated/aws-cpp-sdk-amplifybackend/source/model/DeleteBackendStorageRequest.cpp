/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/DeleteBackendStorageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteBackendStorageRequest::DeleteBackendStorageRequest() : 
    m_appIdHasBeenSet(false),
    m_backendEnvironmentNameHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_serviceName(ServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false)
{
}

Aws::String DeleteBackendStorageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", ServiceNameMapper::GetNameForServiceName(m_serviceName));
  }

  return payload.View().WriteReadable();
}




