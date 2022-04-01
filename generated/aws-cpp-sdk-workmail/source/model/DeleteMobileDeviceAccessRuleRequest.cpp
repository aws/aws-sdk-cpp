/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/DeleteMobileDeviceAccessRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMobileDeviceAccessRuleRequest::DeleteMobileDeviceAccessRuleRequest() : 
    m_organizationIdHasBeenSet(false),
    m_mobileDeviceAccessRuleIdHasBeenSet(false)
{
}

Aws::String DeleteMobileDeviceAccessRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_mobileDeviceAccessRuleIdHasBeenSet)
  {
   payload.WithString("MobileDeviceAccessRuleId", m_mobileDeviceAccessRuleId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteMobileDeviceAccessRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.DeleteMobileDeviceAccessRule"));
  return headers;

}




