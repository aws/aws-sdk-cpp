/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/StartDataSourceIntrospectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDataSourceIntrospectionRequest::StartDataSourceIntrospectionRequest() : 
    m_rdsDataApiConfigHasBeenSet(false)
{
}

Aws::String StartDataSourceIntrospectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rdsDataApiConfigHasBeenSet)
  {
   payload.WithObject("rdsDataApiConfig", m_rdsDataApiConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




