/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/RemoveBackendConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveBackendConfigRequest::RemoveBackendConfigRequest() : 
    m_appIdHasBeenSet(false)
{
}

Aws::String RemoveBackendConfigRequest::SerializePayload() const
{
  return {};
}




