/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SetDefaultPolicyVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetDefaultPolicyVersionRequest::SetDefaultPolicyVersionRequest() : 
    m_policyNameHasBeenSet(false),
    m_policyVersionIdHasBeenSet(false)
{
}

Aws::String SetDefaultPolicyVersionRequest::SerializePayload() const
{
  return {};
}




