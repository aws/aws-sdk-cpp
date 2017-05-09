/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/xray/model/Service.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

Service::Service() : 
    m_referenceId(0),
    m_referenceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namesHasBeenSet(false),
    m_root(false),
    m_rootHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_edgesHasBeenSet(false),
    m_summaryStatisticsHasBeenSet(false),
    m_durationHistogramHasBeenSet(false)
{
}

Service::Service(const JsonValue& jsonValue) : 
    m_referenceId(0),
    m_referenceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namesHasBeenSet(false),
    m_root(false),
    m_rootHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_edgesHasBeenSet(false),
    m_summaryStatisticsHasBeenSet(false),
    m_durationHistogramHasBeenSet(false)
{
  *this = jsonValue;
}

Service& Service::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ReferenceId"))
  {
    m_referenceId = jsonValue.GetInteger("ReferenceId");

    m_referenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Names"))
  {
    Array<JsonValue> namesJsonList = jsonValue.GetArray("Names");
    for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
    {
      m_names.push_back(namesJsonList[namesIndex].AsString());
    }
    m_namesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Root"))
  {
    m_root = jsonValue.GetBool("Root");

    m_rootHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Edges"))
  {
    Array<JsonValue> edgesJsonList = jsonValue.GetArray("Edges");
    for(unsigned edgesIndex = 0; edgesIndex < edgesJsonList.GetLength(); ++edgesIndex)
    {
      m_edges.push_back(edgesJsonList[edgesIndex].AsObject());
    }
    m_edgesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SummaryStatistics"))
  {
    m_summaryStatistics = jsonValue.GetObject("SummaryStatistics");

    m_summaryStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationHistogram"))
  {
    Array<JsonValue> durationHistogramJsonList = jsonValue.GetArray("DurationHistogram");
    for(unsigned durationHistogramIndex = 0; durationHistogramIndex < durationHistogramJsonList.GetLength(); ++durationHistogramIndex)
    {
      m_durationHistogram.push_back(durationHistogramJsonList[durationHistogramIndex].AsObject());
    }
    m_durationHistogramHasBeenSet = true;
  }

  return *this;
}

JsonValue Service::Jsonize() const
{
  JsonValue payload;

  if(m_referenceIdHasBeenSet)
  {
   payload.WithInteger("ReferenceId", m_referenceId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_namesHasBeenSet)
  {
   Array<JsonValue> namesJsonList(m_names.size());
   for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
   {
     namesJsonList[namesIndex].AsString(m_names[namesIndex]);
   }
   payload.WithArray("Names", std::move(namesJsonList));

  }

  if(m_rootHasBeenSet)
  {
   payload.WithBool("Root", m_root);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_edgesHasBeenSet)
  {
   Array<JsonValue> edgesJsonList(m_edges.size());
   for(unsigned edgesIndex = 0; edgesIndex < edgesJsonList.GetLength(); ++edgesIndex)
   {
     edgesJsonList[edgesIndex].AsObject(m_edges[edgesIndex].Jsonize());
   }
   payload.WithArray("Edges", std::move(edgesJsonList));

  }

  if(m_summaryStatisticsHasBeenSet)
  {
   payload.WithObject("SummaryStatistics", m_summaryStatistics.Jsonize());

  }

  if(m_durationHistogramHasBeenSet)
  {
   Array<JsonValue> durationHistogramJsonList(m_durationHistogram.size());
   for(unsigned durationHistogramIndex = 0; durationHistogramIndex < durationHistogramJsonList.GetLength(); ++durationHistogramIndex)
   {
     durationHistogramJsonList[durationHistogramIndex].AsObject(m_durationHistogram[durationHistogramIndex].Jsonize());
   }
   payload.WithArray("DurationHistogram", std::move(durationHistogramJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws