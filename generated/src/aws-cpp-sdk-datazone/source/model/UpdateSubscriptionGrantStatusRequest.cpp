/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateSubscriptionGrantStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSubscriptionGrantStatusRequest::UpdateSubscriptionGrantStatusRequest() : 
    m_assetIdentifierHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_failureCauseHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_status(SubscriptionGrantStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetNameHasBeenSet(false)
{
}

Aws::String UpdateSubscriptionGrantStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_failureCauseHasBeenSet)
  {
   payload.WithObject("failureCause", m_failureCause.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SubscriptionGrantStatusMapper::GetNameForSubscriptionGrantStatus(m_status));
  }

  if(m_targetNameHasBeenSet)
  {
   payload.WithString("targetName", m_targetName);

  }

  return payload.View().WriteReadable();
}




