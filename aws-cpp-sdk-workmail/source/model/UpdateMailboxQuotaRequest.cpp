/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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




