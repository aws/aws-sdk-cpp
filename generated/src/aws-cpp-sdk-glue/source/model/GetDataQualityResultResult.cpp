/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetDataQualityResultResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataQualityResultResult::GetDataQualityResultResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDataQualityResultResult& GetDataQualityResultResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResultId"))
  {
    m_resultId = jsonValue.GetString("ResultId");
    m_resultIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProfileId"))
  {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("AnalyzerResults"))
  {
    Aws::Utils::Array<JsonView> analyzerResultsJsonList = jsonValue.GetArray("AnalyzerResults");
    for(unsigned analyzerResultsIndex = 0; analyzerResultsIndex < analyzerResultsJsonList.GetLength(); ++analyzerResultsIndex)
    {
      m_analyzerResults.push_back(analyzerResultsJsonList[analyzerResultsIndex].AsObject());
    }
    m_analyzerResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Observations"))
  {
    Aws::Utils::Array<JsonView> observationsJsonList = jsonValue.GetArray("Observations");
    for(unsigned observationsIndex = 0; observationsIndex < observationsJsonList.GetLength(); ++observationsIndex)
    {
      m_observations.push_back(observationsJsonList[observationsIndex].AsObject());
    }
    m_observationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AggregatedMetrics"))
  {
    m_aggregatedMetrics = jsonValue.GetObject("AggregatedMetrics");
    m_aggregatedMetricsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
