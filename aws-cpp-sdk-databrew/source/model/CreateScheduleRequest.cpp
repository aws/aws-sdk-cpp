/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/CreateScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateScheduleRequest::CreateScheduleRequest() : 
    m_jobNamesHasBeenSet(false),
    m_cronExpressionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String CreateScheduleRequest::SerializePayload() const
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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}




