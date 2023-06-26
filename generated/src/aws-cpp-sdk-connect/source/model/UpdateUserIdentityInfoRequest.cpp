/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateUserIdentityInfoRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserIdentityInfoRequest::UpdateUserIdentityInfoRequest() : 
    m_identityInfoHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String UpdateUserIdentityInfoRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityInfoHasBeenSet)
  {
   payload.WithObject("IdentityInfo", m_identityInfo.Jsonize());

  }

  return payload.View().WriteReadable();
}




