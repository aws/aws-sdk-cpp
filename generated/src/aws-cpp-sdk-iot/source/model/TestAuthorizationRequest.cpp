/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TestAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

TestAuthorizationRequest::TestAuthorizationRequest() : 
    m_principalHasBeenSet(false),
    m_cognitoIdentityPoolIdHasBeenSet(false),
    m_authInfosHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_policyNamesToAddHasBeenSet(false),
    m_policyNamesToSkipHasBeenSet(false)
{
}

Aws::String TestAuthorizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_principalHasBeenSet)
  {
   payload.WithString("principal", m_principal);

  }

  if(m_cognitoIdentityPoolIdHasBeenSet)
  {
   payload.WithString("cognitoIdentityPoolId", m_cognitoIdentityPoolId);

  }

  if(m_authInfosHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authInfosJsonList(m_authInfos.size());
   for(unsigned authInfosIndex = 0; authInfosIndex < authInfosJsonList.GetLength(); ++authInfosIndex)
   {
     authInfosJsonList[authInfosIndex].AsObject(m_authInfos[authInfosIndex].Jsonize());
   }
   payload.WithArray("authInfos", std::move(authInfosJsonList));

  }

  if(m_policyNamesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policyNamesToAddJsonList(m_policyNamesToAdd.size());
   for(unsigned policyNamesToAddIndex = 0; policyNamesToAddIndex < policyNamesToAddJsonList.GetLength(); ++policyNamesToAddIndex)
   {
     policyNamesToAddJsonList[policyNamesToAddIndex].AsString(m_policyNamesToAdd[policyNamesToAddIndex]);
   }
   payload.WithArray("policyNamesToAdd", std::move(policyNamesToAddJsonList));

  }

  if(m_policyNamesToSkipHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policyNamesToSkipJsonList(m_policyNamesToSkip.size());
   for(unsigned policyNamesToSkipIndex = 0; policyNamesToSkipIndex < policyNamesToSkipJsonList.GetLength(); ++policyNamesToSkipIndex)
   {
     policyNamesToSkipJsonList[policyNamesToSkipIndex].AsString(m_policyNamesToSkip[policyNamesToSkipIndex]);
   }
   payload.WithArray("policyNamesToSkip", std::move(policyNamesToSkipJsonList));

  }

  return payload.View().WriteReadable();
}

void TestAuthorizationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clientIdHasBeenSet)
    {
      ss << m_clientId;
      uri.AddQueryStringParameter("clientId", ss.str());
      ss.str("");
    }

}



