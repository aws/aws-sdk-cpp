/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetSceneRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSceneRequest::GetSceneRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_sceneIdHasBeenSet(false)
{
}

Aws::String GetSceneRequest::SerializePayload() const
{
  return {};
}




