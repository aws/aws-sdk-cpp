/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DeleteTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTypeRequest::DeleteTypeRequest() : 
    m_apiIdHasBeenSet(false),
    m_typeNameHasBeenSet(false)
{
}

Aws::String DeleteTypeRequest::SerializePayload() const
{
  return {};
}




