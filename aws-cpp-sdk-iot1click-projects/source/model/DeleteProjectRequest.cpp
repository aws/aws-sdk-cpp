/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-projects/model/DeleteProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT1ClickProjects::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteProjectRequest::DeleteProjectRequest() : 
    m_projectNameHasBeenSet(false)
{
}

Aws::String DeleteProjectRequest::SerializePayload() const
{
  return {};
}




