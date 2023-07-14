/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/StartSchemaCreationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSchemaCreationRequest::StartSchemaCreationRequest() : 
    m_apiIdHasBeenSet(false),
    m_definitionHasBeenSet(false)
{
}

Aws::String StartSchemaCreationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_definitionHasBeenSet)
  {
   payload.WithString("definition", HashingUtils::Base64Encode(m_definition));
  }

  return payload.View().WriteReadable();
}




