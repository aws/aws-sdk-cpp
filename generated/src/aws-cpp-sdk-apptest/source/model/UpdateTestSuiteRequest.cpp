/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/UpdateTestSuiteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppTest::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTestSuiteRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_beforeStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> beforeStepsJsonList(m_beforeSteps.size());
   for(unsigned beforeStepsIndex = 0; beforeStepsIndex < beforeStepsJsonList.GetLength(); ++beforeStepsIndex)
   {
     beforeStepsJsonList[beforeStepsIndex].AsObject(m_beforeSteps[beforeStepsIndex].Jsonize());
   }
   payload.WithArray("beforeSteps", std::move(beforeStepsJsonList));

  }

  if(m_afterStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> afterStepsJsonList(m_afterSteps.size());
   for(unsigned afterStepsIndex = 0; afterStepsIndex < afterStepsJsonList.GetLength(); ++afterStepsIndex)
   {
     afterStepsJsonList[afterStepsIndex].AsObject(m_afterSteps[afterStepsIndex].Jsonize());
   }
   payload.WithArray("afterSteps", std::move(afterStepsJsonList));

  }

  if(m_testCasesHasBeenSet)
  {
   payload.WithObject("testCases", m_testCases.Jsonize());

  }

  return payload.View().WriteReadable();
}




