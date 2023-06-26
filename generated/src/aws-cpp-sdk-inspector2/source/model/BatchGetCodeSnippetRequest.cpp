/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/BatchGetCodeSnippetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetCodeSnippetRequest::BatchGetCodeSnippetRequest() : 
    m_findingArnsHasBeenSet(false)
{
}

Aws::String BatchGetCodeSnippetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_findingArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingArnsJsonList(m_findingArns.size());
   for(unsigned findingArnsIndex = 0; findingArnsIndex < findingArnsJsonList.GetLength(); ++findingArnsIndex)
   {
     findingArnsJsonList[findingArnsIndex].AsString(m_findingArns[findingArnsIndex]);
   }
   payload.WithArray("findingArns", std::move(findingArnsJsonList));

  }

  return payload.View().WriteReadable();
}




