/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DetachPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetachPolicyRequest::DetachPolicyRequest() : 
    m_policyNameHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

Aws::String DetachPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  return payload.View().WriteReadable();
}




