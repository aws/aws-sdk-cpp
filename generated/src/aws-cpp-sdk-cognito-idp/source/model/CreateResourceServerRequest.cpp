/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CreateResourceServerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateResourceServerRequest::CreateResourceServerRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scopesHasBeenSet(false)
{
}

Aws::String CreateResourceServerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_scopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
   for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
   {
     scopesJsonList[scopesIndex].AsObject(m_scopes[scopesIndex].Jsonize());
   }
   payload.WithArray("Scopes", std::move(scopesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateResourceServerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.CreateResourceServer"));
  return headers;

}




