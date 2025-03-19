/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetDataQualityRulesetEvaluationRunResult.h>
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

GetDataQualityRulesetEvaluationRunResult::GetDataQualityRulesetEvaluationRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDataQualityRulesetEvaluationRunResult& GetDataQualityRulesetEvaluationRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RunId"))
  {
    m_runId = jsonValue.GetString("RunId");
    m_runIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");
    m_dataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");
    m_roleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfWorkers"))
  {
    m_numberOfWorkers = jsonValue.GetInteger("NumberOfWorkers");
    m_numberOfWorkersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");
    m_timeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalRunOptions"))
  {
    m_additionalRunOptions = jsonValue.GetObject("AdditionalRunOptions");
    m_additionalRunOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskStatusTypeMapper::GetTaskStatusTypeForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorString"))
  {
    m_errorString = jsonValue.GetString("ErrorString");
    m_errorStringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");
    m_startedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");
    m_lastModifiedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetDouble("CompletedOn");
    m_completedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionTime"))
  {
    m_executionTime = jsonValue.GetInteger("ExecutionTime");
    m_executionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RulesetNames"))
  {
    Aws::Utils::Array<JsonView> rulesetNamesJsonList = jsonValue.GetArray("RulesetNames");
    for(unsigned rulesetNamesIndex = 0; rulesetNamesIndex < rulesetNamesJsonList.GetLength(); ++rulesetNamesIndex)
    {
      m_rulesetNames.push_back(rulesetNamesJsonList[rulesetNamesIndex].AsString());
    }
    m_rulesetNamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResultIds"))
  {
    Aws::Utils::Array<JsonView> resultIdsJsonList = jsonValue.GetArray("ResultIds");
    for(unsigned resultIdsIndex = 0; resultIdsIndex < resultIdsJsonList.GetLength(); ++resultIdsIndex)
    {
      m_resultIds.push_back(resultIdsJsonList[resultIdsIndex].AsString());
    }
    m_resultIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalDataSources"))
  {
    Aws::Map<Aws::String, JsonView> additionalDataSourcesJsonMap = jsonValue.GetObject("AdditionalDataSources").GetAllObjects();
    for(auto& additionalDataSourcesItem : additionalDataSourcesJsonMap)
    {
      m_additionalDataSources[additionalDataSourcesItem.first] = additionalDataSourcesItem.second.AsObject();
    }
    m_additionalDataSourcesHasBeenSet = true;
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
