/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AttachPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AttachPolicyRequest::AttachPolicyRequest() : 
    m_policyNameHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

Aws::String AttachPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  return payload.View().WriteReadable();
}




