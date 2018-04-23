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

#include <aws/iotanalytics/model/PipelineSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

PipelineSummary::PipelineSummary() : 
    m_pipelineNameHasBeenSet(false),
    m_reprocessingSummariesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

PipelineSummary::PipelineSummary(const JsonValue& jsonValue) : 
    m_pipelineNameHasBeenSet(false),
    m_reprocessingSummariesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineSummary& PipelineSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("pipelineName"))
  {
    m_pipelineName = jsonValue.GetString("pipelineName");

    m_pipelineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reprocessingSummaries"))
  {
    Array<JsonValue> reprocessingSummariesJsonList = jsonValue.GetArray("reprocessingSummaries");
    for(unsigned reprocessingSummariesIndex = 0; reprocessingSummariesIndex < reprocessingSummariesJsonList.GetLength(); ++reprocessingSummariesIndex)
    {
      m_reprocessingSummaries.push_back(reprocessingSummariesJsonList[reprocessingSummariesIndex].AsObject());
    }
    m_reprocessingSummariesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineSummary::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineNameHasBeenSet)
  {
   payload.WithString("pipelineName", m_pipelineName);

  }

  if(m_reprocessingSummariesHasBeenSet)
  {
   Array<JsonValue> reprocessingSummariesJsonList(m_reprocessingSummaries.size());
   for(unsigned reprocessingSummariesIndex = 0; reprocessingSummariesIndex < reprocessingSummariesJsonList.GetLength(); ++reprocessingSummariesIndex)
   {
     reprocessingSummariesJsonList[reprocessingSummariesIndex].AsObject(m_reprocessingSummaries[reprocessingSummariesIndex].Jsonize());
   }
   payload.WithArray("reprocessingSummaries", std::move(reprocessingSummariesJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
