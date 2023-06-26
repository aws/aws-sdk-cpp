/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-projects/model/DisassociateDeviceFromPlacementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT1ClickProjects::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateDeviceFromPlacementRequest::DisassociateDeviceFromPlacementRequest() : 
    m_projectNameHasBeenSet(false),
    m_placementNameHasBeenSet(false),
    m_deviceTemplateNameHasBeenSet(false)
{
}

Aws::String DisassociateDeviceFromPlacementRequest::SerializePayload() const
{
  return {};
}




