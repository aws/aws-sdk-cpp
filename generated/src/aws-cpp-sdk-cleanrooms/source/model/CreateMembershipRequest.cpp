/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CreateMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMembershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_collaborationIdentifierHasBeenSet)
  {
   payload.WithString("collaborationIdentifier", m_collaborationIdentifier);

  }

  if(m_queryLogStatusHasBeenSet)
  {
   payload.WithString("queryLogStatus", MembershipQueryLogStatusMapper::GetNameForMembershipQueryLogStatus(m_queryLogStatus));
  }

  if(m_jobLogStatusHasBeenSet)
  {
   payload.WithString("jobLogStatus", MembershipJobLogStatusMapper::GetNameForMembershipJobLogStatus(m_jobLogStatus));
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

  if(m_defaultResultConfigurationHasBeenSet)
  {
   payload.WithObject("defaultResultConfiguration", m_defaultResultConfiguration.Jsonize());

  }

  if(m_defaultJobResultConfigurationHasBeenSet)
  {
   payload.WithObject("defaultJobResultConfiguration", m_defaultJobResultConfiguration.Jsonize());

  }

  if(m_paymentConfigurationHasBeenSet)
  {
   payload.WithObject("paymentConfiguration", m_paymentConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




