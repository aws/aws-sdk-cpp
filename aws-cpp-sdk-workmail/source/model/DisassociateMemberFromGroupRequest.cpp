/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/DisassociateMemberFromGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateMemberFromGroupRequest::DisassociateMemberFromGroupRequest() : 
    m_organizationIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

Aws::String DisassociateMemberFromGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_memberIdHasBeenSet)
  {
   payload.WithString("MemberId", m_memberId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateMemberFromGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.DisassociateMemberFromGroup"));
  return headers;

}




