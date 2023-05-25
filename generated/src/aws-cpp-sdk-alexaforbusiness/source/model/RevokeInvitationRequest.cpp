/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/RevokeInvitationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RevokeInvitationRequest::RevokeInvitationRequest() : 
    m_userArnHasBeenSet(false),
    m_enrollmentIdHasBeenSet(false)
{
}

Aws::String RevokeInvitationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userArnHasBeenSet)
  {
   payload.WithString("UserArn", m_userArn);

  }

  if(m_enrollmentIdHasBeenSet)
  {
   payload.WithString("EnrollmentId", m_enrollmentId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RevokeInvitationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.RevokeInvitation"));
  return headers;

}




