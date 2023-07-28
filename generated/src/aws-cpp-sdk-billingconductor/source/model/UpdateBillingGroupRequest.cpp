/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/UpdateBillingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBillingGroupRequest::UpdateBillingGroupRequest() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(BillingGroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_computationPreferenceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_accountGroupingHasBeenSet(false)
{
}

Aws::String UpdateBillingGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", BillingGroupStatusMapper::GetNameForBillingGroupStatus(m_status));
  }

  if(m_computationPreferenceHasBeenSet)
  {
   payload.WithObject("ComputationPreference", m_computationPreference.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_accountGroupingHasBeenSet)
  {
   payload.WithObject("AccountGrouping", m_accountGrouping.Jsonize());

  }

  return payload.View().WriteReadable();
}




