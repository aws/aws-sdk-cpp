/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-identity/model/MergeDeveloperIdentitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

MergeDeveloperIdentitiesRequest::MergeDeveloperIdentitiesRequest() : 
    m_sourceUserIdentifierHasBeenSet(false),
    m_destinationUserIdentifierHasBeenSet(false),
    m_developerProviderNameHasBeenSet(false),
    m_identityPoolIdHasBeenSet(false)
{
}

Aws::String MergeDeveloperIdentitiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceUserIdentifierHasBeenSet)
  {
   payload.WithString("SourceUserIdentifier", m_sourceUserIdentifier);

  }

  if(m_destinationUserIdentifierHasBeenSet)
  {
   payload.WithString("DestinationUserIdentifier", m_destinationUserIdentifier);

  }

  if(m_developerProviderNameHasBeenSet)
  {
   payload.WithString("DeveloperProviderName", m_developerProviderName);

  }

  if(m_identityPoolIdHasBeenSet)
  {
   payload.WithString("IdentityPoolId", m_identityPoolId);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection MergeDeveloperIdentitiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityService.MergeDeveloperIdentities"));
  return headers;

}



