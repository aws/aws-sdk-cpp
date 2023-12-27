/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/CreateKxScalingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateKxScalingGroupRequest::CreateKxScalingGroupRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_environmentIdHasBeenSet(false),
    m_scalingGroupNameHasBeenSet(false),
    m_hostTypeHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateKxScalingGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_scalingGroupNameHasBeenSet)
  {
   payload.WithString("scalingGroupName", m_scalingGroupName);

  }

  if(m_hostTypeHasBeenSet)
  {
   payload.WithString("hostType", m_hostType);

  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("availabilityZoneId", m_availabilityZoneId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




