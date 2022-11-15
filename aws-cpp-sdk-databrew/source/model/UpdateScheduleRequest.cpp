/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/UpdateScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateScheduleRequest::UpdateScheduleRequest() : 
    m_jobNamesHasBeenSet(false),
    m_cronExpressionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobNamesJsonList(m_jobNames.size());
   for(unsigned jobNamesIndex = 0; jobNamesIndex < jobNamesJsonList.GetLength(); ++jobNamesIndex)
   {
     jobNamesJsonList[jobNamesIndex].AsString(m_jobNames[jobNamesIndex]);
   }
   payload.WithArray("JobNames", std::move(jobNamesJsonList));

  }

  if(m_cronExpressionHasBeenSet)
  {
   payload.WithString("CronExpression", m_cronExpression);

  }

  return payload.View().WriteReadable();
}




