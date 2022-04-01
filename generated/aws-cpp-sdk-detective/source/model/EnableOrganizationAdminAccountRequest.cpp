/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/EnableOrganizationAdminAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableOrganizationAdminAccountRequest::EnableOrganizationAdminAccountRequest() : 
    m_accountIdHasBeenSet(false)
{
}

Aws::String EnableOrganizationAdminAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  return payload.View().WriteReadable();
}




