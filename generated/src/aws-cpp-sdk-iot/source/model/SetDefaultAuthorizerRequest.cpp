/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SetDefaultAuthorizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetDefaultAuthorizerRequest::SetDefaultAuthorizerRequest() : 
    m_authorizerNameHasBeenSet(false)
{
}

Aws::String SetDefaultAuthorizerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorizerNameHasBeenSet)
  {
   payload.WithString("authorizerName", m_authorizerName);

  }

  return payload.View().WriteReadable();
}




