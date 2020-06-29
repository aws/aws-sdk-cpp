/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/GetResolverRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResolverRequest::GetResolverRequest() : 
    m_apiIdHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_fieldNameHasBeenSet(false)
{
}

Aws::String GetResolverRequest::SerializePayload() const
{
  return {};
}




