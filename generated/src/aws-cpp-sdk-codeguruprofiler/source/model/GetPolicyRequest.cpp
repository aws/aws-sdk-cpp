/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/GetPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPolicyRequest::GetPolicyRequest() : 
    m_profilingGroupNameHasBeenSet(false)
{
}

Aws::String GetPolicyRequest::SerializePayload() const
{
  return {};
}




