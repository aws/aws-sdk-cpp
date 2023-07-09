/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/StartUserAccessTasksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartUserAccessTasksRequest::StartUserAccessTasksRequest() : 
    m_appBundleIdentifierHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

Aws::String StartUserAccessTasksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appBundleIdentifierHasBeenSet)
  {
   payload.WithString("appBundleIdentifier", m_appBundleIdentifier);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  return payload.View().WriteReadable();
}




