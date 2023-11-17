/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/StartQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::InternetMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartQueryRequest::StartQueryRequest() : 
    m_monitorNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_queryType(QueryType::NOT_SET),
    m_queryTypeHasBeenSet(false),
    m_filterParametersHasBeenSet(false)
{
}

Aws::String StartQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("EndTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_queryTypeHasBeenSet)
  {
   payload.WithString("QueryType", QueryTypeMapper::GetNameForQueryType(m_queryType));
  }

  if(m_filterParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterParametersJsonList(m_filterParameters.size());
   for(unsigned filterParametersIndex = 0; filterParametersIndex < filterParametersJsonList.GetLength(); ++filterParametersIndex)
   {
     filterParametersJsonList[filterParametersIndex].AsObject(m_filterParameters[filterParametersIndex].Jsonize());
   }
   payload.WithArray("FilterParameters", std::move(filterParametersJsonList));

  }

  return payload.View().WriteReadable();
}




