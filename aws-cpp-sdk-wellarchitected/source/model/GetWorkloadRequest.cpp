/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/GetWorkloadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetWorkloadRequest::GetWorkloadRequest() : 
    m_workloadIdHasBeenSet(false)
{
}

Aws::String GetWorkloadRequest::SerializePayload() const
{
  return {};
}




