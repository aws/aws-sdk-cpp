﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/DeleteMarketplaceModelEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMarketplaceModelEndpointRequest::DeleteMarketplaceModelEndpointRequest() : 
    m_endpointArnHasBeenSet(false)
{
}

Aws::String DeleteMarketplaceModelEndpointRequest::SerializePayload() const
{
  return {};
}




