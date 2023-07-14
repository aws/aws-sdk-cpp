/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/UpdateShareInvitationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateShareInvitationRequest::UpdateShareInvitationRequest() : 
    m_shareInvitationIdHasBeenSet(false),
    m_shareInvitationAction(ShareInvitationAction::NOT_SET),
    m_shareInvitationActionHasBeenSet(false)
{
}

Aws::String UpdateShareInvitationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_shareInvitationActionHasBeenSet)
  {
   payload.WithString("ShareInvitationAction", ShareInvitationActionMapper::GetNameForShareInvitationAction(m_shareInvitationAction));
  }

  return payload.View().WriteReadable();
}




