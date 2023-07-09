/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/GetAppAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAppAuthorizationRequest::GetAppAuthorizationRequest() : 
    m_appBundleIdentifierHasBeenSet(false),
    m_appAuthorizationIdentifierHasBeenSet(false)
{
}

Aws::String GetAppAuthorizationRequest::SerializePayload() const
{
  return {};
}




