/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFleetRequest::GetFleetRequest() : 
    m_farmIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false)
{
}

Aws::String GetFleetRequest::SerializePayload() const
{
  return {};
}




