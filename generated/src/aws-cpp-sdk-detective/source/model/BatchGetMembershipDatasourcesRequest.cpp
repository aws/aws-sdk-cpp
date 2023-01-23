/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/BatchGetMembershipDatasourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetMembershipDatasourcesRequest::BatchGetMembershipDatasourcesRequest() : 
    m_graphArnsHasBeenSet(false)
{
}

Aws::String BatchGetMembershipDatasourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_graphArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> graphArnsJsonList(m_graphArns.size());
   for(unsigned graphArnsIndex = 0; graphArnsIndex < graphArnsJsonList.GetLength(); ++graphArnsIndex)
   {
     graphArnsJsonList[graphArnsIndex].AsString(m_graphArns[graphArnsIndex]);
   }
   payload.WithArray("GraphArns", std::move(graphArnsJsonList));

  }

  return payload.View().WriteReadable();
}




