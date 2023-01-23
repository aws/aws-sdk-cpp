/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/GetDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDataSourceRequest::GetDataSourceRequest() : 
    m_apiIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String GetDataSourceRequest::SerializePayload() const
{
  return {};
}




