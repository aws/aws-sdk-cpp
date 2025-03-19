/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/UpdateMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMembershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryLogStatusHasBeenSet)
  {
   payload.WithString("queryLogStatus", MembershipQueryLogStatusMapper::GetNameForMembershipQueryLogStatus(m_queryLogStatus));
  }

  if(m_jobLogStatusHasBeenSet)
  {
   payload.WithString("jobLogStatus", MembershipJobLogStatusMapper::GetNameForMembershipJobLogStatus(m_jobLogStatus));
  }

  if(m_defaultResultConfigurationHasBeenSet)
  {
   payload.WithObject("defaultResultConfiguration", m_defaultResultConfiguration.Jsonize());

  }

  if(m_defaultJobResultConfigurationHasBeenSet)
  {
   payload.WithObject("defaultJobResultConfiguration", m_defaultJobResultConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




