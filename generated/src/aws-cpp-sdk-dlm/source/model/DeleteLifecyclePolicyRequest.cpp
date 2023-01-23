/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/DeleteLifecyclePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DLM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteLifecyclePolicyRequest::DeleteLifecyclePolicyRequest() : 
    m_policyIdHasBeenSet(false)
{
}

Aws::String DeleteLifecyclePolicyRequest::SerializePayload() const
{
  return {};
}




