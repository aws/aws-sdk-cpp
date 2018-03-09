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
   Array<JsonValue> authInfosJsonList(m_authInfos.size());
   for(unsigned authInfosIndex = 0; authInfosIndex < authInfosJsonList.GetLength(); ++authInfosIndex)
   {
     authInfosJsonList[authInfosIndex].AsObject(m_authInfos[authInfosIndex].Jsonize());
   }
   payload.WithArray("authInfos", std::move(authInfosJsonList));

  }

  if(m_policyNamesToAddHasBeenSet)
  {
   Array<JsonValue> policyNamesToAddJsonList(m_policyNamesToAdd.size());
   for(unsigned policyNamesToAddIndex = 0; policyNamesToAddIndex < policyNamesToAddJsonList.GetLength(); ++policyNamesToAddIndex)
   {
     policyNamesToAddJsonList[policyNamesToAddIndex].AsString(m_policyNamesToAdd[policyNamesToAddIndex]);
   }
   payload.WithArray("policyNamesToAdd", std::move(policyNamesToAddJsonList));

  }

  if(m_policyNamesToSkipHasBeenSet)
  {
   Array<JsonValue> policyNamesToSkipJsonList(m_policyNamesToSkip.size());
   for(unsigned policyNamesToSkipIndex = 0; policyNamesToSkipIndex < policyNamesToSkipJsonList.GetLength(); ++policyNamesToSkipIndex)
   {
     policyNamesToSkipJsonList[policyNamesToSkipIndex].AsString(m_policyNamesToSkip[policyNamesToSkipIndex]);
   }
   payload.WithArray("policyNamesToSkip", std::move(policyNamesToSkipJsonList));

  }

  return payload.WriteReadable();
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



