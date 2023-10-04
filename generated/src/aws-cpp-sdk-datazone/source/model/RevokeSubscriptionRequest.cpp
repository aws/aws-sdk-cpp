/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RevokeSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RevokeSubscriptionRequest::RevokeSubscriptionRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_retainPermissions(false),
    m_retainPermissionsHasBeenSet(false)
{
}

Aws::String RevokeSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_retainPermissionsHasBeenSet)
  {
   payload.WithBool("retainPermissions", m_retainPermissions);

  }

  return payload.View().WriteReadable();
}




