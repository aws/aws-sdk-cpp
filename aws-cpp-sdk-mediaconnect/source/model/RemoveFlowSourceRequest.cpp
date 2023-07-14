/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/RemoveFlowSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveFlowSourceRequest::RemoveFlowSourceRequest() : 
    m_flowArnHasBeenSet(false),
    m_sourceArnHasBeenSet(false)
{
}

Aws::String RemoveFlowSourceRequest::SerializePayload() const
{
  return {};
}




