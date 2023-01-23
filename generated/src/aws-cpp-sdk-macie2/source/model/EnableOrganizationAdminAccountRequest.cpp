/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/EnableOrganizationAdminAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableOrganizationAdminAccountRequest::EnableOrganizationAdminAccountRequest() : 
    m_adminAccountIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String EnableOrganizationAdminAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adminAccountIdHasBeenSet)
  {
   payload.WithString("adminAccountId", m_adminAccountId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




