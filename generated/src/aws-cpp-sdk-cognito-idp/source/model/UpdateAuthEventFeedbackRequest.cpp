/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UpdateAuthEventFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAuthEventFeedbackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("EventId", m_eventId);

  }

  if(m_feedbackTokenHasBeenSet)
  {
   payload.WithString("FeedbackToken", m_feedbackToken);

  }

  if(m_feedbackValueHasBeenSet)
  {
   payload.WithString("FeedbackValue", FeedbackValueTypeMapper::GetNameForFeedbackValueType(m_feedbackValue));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAuthEventFeedbackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.UpdateAuthEventFeedback"));
  return headers;

}




