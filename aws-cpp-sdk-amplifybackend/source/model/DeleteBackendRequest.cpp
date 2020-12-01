/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/DeleteBackendRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteBackendRequest::DeleteBackendRequest() : 
    m_appIdHasBeenSet(false),
    m_backendEnvironmentNameHasBeenSet(false)
{
}

Aws::String DeleteBackendRequest::SerializePayload() const
{
  return {};
}




