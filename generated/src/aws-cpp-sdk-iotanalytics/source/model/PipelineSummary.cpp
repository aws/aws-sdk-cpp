/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

PipelineSummary::PipelineSummary(JsonView jsonValue) : 
    m_pipelineNameHasBeenSet(false),
    m_reprocessingSummariesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineSummary& PipelineSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelineName"))
  {
    m_pipelineName = jsonValue.GetString("pipelineName");

    m_pipelineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reprocessingSummaries"))
  {
    Aws::Utils::Array<JsonView> reprocessingSummariesJsonList = jsonValue.GetArray("reprocessingSummaries");
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
   Aws::Utils::Array<JsonValue> reprocessingSummariesJsonList(m_reprocessingSummaries.size());
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
