/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/JobRun.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

JobRun::JobRun() : 
    m_attempt(0),
    m_attemptHasBeenSet(false),
    m_completedOnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_executionTime(0),
    m_executionTimeHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_state(JobRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_logSubscription(LogSubscription::NOT_SET),
    m_logSubscriptionHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_dataCatalogOutputsHasBeenSet(false),
    m_databaseOutputsHasBeenSet(false),
    m_recipeReferenceHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_jobSampleHasBeenSet(false),
    m_validationConfigurationsHasBeenSet(false)
{
}

JobRun::JobRun(JsonView jsonValue) : 
    m_attempt(0),
    m_attemptHasBeenSet(false),
    m_completedOnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_executionTime(0),
    m_executionTimeHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_state(JobRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_logSubscription(LogSubscription::NOT_SET),
    m_logSubscriptionHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_dataCatalogOutputsHasBeenSet(false),
    m_databaseOutputsHasBeenSet(false),
    m_recipeReferenceHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_jobSampleHasBeenSet(false),
    m_validationConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

JobRun& JobRun::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("ValidationConfigurations"))
  {
    Aws::Utils::Array<JsonView> validationConfigurationsJsonList = jsonValue.GetArray("ValidationConfigurations");
    for(unsigned validationConfigurationsIndex = 0; validationConfigurationsIndex < validationConfigurationsJsonList.GetLength(); ++validationConfigurationsIndex)
    {
      m_validationConfigurations.push_back(validationConfigurationsJsonList[validationConfigurationsIndex].AsObject());
    }
    m_validationConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue JobRun::Jsonize() const
{
  JsonValue payload;

  if(m_attemptHasBeenSet)
  {
   payload.WithInteger("Attempt", m_attempt);

  }

  if(m_completedOnHasBeenSet)
  {
   payload.WithDouble("CompletedOn", m_completedOn.SecondsWithMSPrecision());
  }

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_executionTimeHasBeenSet)
  {
   payload.WithInteger("ExecutionTime", m_executionTime);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", JobRunStateMapper::GetNameForJobRunState(m_state));
  }

  if(m_logSubscriptionHasBeenSet)
  {
   payload.WithString("LogSubscription", LogSubscriptionMapper::GetNameForLogSubscription(m_logSubscription));
  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("LogGroupName", m_logGroupName);

  }

  if(m_outputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("Outputs", std::move(outputsJsonList));

  }

  if(m_dataCatalogOutputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataCatalogOutputsJsonList(m_dataCatalogOutputs.size());
   for(unsigned dataCatalogOutputsIndex = 0; dataCatalogOutputsIndex < dataCatalogOutputsJsonList.GetLength(); ++dataCatalogOutputsIndex)
   {
     dataCatalogOutputsJsonList[dataCatalogOutputsIndex].AsObject(m_dataCatalogOutputs[dataCatalogOutputsIndex].Jsonize());
   }
   payload.WithArray("DataCatalogOutputs", std::move(dataCatalogOutputsJsonList));

  }

  if(m_databaseOutputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> databaseOutputsJsonList(m_databaseOutputs.size());
   for(unsigned databaseOutputsIndex = 0; databaseOutputsIndex < databaseOutputsJsonList.GetLength(); ++databaseOutputsIndex)
   {
     databaseOutputsJsonList[databaseOutputsIndex].AsObject(m_databaseOutputs[databaseOutputsIndex].Jsonize());
   }
   payload.WithArray("DatabaseOutputs", std::move(databaseOutputsJsonList));

  }

  if(m_recipeReferenceHasBeenSet)
  {
   payload.WithObject("RecipeReference", m_recipeReference.Jsonize());

  }

  if(m_startedByHasBeenSet)
  {
   payload.WithString("StartedBy", m_startedBy);

  }

  if(m_startedOnHasBeenSet)
  {
   payload.WithDouble("StartedOn", m_startedOn.SecondsWithMSPrecision());
  }

  if(m_jobSampleHasBeenSet)
  {
   payload.WithObject("JobSample", m_jobSample.Jsonize());

  }

  if(m_validationConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validationConfigurationsJsonList(m_validationConfigurations.size());
   for(unsigned validationConfigurationsIndex = 0; validationConfigurationsIndex < validationConfigurationsJsonList.GetLength(); ++validationConfigurationsIndex)
   {
     validationConfigurationsJsonList[validationConfigurationsIndex].AsObject(m_validationConfigurations[validationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("ValidationConfigurations", std::move(validationConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
