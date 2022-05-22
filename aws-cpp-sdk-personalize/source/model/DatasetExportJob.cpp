/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DatasetExportJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

DatasetExportJob::DatasetExportJob() : 
    m_jobNameHasBeenSet(false),
    m_datasetExportJobArnHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_ingestionMode(IngestionMode::NOT_SET),
    m_ingestionModeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_jobOutputHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

DatasetExportJob::DatasetExportJob(JsonView jsonValue) : 
    m_jobNameHasBeenSet(false),
    m_datasetExportJobArnHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_ingestionMode(IngestionMode::NOT_SET),
    m_ingestionModeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_jobOutputHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetExportJob& DatasetExportJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datasetExportJobArn"))
  {
    m_datasetExportJobArn = jsonValue.GetString("datasetExportJobArn");

    m_datasetExportJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datasetArn"))
  {
    m_datasetArn = jsonValue.GetString("datasetArn");

    m_datasetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestionMode"))
  {
    m_ingestionMode = IngestionModeMapper::GetIngestionModeForName(jsonValue.GetString("ingestionMode"));

    m_ingestionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobOutput"))
  {
    m_jobOutput = jsonValue.GetObject("jobOutput");

    m_jobOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetExportJob::Jsonize() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_datasetExportJobArnHasBeenSet)
  {
   payload.WithString("datasetExportJobArn", m_datasetExportJobArn);

  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("datasetArn", m_datasetArn);

  }

  if(m_ingestionModeHasBeenSet)
  {
   payload.WithString("ingestionMode", IngestionModeMapper::GetNameForIngestionMode(m_ingestionMode));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_jobOutputHasBeenSet)
  {
   payload.WithObject("jobOutput", m_jobOutput.Jsonize());

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
