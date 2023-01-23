/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetEntityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEntityRequest::GetEntityRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_entityIdHasBeenSet(false)
{
}

Aws::String GetEntityRequest::SerializePayload() const
{
  return {};
}




