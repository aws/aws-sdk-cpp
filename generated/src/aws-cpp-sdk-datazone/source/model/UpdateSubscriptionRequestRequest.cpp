/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateSubscriptionRequestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSubscriptionRequestRequest::UpdateSubscriptionRequestRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_requestReasonHasBeenSet(false)
{
}

Aws::String UpdateSubscriptionRequestRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requestReasonHasBeenSet)
  {
   payload.WithString("requestReason", m_requestReason);

  }

  return payload.View().WriteReadable();
}




