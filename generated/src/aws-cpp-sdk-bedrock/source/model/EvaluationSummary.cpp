/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

EvaluationSummary::EvaluationSummary() : 
    m_jobArnHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_status(EvaluationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_jobType(EvaluationJobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_evaluationTaskTypesHasBeenSet(false),
    m_modelIdentifiersHasBeenSet(false),
    m_ragIdentifiersHasBeenSet(false),
    m_evaluatorModelIdentifiersHasBeenSet(false),
    m_applicationType(ApplicationType::NOT_SET),
    m_applicationTypeHasBeenSet(false)
{
}

EvaluationSummary::EvaluationSummary(JsonView jsonValue)
  : EvaluationSummary()
{
  *this = jsonValue;
}

EvaluationSummary& EvaluationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

    m_jobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = EvaluationJobStatusMapper::GetEvaluationJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobType"))
  {
    m_jobType = EvaluationJobTypeMapper::GetEvaluationJobTypeForName(jsonValue.GetString("jobType"));

    m_jobTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evaluationTaskTypes"))
  {
    Aws::Utils::Array<JsonView> evaluationTaskTypesJsonList = jsonValue.GetArray("evaluationTaskTypes");
    for(unsigned evaluationTaskTypesIndex = 0; evaluationTaskTypesIndex < evaluationTaskTypesJsonList.GetLength(); ++evaluationTaskTypesIndex)
    {
      m_evaluationTaskTypes.push_back(EvaluationTaskTypeMapper::GetEvaluationTaskTypeForName(evaluationTaskTypesJsonList[evaluationTaskTypesIndex].AsString()));
    }
    m_evaluationTaskTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelIdentifiers"))
  {
    Aws::Utils::Array<JsonView> modelIdentifiersJsonList = jsonValue.GetArray("modelIdentifiers");
    for(unsigned modelIdentifiersIndex = 0; modelIdentifiersIndex < modelIdentifiersJsonList.GetLength(); ++modelIdentifiersIndex)
    {
      m_modelIdentifiers.push_back(modelIdentifiersJsonList[modelIdentifiersIndex].AsString());
    }
    m_modelIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ragIdentifiers"))
  {
    Aws::Utils::Array<JsonView> ragIdentifiersJsonList = jsonValue.GetArray("ragIdentifiers");
    for(unsigned ragIdentifiersIndex = 0; ragIdentifiersIndex < ragIdentifiersJsonList.GetLength(); ++ragIdentifiersIndex)
    {
      m_ragIdentifiers.push_back(ragIdentifiersJsonList[ragIdentifiersIndex].AsString());
    }
    m_ragIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evaluatorModelIdentifiers"))
  {
    Aws::Utils::Array<JsonView> evaluatorModelIdentifiersJsonList = jsonValue.GetArray("evaluatorModelIdentifiers");
    for(unsigned evaluatorModelIdentifiersIndex = 0; evaluatorModelIdentifiersIndex < evaluatorModelIdentifiersJsonList.GetLength(); ++evaluatorModelIdentifiersIndex)
    {
      m_evaluatorModelIdentifiers.push_back(evaluatorModelIdentifiersJsonList[evaluatorModelIdentifiersIndex].AsString());
    }
    m_evaluatorModelIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationType"))
  {
    m_applicationType = ApplicationTypeMapper::GetApplicationTypeForName(jsonValue.GetString("applicationType"));

    m_applicationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", EvaluationJobStatusMapper::GetNameForEvaluationJobStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("jobType", EvaluationJobTypeMapper::GetNameForEvaluationJobType(m_jobType));
  }

  if(m_evaluationTaskTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> evaluationTaskTypesJsonList(m_evaluationTaskTypes.size());
   for(unsigned evaluationTaskTypesIndex = 0; evaluationTaskTypesIndex < evaluationTaskTypesJsonList.GetLength(); ++evaluationTaskTypesIndex)
   {
     evaluationTaskTypesJsonList[evaluationTaskTypesIndex].AsString(EvaluationTaskTypeMapper::GetNameForEvaluationTaskType(m_evaluationTaskTypes[evaluationTaskTypesIndex]));
   }
   payload.WithArray("evaluationTaskTypes", std::move(evaluationTaskTypesJsonList));

  }

  if(m_modelIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelIdentifiersJsonList(m_modelIdentifiers.size());
   for(unsigned modelIdentifiersIndex = 0; modelIdentifiersIndex < modelIdentifiersJsonList.GetLength(); ++modelIdentifiersIndex)
   {
     modelIdentifiersJsonList[modelIdentifiersIndex].AsString(m_modelIdentifiers[modelIdentifiersIndex]);
   }
   payload.WithArray("modelIdentifiers", std::move(modelIdentifiersJsonList));

  }

  if(m_ragIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ragIdentifiersJsonList(m_ragIdentifiers.size());
   for(unsigned ragIdentifiersIndex = 0; ragIdentifiersIndex < ragIdentifiersJsonList.GetLength(); ++ragIdentifiersIndex)
   {
     ragIdentifiersJsonList[ragIdentifiersIndex].AsString(m_ragIdentifiers[ragIdentifiersIndex]);
   }
   payload.WithArray("ragIdentifiers", std::move(ragIdentifiersJsonList));

  }

  if(m_evaluatorModelIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> evaluatorModelIdentifiersJsonList(m_evaluatorModelIdentifiers.size());
   for(unsigned evaluatorModelIdentifiersIndex = 0; evaluatorModelIdentifiersIndex < evaluatorModelIdentifiersJsonList.GetLength(); ++evaluatorModelIdentifiersIndex)
   {
     evaluatorModelIdentifiersJsonList[evaluatorModelIdentifiersIndex].AsString(m_evaluatorModelIdentifiers[evaluatorModelIdentifiersIndex]);
   }
   payload.WithArray("evaluatorModelIdentifiers", std::move(evaluatorModelIdentifiersJsonList));

  }

  if(m_applicationTypeHasBeenSet)
  {
   payload.WithString("applicationType", ApplicationTypeMapper::GetNameForApplicationType(m_applicationType));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
