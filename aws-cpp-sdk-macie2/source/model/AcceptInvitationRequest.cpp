/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AcceptInvitationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcceptInvitationRequest::AcceptInvitationRequest() : 
    m_invitationIdHasBeenSet(false),
    m_masterAccountHasBeenSet(false)
{
}

Aws::String AcceptInvitationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_invitationIdHasBeenSet)
  {
   payload.WithString("invitationId", m_invitationId);

  }

  if(m_masterAccountHasBeenSet)
  {
   payload.WithString("masterAccount", m_masterAccount);

  }

  return payload.View().WriteReadable();
}




