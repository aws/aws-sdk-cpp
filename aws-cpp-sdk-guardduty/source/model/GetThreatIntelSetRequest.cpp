/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/GetThreatIntelSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetThreatIntelSetRequest::GetThreatIntelSetRequest() : 
    m_detectorIdHasBeenSet(false),
    m_threatIntelSetIdHasBeenSet(false)
{
}

Aws::String GetThreatIntelSetRequest::SerializePayload() const
{
  return {};
}




