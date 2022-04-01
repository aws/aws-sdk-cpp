/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AcceptAdministratorInvitationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcceptAdministratorInvitationRequest::AcceptAdministratorInvitationRequest() : 
    m_administratorIdHasBeenSet(false),
    m_invitationIdHasBeenSet(false)
{
}

Aws::String AcceptAdministratorInvitationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_administratorIdHasBeenSet)
  {
   payload.WithString("AdministratorId", m_administratorId);

  }

  if(m_invitationIdHasBeenSet)
  {
   payload.WithString("InvitationId", m_invitationId);

  }

  return payload.View().WriteReadable();
}




