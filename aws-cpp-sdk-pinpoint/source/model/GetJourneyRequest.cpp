/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GetJourneyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetJourneyRequest::GetJourneyRequest() : 
    m_applicationIdHasBeenSet(false),
    m_journeyIdHasBeenSet(false)
{
}

Aws::String GetJourneyRequest::SerializePayload() const
{
  return {};
}




