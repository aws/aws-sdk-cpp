/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/GetIdMappingWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetIdMappingWorkflowRequest::GetIdMappingWorkflowRequest() : 
    m_workflowNameHasBeenSet(false)
{
}

Aws::String GetIdMappingWorkflowRequest::SerializePayload() const
{
  return {};
}




