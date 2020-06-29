/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAliasRequest::DescribeAliasRequest() : 
    m_aliasIdHasBeenSet(false)
{
}

Aws::String DescribeAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aliasIdHasBeenSet)
  {
   payload.WithString("AliasId", m_aliasId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAliasRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DescribeAlias"));
  return headers;

}




