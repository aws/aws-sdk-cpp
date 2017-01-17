﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/xray/model/GetTraceSummariesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTraceSummariesRequest::GetTraceSummariesRequest() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sampling(false),
    m_samplingHasBeenSet(false),
    m_filterExpressionHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetTraceSummariesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_samplingHasBeenSet)
  {
   payload.WithBool("Sampling", m_sampling);

  }

  if(m_filterExpressionHasBeenSet)
  {
   payload.WithString("FilterExpression", m_filterExpression);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.WriteReadable();
}



