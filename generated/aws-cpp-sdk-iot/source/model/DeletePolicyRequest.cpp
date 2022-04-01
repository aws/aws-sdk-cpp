/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeletePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePolicyRequest::DeletePolicyRequest() : 
    m_policyNameHasBeenSet(false)
{
}

Aws::String DeletePolicyRequest::SerializePayload() const
{
  return {};
}




