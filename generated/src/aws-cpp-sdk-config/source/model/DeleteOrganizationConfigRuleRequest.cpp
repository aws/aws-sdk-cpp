/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DeleteOrganizationConfigRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteOrganizationConfigRuleRequest::DeleteOrganizationConfigRuleRequest() : 
    m_organizationConfigRuleNameHasBeenSet(false)
{
}

Aws::String DeleteOrganizationConfigRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationConfigRuleNameHasBeenSet)
  {
   payload.WithString("OrganizationConfigRuleName", m_organizationConfigRuleName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteOrganizationConfigRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DeleteOrganizationConfigRule"));
  return headers;

}




