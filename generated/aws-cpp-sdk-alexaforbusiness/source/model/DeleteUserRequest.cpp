/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DeleteUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteUserRequest::DeleteUserRequest() : 
    m_userArnHasBeenSet(false),
    m_enrollmentIdHasBeenSet(false)
{
}

Aws::String DeleteUserRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection DeleteUserRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.DeleteUser"));
  return headers;

}




