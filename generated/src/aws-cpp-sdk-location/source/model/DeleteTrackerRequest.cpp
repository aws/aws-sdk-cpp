/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/DeleteTrackerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTrackerRequest::DeleteTrackerRequest() : 
    m_trackerNameHasBeenSet(false)
{
}

Aws::String DeleteTrackerRequest::SerializePayload() const
{
  return {};
}




