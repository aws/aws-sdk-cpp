/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/UpdateMailboxQuotaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMailboxQuotaRequest::UpdateMailboxQuotaRequest() : 
    m_organizationIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_mailboxQuota(0),
    m_mailboxQuotaHasBeenSet(false)
{
}

Aws::String UpdateMailboxQuotaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_mailboxQuotaHasBeenSet)
  {
   payload.WithInteger("MailboxQuota", m_mailboxQuota);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMailboxQuotaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.UpdateMailboxQuota"));
  return headers;

}




