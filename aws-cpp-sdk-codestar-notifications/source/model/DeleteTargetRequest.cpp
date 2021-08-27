/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/model/DeleteTargetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStarNotifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTargetRequest::DeleteTargetRequest() : 
    m_targetAddressHasBeenSet(false),
    m_forceUnsubscribeAll(false),
    m_forceUnsubscribeAllHasBeenSet(false)
{
}

Aws::String DeleteTargetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetAddressHasBeenSet)
  {
   payload.WithString("TargetAddress", m_targetAddress);

  }

  if(m_forceUnsubscribeAllHasBeenSet)
  {
   payload.WithBool("ForceUnsubscribeAll", m_forceUnsubscribeAll);

  }

  return payload.View().WriteReadable();
}




