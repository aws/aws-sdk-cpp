/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/UpdateSchedulingPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSchedulingPolicyRequest::UpdateSchedulingPolicyRequest() : 
    m_arnHasBeenSet(false),
    m_fairsharePolicyHasBeenSet(false)
{
}

Aws::String UpdateSchedulingPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_fairsharePolicyHasBeenSet)
  {
   payload.WithObject("fairsharePolicy", m_fairsharePolicy.Jsonize());

  }

  return payload.View().WriteReadable();
}




