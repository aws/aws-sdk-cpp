/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  return payload.View().WriteReadable();
}




