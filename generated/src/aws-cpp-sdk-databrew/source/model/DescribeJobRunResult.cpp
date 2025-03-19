/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DescribeJobRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeJobRunResult::DescribeJobRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeJobRunResult& DescribeJobRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Attempt"))
  {
    m_attempt = jsonValue.GetInteger("Attempt");
    m_attemptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetDouble("CompletedOn");
    m_completedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");
    m_datasetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionTime"))
  {
    m_executionTime = jsonValue.GetInteger("ExecutionTime");
    m_executionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProfileConfiguration"))
  {
    m_profileConfiguration = jsonValue.GetObject("ProfileConfiguration");
    m_profileConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidationConfigurations"))
  {
    Aws::Utils::Array<JsonView> validationConfigurationsJsonList = jsonValue.GetArray("ValidationConfigurations");
    for(unsigned validationConfigurationsIndex = 0; validationConfigurationsIndex < validationConfigurationsJsonList.GetLength(); ++validationConfigurationsIndex)
    {
      m_validationConfigurations.push_back(validationConfigurationsJsonList[validationConfigurationsIndex].AsObject());
    }
    m_validationConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RunId"))
  {
    m_runId = jsonValue.GetString("RunId");
    m_runIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = JobRunStateMapper::GetJobRunStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogSubscription"))
  {
    m_logSubscription = LogSubscriptionMapper::GetLogSubscriptionForName(jsonValue.GetString("LogSubscription"));
    m_logSubscriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogGroupName"))
  {
    m_logGroupName = jsonValue.GetString("LogGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Outputs"))
  {
    Aws::Utils::Array<JsonView> outputsJsonList = jsonValue.GetArray("Outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
    m_outputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataCatalogOutputs"))
  {
    Aws::Utils::Array<JsonView> dataCatalogOutputsJsonList = jsonValue.GetArray("DataCatalogOutputs");
    for(unsigned dataCatalogOutputsIndex = 0; dataCatalogOutputsIndex < dataCatalogOutputsJsonList.GetLength(); ++dataCatalogOutputsIndex)
    {
      m_dataCatalogOutputs.push_back(dataCatalogOutputsJsonList[dataCatalogOutputsIndex].AsObject());
    }
    m_dataCatalogOutputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatabaseOutputs"))
  {
    Aws::Utils::Array<JsonView> databaseOutputsJsonList = jsonValue.GetArray("DatabaseOutputs");
    for(unsigned databaseOutputsIndex = 0; databaseOutputsIndex < databaseOutputsJsonList.GetLength(); ++databaseOutputsIndex)
    {
      m_databaseOutputs.push_back(databaseOutputsJsonList[databaseOutputsIndex].AsObject());
    }
    m_databaseOutputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecipeReference"))
  {
    m_recipeReference = jsonValue.GetObject("RecipeReference");
    m_recipeReferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedBy"))
  {
    m_startedBy = jsonValue.GetString("StartedBy");
    m_startedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");
    m_startedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobSample"))
  {
    m_jobSample = jsonValue.GetObject("JobSample");
    m_jobSampleHasBeenSet = true;
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
