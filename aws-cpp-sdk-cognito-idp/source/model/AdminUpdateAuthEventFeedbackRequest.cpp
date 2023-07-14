/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdminUpdateAuthEventFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AdminUpdateAuthEventFeedbackRequest::AdminUpdateAuthEventFeedbackRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_feedbackValue(FeedbackValueType::NOT_SET),
    m_feedbackValueHasBeenSet(false)
{
}

Aws::String AdminUpdateAuthEventFeedbackRequest::SerializePayload() const
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

  if(m_feedbackValueHasBeenSet)
  {
   payload.WithString("FeedbackValue", FeedbackValueTypeMapper::GetNameForFeedbackValueType(m_feedbackValue));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AdminUpdateAuthEventFeedbackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AdminUpdateAuthEventFeedback"));
  return headers;

}




