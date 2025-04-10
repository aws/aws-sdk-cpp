﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/ModelPackagingJobMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

ModelPackagingJobMetadata::ModelPackagingJobMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelPackagingJobMetadata& ModelPackagingJobMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProjectName"))
  {
    m_projectName = jsonValue.GetString("ProjectName");
    m_projectNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetString("ModelVersion");
    m_modelVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelPackagingJobDescription"))
  {
    m_modelPackagingJobDescription = jsonValue.GetString("ModelPackagingJobDescription");
    m_modelPackagingJobDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelPackagingMethod"))
  {
    m_modelPackagingMethod = jsonValue.GetString("ModelPackagingMethod");
    m_modelPackagingMethodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelPackagingJobStatusMapper::GetModelPackagingJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");
    m_creationTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");
    m_lastUpdatedTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelPackagingJobMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("ProjectName", m_projectName);

  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithString("ModelVersion", m_modelVersion);

  }

  if(m_modelPackagingJobDescriptionHasBeenSet)
  {
   payload.WithString("ModelPackagingJobDescription", m_modelPackagingJobDescription);

  }

  if(m_modelPackagingMethodHasBeenSet)
  {
   payload.WithString("ModelPackagingMethod", m_modelPackagingMethod);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ModelPackagingJobStatusMapper::GetNameForModelPackagingJobStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
