/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DescribeJobRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeJobRunResult::DescribeJobRunResult() : 
    m_attempt(0),
    m_executionTime(0),
    m_state(JobRunState::NOT_SET),
    m_logSubscription(LogSubscription::NOT_SET)
{
}

DescribeJobRunResult::DescribeJobRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_attempt(0),
    m_executionTime(0),
    m_state(JobRunState::NOT_SET),
    m_logSubscription(LogSubscription::NOT_SET)
{
  *this = result;
}

DescribeJobRunResult& DescribeJobRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Attempt"))
  {
    m_attempt = jsonValue.GetInteger("Attempt");

  }

  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetDouble("CompletedOn");

  }

  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");

  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

  }

  if(jsonValue.ValueExists("ExecutionTime"))
  {
    m_executionTime = jsonValue.GetInteger("ExecutionTime");

  }

  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

  }

  if(jsonValue.ValueExists("RunId"))
  {
    m_runId = jsonValue.GetString("RunId");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = JobRunStateMapper::GetJobRunStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("LogSubscription"))
  {
    m_logSubscription = LogSubscriptionMapper::GetLogSubscriptionForName(jsonValue.GetString("LogSubscription"));

  }

  if(jsonValue.ValueExists("LogGroupName"))
  {
    m_logGroupName = jsonValue.GetString("LogGroupName");

  }

  if(jsonValue.ValueExists("Outputs"))
  {
    Array<JsonView> outputsJsonList = jsonValue.GetArray("Outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("RecipeReference"))
  {
    m_recipeReference = jsonValue.GetObject("RecipeReference");

  }

  if(jsonValue.ValueExists("StartedBy"))
  {
    m_startedBy = jsonValue.GetString("StartedBy");

  }

  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");

  }

  if(jsonValue.ValueExists("JobSample"))
  {
    m_jobSample = jsonValue.GetObject("JobSample");

  }



  return *this;
}
