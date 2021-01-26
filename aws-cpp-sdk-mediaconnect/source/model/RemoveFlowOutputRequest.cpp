/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/RemoveFlowOutputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveFlowOutputRequest::RemoveFlowOutputRequest() : 
    m_flowArnHasBeenSet(false),
    m_outputArnHasBeenSet(false)
{
}

Aws::String RemoveFlowOutputRequest::SerializePayload() const
{
  return {};
}




