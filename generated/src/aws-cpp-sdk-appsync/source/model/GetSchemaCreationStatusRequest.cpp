/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/GetSchemaCreationStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSchemaCreationStatusRequest::GetSchemaCreationStatusRequest() : 
    m_apiIdHasBeenSet(false)
{
}

Aws::String GetSchemaCreationStatusRequest::SerializePayload() const
{
  return {};
}




