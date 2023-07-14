/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/DeleteRouteCalculatorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRouteCalculatorRequest::DeleteRouteCalculatorRequest() : 
    m_calculatorNameHasBeenSet(false)
{
}

Aws::String DeleteRouteCalculatorRequest::SerializePayload() const
{
  return {};
}




