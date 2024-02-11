/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/ConnectAppAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConnectAppAuthorizationRequest::ConnectAppAuthorizationRequest() : 
    m_appBundleIdentifierHasBeenSet(false),
    m_appAuthorizationIdentifierHasBeenSet(false),
    m_authRequestHasBeenSet(false)
{
}

Aws::String ConnectAppAuthorizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authRequestHasBeenSet)
  {
   payload.WithObject("authRequest", m_authRequest.Jsonize());

  }

  return payload.View().WriteReadable();
}




