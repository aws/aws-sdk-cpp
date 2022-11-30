/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetDataQualityRuleRecommendationRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataQualityRuleRecommendationRunResult::GetDataQualityRuleRecommendationRunResult() : 
    m_numberOfWorkers(0),
    m_timeout(0),
    m_status(TaskStatusType::NOT_SET),
    m_executionTime(0)
{
}

GetDataQualityRuleRecommendationRunResult::GetDataQualityRuleRecommendationRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numberOfWorkers(0),
    m_timeout(0),
    m_status(TaskStatusType::NOT_SET),
    m_executionTime(0)
{
  *this = result;
}

GetDataQualityRuleRecommendationRunResult& GetDataQualityRuleRecommendationRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("RecommendedRuleset"))
  {
    m_recommendedRuleset = jsonValue.GetString("RecommendedRuleset");

  }

  if(jsonValue.ValueExists("CreatedRulesetName"))
  {
    m_createdRulesetName = jsonValue.GetString("CreatedRulesetName");

  }



  return *this;
}
