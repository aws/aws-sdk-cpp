/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DataQualityResult::DataQualityResult() : 
    m_resultIdHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_rulesetNameHasBeenSet(false),
    m_evaluationContextHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_completedOnHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobRunIdHasBeenSet(false),
    m_rulesetEvaluationRunIdHasBeenSet(false),
    m_ruleResultsHasBeenSet(false)
{
}

DataQualityResult::DataQualityResult(JsonView jsonValue) : 
    m_resultIdHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_rulesetNameHasBeenSet(false),
    m_evaluationContextHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_completedOnHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobRunIdHasBeenSet(false),
    m_rulesetEvaluationRunIdHasBeenSet(false),
    m_ruleResultsHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityResult& DataQualityResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResultId"))
  {
    m_resultId = jsonValue.GetString("ResultId");

    m_resultIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

    m_scoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RulesetName"))
  {
    m_rulesetName = jsonValue.GetString("RulesetName");

    m_rulesetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationContext"))
  {
    m_evaluationContext = jsonValue.GetString("EvaluationContext");

    m_evaluationContextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");

    m_startedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetDouble("CompletedOn");

    m_completedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobRunId"))
  {
    m_jobRunId = jsonValue.GetString("JobRunId");

    m_jobRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RulesetEvaluationRunId"))
  {
    m_rulesetEvaluationRunId = jsonValue.GetString("RulesetEvaluationRunId");

    m_rulesetEvaluationRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleResults"))
  {
    Aws::Utils::Array<JsonView> ruleResultsJsonList = jsonValue.GetArray("RuleResults");
    for(unsigned ruleResultsIndex = 0; ruleResultsIndex < ruleResultsJsonList.GetLength(); ++ruleResultsIndex)
    {
      m_ruleResults.push_back(ruleResultsJsonList[ruleResultsIndex].AsObject());
    }
    m_ruleResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityResult::Jsonize() const
{
  JsonValue payload;

  if(m_resultIdHasBeenSet)
  {
   payload.WithString("ResultId", m_resultId);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_rulesetNameHasBeenSet)
  {
   payload.WithString("RulesetName", m_rulesetName);

  }

  if(m_evaluationContextHasBeenSet)
  {
   payload.WithString("EvaluationContext", m_evaluationContext);

  }

  if(m_startedOnHasBeenSet)
  {
   payload.WithDouble("StartedOn", m_startedOn.SecondsWithMSPrecision());
  }

  if(m_completedOnHasBeenSet)
  {
   payload.WithDouble("CompletedOn", m_completedOn.SecondsWithMSPrecision());
  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobRunIdHasBeenSet)
  {
   payload.WithString("JobRunId", m_jobRunId);

  }

  if(m_rulesetEvaluationRunIdHasBeenSet)
  {
   payload.WithString("RulesetEvaluationRunId", m_rulesetEvaluationRunId);

  }

  if(m_ruleResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleResultsJsonList(m_ruleResults.size());
   for(unsigned ruleResultsIndex = 0; ruleResultsIndex < ruleResultsJsonList.GetLength(); ++ruleResultsIndex)
   {
     ruleResultsJsonList[ruleResultsIndex].AsObject(m_ruleResults[ruleResultsIndex].Jsonize());
   }
   payload.WithArray("RuleResults", std::move(ruleResultsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
