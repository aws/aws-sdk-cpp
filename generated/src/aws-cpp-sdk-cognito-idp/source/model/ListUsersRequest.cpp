/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ListUsersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListUsersRequest::ListUsersRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_attributesToGetHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_paginationTokenHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

Aws::String ListUsersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_attributesToGetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesToGetJsonList(m_attributesToGet.size());
   for(unsigned attributesToGetIndex = 0; attributesToGetIndex < attributesToGetJsonList.GetLength(); ++attributesToGetIndex)
   {
     attributesToGetJsonList[attributesToGetIndex].AsString(m_attributesToGet[attributesToGetIndex]);
   }
   payload.WithArray("AttributesToGet", std::move(attributesToGetJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_paginationTokenHasBeenSet)
  {
   payload.WithString("PaginationToken", m_paginationToken);

  }

  if(m_filterHasBeenSet)
  {
   payload.WithString("Filter", m_filter);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListUsersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.ListUsers"));
  return headers;

}




