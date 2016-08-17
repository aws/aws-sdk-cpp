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
#include <aws/cognito-sync/model/SetIdentityPoolConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetIdentityPoolConfigurationRequest::SetIdentityPoolConfigurationRequest() : 
    m_identityPoolIdHasBeenSet(false),
    m_pushSyncHasBeenSet(false),
    m_cognitoStreamsHasBeenSet(false)
{
}

Aws::String SetIdentityPoolConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pushSyncHasBeenSet)
  {
   payload.WithObject("PushSync", m_pushSync.Jsonize());

  }

  if(m_cognitoStreamsHasBeenSet)
  {
   payload.WithObject("CognitoStreams", m_cognitoStreams.Jsonize());

  }

  return payload.WriteReadable();
}



