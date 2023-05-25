/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/AssociateApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateApiRequest::AssociateApiRequest() : 
    m_domainNameHasBeenSet(false),
    m_apiIdHasBeenSet(false)
{
}

Aws::String AssociateApiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("apiId", m_apiId);

  }

  return payload.View().WriteReadable();
}




