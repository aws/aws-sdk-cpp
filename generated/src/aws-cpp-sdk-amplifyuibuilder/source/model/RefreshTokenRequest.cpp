/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/RefreshTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyUIBuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RefreshTokenRequest::RefreshTokenRequest() : 
    m_provider(TokenProviders::NOT_SET),
    m_providerHasBeenSet(false),
    m_refreshTokenBodyHasBeenSet(false)
{
}

Aws::String RefreshTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_refreshTokenBodyHasBeenSet)
  {
   payload = m_refreshTokenBody.Jsonize();
  }

  return payload.View().WriteReadable();
}




