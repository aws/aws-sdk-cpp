/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DeleteFunctionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFunctionRequest::DeleteFunctionRequest() : 
    m_apiIdHasBeenSet(false),
    m_functionIdHasBeenSet(false)
{
}

Aws::String DeleteFunctionRequest::SerializePayload() const
{
  return {};
}




