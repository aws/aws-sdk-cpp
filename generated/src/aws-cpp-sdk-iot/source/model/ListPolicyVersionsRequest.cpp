/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListPolicyVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListPolicyVersionsRequest::ListPolicyVersionsRequest() : 
    m_policyNameHasBeenSet(false)
{
}

Aws::String ListPolicyVersionsRequest::SerializePayload() const
{
  return {};
}




