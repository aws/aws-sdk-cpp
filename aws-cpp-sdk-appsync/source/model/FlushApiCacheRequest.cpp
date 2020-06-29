/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/FlushApiCacheRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

FlushApiCacheRequest::FlushApiCacheRequest() : 
    m_apiIdHasBeenSet(false)
{
}

Aws::String FlushApiCacheRequest::SerializePayload() const
{
  return {};
}




