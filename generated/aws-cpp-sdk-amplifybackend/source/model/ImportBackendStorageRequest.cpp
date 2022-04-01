/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/ImportBackendStorageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportBackendStorageRequest::ImportBackendStorageRequest() : 
    m_appIdHasBeenSet(false),
    m_backendEnvironmentNameHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_serviceName(ServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false)
{
}

Aws::String ImportBackendStorageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", ServiceNameMapper::GetNameForServiceName(m_serviceName));
  }

  return payload.View().WriteReadable();
}




