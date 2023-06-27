/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/DeleteAppAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAppAuthorizationRequest::DeleteAppAuthorizationRequest() : 
    m_appBundleIdentifierHasBeenSet(false),
    m_appAuthorizationIdentifierHasBeenSet(false)
{
}

Aws::String DeleteAppAuthorizationRequest::SerializePayload() const
{
  return {};
}




