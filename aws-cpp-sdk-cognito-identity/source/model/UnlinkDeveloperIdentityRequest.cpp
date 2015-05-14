/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-identity/model/UnlinkDeveloperIdentityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UnlinkDeveloperIdentityRequest::UnlinkDeveloperIdentityRequest()
{
}

Aws::String UnlinkDeveloperIdentityRequest::SerializePayload() const
{
  JsonValue payload;

  payload.WithString("IdentityId", m_identityId);

  payload.WithString("IdentityPoolId", m_identityPoolId);

  payload.WithString("DeveloperProviderName", m_developerProviderName);

  payload.WithString("DeveloperUserIdentifier", m_developerUserIdentifier);

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UnlinkDeveloperIdentityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityService.UnlinkDeveloperIdentity"));
  return std::move(headers);

}



