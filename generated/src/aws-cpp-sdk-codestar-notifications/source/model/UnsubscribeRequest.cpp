/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/model/UnsubscribeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStarNotifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UnsubscribeRequest::UnsubscribeRequest() : 
    m_arnHasBeenSet(false),
    m_targetAddressHasBeenSet(false)
{
}

Aws::String UnsubscribeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_targetAddressHasBeenSet)
  {
   payload.WithString("TargetAddress", m_targetAddress);

  }

  return payload.View().WriteReadable();
}




