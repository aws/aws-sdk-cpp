/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/FlushStageCacheRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

FlushStageCacheRequest::FlushStageCacheRequest() : 
    m_restApiIdHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
}

Aws::String FlushStageCacheRequest::SerializePayload() const
{
  return {};
}




