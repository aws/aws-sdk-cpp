/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetDataQualityRulesetEvaluationRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataQualityRulesetEvaluationRunResult::GetDataQualityRulesetEvaluationRunResult() : 
    m_numberOfWorkers(0),
    m_timeout(0),
    m_status(TaskStatusType::NOT_SET),
    m_executionTime(0)
{
}

GetDataQualityRulesetEvaluationRunResult::GetDataQualityRulesetEvaluationRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numberOfWorkers(0),
    m_timeout(0),
    m_status(TaskStatusType::NOT_SET),
    m_executionTime(0)
{
  *this = result;
}

GetDataQualityRulesetEvaluationRunResult& GetDataQualityRulesetEvaluationRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RunId"))
  {
    m_runId = jsonValue.GetString("RunId");

  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

  }

  if(jsonValue.ValueExists("NumberOfWorkers"))
  {
    m_numberOfWorkers = jsonValue.GetInteger("NumberOfWorkers");

  }

  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");

  }

  if(jsonValue.ValueExists("AdditionalRunOptions"))
  {
    m_additionalRunOptions = jsonValue.GetObject("AdditionalRunOptions");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskStatusTypeMapper::GetTaskStatusTypeForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("ErrorString"))
  {
    m_errorString = jsonValue.GetString("ErrorString");

  }

  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");

  }

  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");

  }

  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetDouble("CompletedOn");

  }

  if(jsonValue.ValueExists("ExecutionTime"))
  {
    m_executionTime = jsonValue.GetInteger("ExecutionTime");

  }

  if(jsonValue.ValueExists("RulesetNames"))
  {
    Aws::Utils::Array<JsonView> rulesetNamesJsonList = jsonValue.GetArray("RulesetNames");
    for(unsigned rulesetNamesIndex = 0; rulesetNamesIndex < rulesetNamesJsonList.GetLength(); ++rulesetNamesIndex)
    {
      m_rulesetNames.push_back(rulesetNamesJsonList[rulesetNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("ResultIds"))
  {
    Aws::Utils::Array<JsonView> resultIdsJsonList = jsonValue.GetArray("ResultIds");
    for(unsigned resultIdsIndex = 0; resultIdsIndex < resultIdsJsonList.GetLength(); ++resultIdsIndex)
    {
      m_resultIds.push_back(resultIdsJsonList[resultIdsIndex].AsString());
    }
  }



  return *this;
}
