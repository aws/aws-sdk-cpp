/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetOTAUpdateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetOTAUpdateRequest::GetOTAUpdateRequest() : 
    m_otaUpdateIdHasBeenSet(false)
{
}

Aws::String GetOTAUpdateRequest::SerializePayload() const
{
  return {};
}




