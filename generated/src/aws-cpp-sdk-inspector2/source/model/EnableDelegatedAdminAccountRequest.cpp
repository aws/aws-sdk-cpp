/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/EnableDelegatedAdminAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String EnableDelegatedAdminAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_delegatedAdminAccountIdHasBeenSet)
  {
   payload.WithString("delegatedAdminAccountId", m_delegatedAdminAccountId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




