/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/GetWorkflowRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetWorkflowRunRequest::GetWorkflowRunRequest() : 
    m_spaceNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_projectNameHasBeenSet(false)
{
}

Aws::String GetWorkflowRunRequest::SerializePayload() const
{
  return {};
}




