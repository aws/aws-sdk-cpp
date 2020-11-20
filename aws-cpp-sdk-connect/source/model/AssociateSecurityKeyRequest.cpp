/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateSecurityKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateSecurityKeyRequest::AssociateSecurityKeyRequest() : 
    m_instanceIdHasBeenSet(false),
    m_keyHasBeenSet(false)
{
}

Aws::String AssociateSecurityKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  return payload.View().WriteReadable();
}




