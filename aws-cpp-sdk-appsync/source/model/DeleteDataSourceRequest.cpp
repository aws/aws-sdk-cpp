/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DeleteDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDataSourceRequest::DeleteDataSourceRequest() : 
    m_apiIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String DeleteDataSourceRequest::SerializePayload() const
{
  return {};
}




