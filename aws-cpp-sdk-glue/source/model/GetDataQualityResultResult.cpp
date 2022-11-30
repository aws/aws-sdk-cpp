/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetDataQualityResultResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataQualityResultResult::GetDataQualityResultResult() : 
    m_score(0.0)
{
}

GetDataQualityResultResult::GetDataQualityResultResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_score(0.0)
{
  *this = result;
}

GetDataQualityResultResult& GetDataQualityResultResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResultId"))
  {
    m_resultId = jsonValue.GetString("ResultId");

  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

  }

  if(jsonValue.ValueExists("RulesetName"))
  {
    m_rulesetName = jsonValue.GetString("RulesetName");

  }

  if(jsonValue.ValueExists("EvaluationContext"))
  {
    m_evaluationContext = jsonValue.GetString("EvaluationContext");

  }

  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");

  }

  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetDouble("CompletedOn");

  }

  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

  }

  if(jsonValue.ValueExists("JobRunId"))
  {
    m_jobRunId = jsonValue.GetString("JobRunId");

  }

  if(jsonValue.ValueExists("RulesetEvaluationRunId"))
  {
    m_rulesetEvaluationRunId = jsonValue.GetString("RulesetEvaluationRunId");

  }

  if(jsonValue.ValueExists("RuleResults"))
  {
    Aws::Utils::Array<JsonView> ruleResultsJsonList = jsonValue.GetArray("RuleResults");
    for(unsigned ruleResultsIndex = 0; ruleResultsIndex < ruleResultsJsonList.GetLength(); ++ruleResultsIndex)
    {
      m_ruleResults.push_back(ruleResultsJsonList[ruleResultsIndex].AsObject());
    }
  }



  return *this;
}
