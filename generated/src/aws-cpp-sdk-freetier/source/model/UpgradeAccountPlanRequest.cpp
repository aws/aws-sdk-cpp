/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/model/UpgradeAccountPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FreeTier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpgradeAccountPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountPlanTypeHasBeenSet)
  {
   payload.WithString("accountPlanType", AccountPlanTypeMapper::GetNameForAccountPlanType(m_accountPlanType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpgradeAccountPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFreeTierService.UpgradeAccountPlan"));
  return headers;

}




