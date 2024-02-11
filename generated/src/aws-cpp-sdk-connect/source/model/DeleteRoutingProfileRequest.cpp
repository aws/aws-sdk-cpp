/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteRoutingProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRoutingProfileRequest::DeleteRoutingProfileRequest() : 
    m_instanceIdHasBeenSet(false),
    m_routingProfileIdHasBeenSet(false)
{
}

Aws::String DeleteRoutingProfileRequest::SerializePayload() const
{
  return {};
}




