/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateTrafficDistributionGroupUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateTrafficDistributionGroupUserRequest::AssociateTrafficDistributionGroupUserRequest() : 
    m_trafficDistributionGroupIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String AssociateTrafficDistributionGroupUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  return payload.View().WriteReadable();
}




