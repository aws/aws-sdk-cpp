/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/GetLifecyclePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DLM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetLifecyclePolicyRequest::GetLifecyclePolicyRequest() : 
    m_policyIdHasBeenSet(false)
{
}

Aws::String GetLifecyclePolicyRequest::SerializePayload() const
{
  return {};
}




