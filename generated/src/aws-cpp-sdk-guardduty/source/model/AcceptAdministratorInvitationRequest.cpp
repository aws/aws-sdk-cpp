/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AcceptAdministratorInvitationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcceptAdministratorInvitationRequest::AcceptAdministratorInvitationRequest() : 
    m_detectorIdHasBeenSet(false),
    m_administratorIdHasBeenSet(false),
    m_invitationIdHasBeenSet(false)
{
}

Aws::String AcceptAdministratorInvitationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_administratorIdHasBeenSet)
  {
   payload.WithString("administratorId", m_administratorId);

  }

  if(m_invitationIdHasBeenSet)
  {
   payload.WithString("invitationId", m_invitationId);

  }

  return payload.View().WriteReadable();
}




