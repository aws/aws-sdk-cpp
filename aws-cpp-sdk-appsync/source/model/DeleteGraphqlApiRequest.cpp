/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DeleteGraphqlApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteGraphqlApiRequest::DeleteGraphqlApiRequest() : 
    m_apiIdHasBeenSet(false)
{
}

Aws::String DeleteGraphqlApiRequest::SerializePayload() const
{
  return {};
}




