/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateAuthorizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAuthorizerRequest::UpdateAuthorizerRequest() : 
    m_authorizerNameHasBeenSet(false),
    m_authorizerFunctionArnHasBeenSet(false),
    m_tokenKeyNameHasBeenSet(false),
    m_tokenSigningPublicKeysHasBeenSet(false),
    m_status(AuthorizerStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateAuthorizerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorizerFunctionArnHasBeenSet)
  {
   payload.WithString("authorizerFunctionArn", m_authorizerFunctionArn);

  }

  if(m_tokenKeyNameHasBeenSet)
  {
   payload.WithString("tokenKeyName", m_tokenKeyName);

  }

  if(m_tokenSigningPublicKeysHasBeenSet)
  {
   JsonValue tokenSigningPublicKeysJsonMap;
   for(auto& tokenSigningPublicKeysItem : m_tokenSigningPublicKeys)
   {
     tokenSigningPublicKeysJsonMap.WithString(tokenSigningPublicKeysItem.first, tokenSigningPublicKeysItem.second);
   }
   payload.WithObject("tokenSigningPublicKeys", std::move(tokenSigningPublicKeysJsonMap));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AuthorizerStatusMapper::GetNameForAuthorizerStatus(m_status));
  }

  return payload.View().WriteReadable();
}




