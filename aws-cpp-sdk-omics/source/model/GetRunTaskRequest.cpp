/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetRunTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRunTaskRequest::GetRunTaskRequest() : 
    m_idHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

Aws::String GetRunTaskRequest::SerializePayload() const
{
  return {};
}




