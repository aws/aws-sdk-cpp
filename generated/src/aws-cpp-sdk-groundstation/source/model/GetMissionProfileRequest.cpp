/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/GetMissionProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMissionProfileRequest::GetMissionProfileRequest() : 
    m_missionProfileIdHasBeenSet(false)
{
}

Aws::String GetMissionProfileRequest::SerializePayload() const
{
  return {};
}




