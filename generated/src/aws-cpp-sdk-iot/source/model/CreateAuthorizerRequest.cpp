/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateAuthorizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAuthorizerRequest::CreateAuthorizerRequest() : 
    m_authorizerNameHasBeenSet(false),
    m_authorizerFunctionArnHasBeenSet(false),
    m_tokenKeyNameHasBeenSet(false),
    m_tokenSigningPublicKeysHasBeenSet(false),
    m_status(AuthorizerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_signingDisabled(false),
    m_signingDisabledHasBeenSet(false),
    m_enableCachingForHttp(false),
    m_enableCachingForHttpHasBeenSet(false)
{
}

Aws::String CreateAuthorizerRequest::SerializePayload() const
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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_signingDisabledHasBeenSet)
  {
   payload.WithBool("signingDisabled", m_signingDisabled);

  }

  if(m_enableCachingForHttpHasBeenSet)
  {
   payload.WithBool("enableCachingForHttp", m_enableCachingForHttp);

  }

  return payload.View().WriteReadable();
}




