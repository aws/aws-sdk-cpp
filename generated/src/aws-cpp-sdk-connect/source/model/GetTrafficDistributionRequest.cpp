/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetTrafficDistributionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTrafficDistributionRequest::GetTrafficDistributionRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String GetTrafficDistributionRequest::SerializePayload() const
{
  return {};
}




