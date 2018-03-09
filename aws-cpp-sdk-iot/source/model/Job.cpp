/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iot/model/Job.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

Job::Job() : 
    m_jobArnHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_targetSelection(TargetSelection::NOT_SET),
    m_targetSelectionHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_presignedUrlConfigHasBeenSet(false),
    m_jobExecutionsRolloutConfigHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_completedAtHasBeenSet(false),
    m_jobProcessDetailsHasBeenSet(false),
    m_documentParametersHasBeenSet(false)
{
}

Job::Job(const JsonValue& jsonValue) : 
    m_jobArnHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_targetSelection(TargetSelection::NOT_SET),
    m_targetSelectionHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_presignedUrlConfigHasBeenSet(false),
    m_jobExecutionsRolloutConfigHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_completedAtHasBeenSet(false),
    m_jobProcessDetailsHasBeenSet(false),
    m_documentParametersHasBeenSet(false)
{
  *this = jsonValue;
}

Job& Job::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

    m_jobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetSelection"))
  {
    m_targetSelection = TargetSelectionMapper::GetTargetSelectionForName(jsonValue.GetString("targetSelection"));

    m_targetSelectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");

    m_commentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targets"))
  {
    Array<JsonValue> targetsJsonList = jsonValue.GetArray("targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsString());
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("presignedUrlConfig"))
  {
    m_presignedUrlConfig = jsonValue.GetObject("presignedUrlConfig");

    m_presignedUrlConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobExecutionsRolloutConfig"))
  {
    m_jobExecutionsRolloutConfig = jsonValue.GetObject("jobExecutionsRolloutConfig");

    m_jobExecutionsRolloutConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completedAt"))
  {
    m_completedAt = jsonValue.GetDouble("completedAt");

    m_completedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobProcessDetails"))
  {
    m_jobProcessDetails = jsonValue.GetObject("jobProcessDetails");

    m_jobProcessDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("documentParameters"))
  {
    Aws::Map<Aws::String, JsonValue> documentParametersJsonMap = jsonValue.GetObject("documentParameters").GetAllObjects();
    for(auto& documentParametersItem : documentParametersJsonMap)
    {
      m_documentParameters[documentParametersItem.first] = documentParametersItem.second.AsString();
    }
    m_documentParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue Job::Jsonize() const
{
  JsonValue payload;

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_targetSelectionHasBeenSet)
  {
   payload.WithString("targetSelection", TargetSelectionMapper::GetNameForTargetSelection(m_targetSelection));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_targetsHasBeenSet)
  {
   Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("targets", std::move(targetsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_presignedUrlConfigHasBeenSet)
  {
   payload.WithObject("presignedUrlConfig", m_presignedUrlConfig.Jsonize());

  }

  if(m_jobExecutionsRolloutConfigHasBeenSet)
  {
   payload.WithObject("jobExecutionsRolloutConfig", m_jobExecutionsRolloutConfig.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_completedAtHasBeenSet)
  {
   payload.WithDouble("completedAt", m_completedAt.SecondsWithMSPrecision());
  }

  if(m_jobProcessDetailsHasBeenSet)
  {
   payload.WithObject("jobProcessDetails", m_jobProcessDetails.Jsonize());

  }

  if(m_documentParametersHasBeenSet)
  {
   JsonValue documentParametersJsonMap;
   for(auto& documentParametersItem : m_documentParameters)
   {
     documentParametersJsonMap.WithString(documentParametersItem.first, documentParametersItem.second);
   }
   payload.WithObject("documentParameters", std::move(documentParametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
