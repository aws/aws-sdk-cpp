/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UpdateTermsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTermsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_termsIdHasBeenSet)
  {
   payload.WithString("TermsId", m_termsId);

  }

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_termsNameHasBeenSet)
  {
   payload.WithString("TermsName", m_termsName);

  }

  if(m_termsSourceHasBeenSet)
  {
   payload.WithString("TermsSource", TermsSourceTypeMapper::GetNameForTermsSourceType(m_termsSource));
  }

  if(m_enforcementHasBeenSet)
  {
   payload.WithString("Enforcement", TermsEnforcementTypeMapper::GetNameForTermsEnforcementType(m_enforcement));
  }

  if(m_linksHasBeenSet)
  {
   JsonValue linksJsonMap;
   for(auto& linksItem : m_links)
   {
     linksJsonMap.WithString(linksItem.first, linksItem.second);
   }
   payload.WithObject("Links", std::move(linksJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTermsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.UpdateTerms"));
  return headers;

}




