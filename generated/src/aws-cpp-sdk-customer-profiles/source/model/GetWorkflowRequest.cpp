/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetWorkflowRequest::GetWorkflowRequest() : 
    m_domainNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false)
{
}

Aws::String GetWorkflowRequest::SerializePayload() const
{
  return {};
}




