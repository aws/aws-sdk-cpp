/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ExchangeCodeForTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyUIBuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExchangeCodeForTokenRequest::ExchangeCodeForTokenRequest() : 
    m_provider(TokenProviders::NOT_SET),
    m_providerHasBeenSet(false),
    m_requestHasBeenSet(false)
{
}

Aws::String ExchangeCodeForTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requestHasBeenSet)
  {
   payload = m_request.Jsonize();
  }

  return payload.View().WriteReadable();
}




