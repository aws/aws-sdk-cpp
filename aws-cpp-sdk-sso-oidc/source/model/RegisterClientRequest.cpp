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

#include <aws/sso-oidc/model/RegisterClientRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOOIDC::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterClientRequest::RegisterClientRequest() : 
    m_clientNameHasBeenSet(false),
    m_clientTypeHasBeenSet(false),
    m_scopesHasBeenSet(false)
{
}

Aws::String RegisterClientRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientNameHasBeenSet)
  {
   payload.WithString("clientName", m_clientName);

  }

  if(m_clientTypeHasBeenSet)
  {
   payload.WithString("clientType", m_clientType);

  }

  if(m_scopesHasBeenSet)
  {
   Array<JsonValue> scopesJsonList(m_scopes.size());
   for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
   {
     scopesJsonList[scopesIndex].AsString(m_scopes[scopesIndex]);
   }
   payload.WithArray("scopes", std::move(scopesJsonList));

  }

  return payload.View().WriteReadable();
}




