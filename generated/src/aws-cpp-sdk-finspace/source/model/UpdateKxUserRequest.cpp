/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/UpdateKxUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateKxUserRequest::UpdateKxUserRequest() : 
    m_environmentIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdateKxUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_iamRoleHasBeenSet)
  {
   payload.WithString("iamRole", m_iamRole);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




