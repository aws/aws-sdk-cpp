/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/EnableOrganizationAdminAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableOrganizationAdminAccountRequest::EnableOrganizationAdminAccountRequest() : 
    m_adminAccountIdHasBeenSet(false)
{
}

Aws::String EnableOrganizationAdminAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adminAccountIdHasBeenSet)
  {
   payload.WithString("adminAccountId", m_adminAccountId);

  }

  return payload.View().WriteReadable();
}




