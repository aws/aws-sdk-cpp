/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DatasetImportJob.h>
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

DatasetImportJob::DatasetImportJob() : 
    m_jobNameHasBeenSet(false),
    m_datasetImportJobArnHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_importMode(ImportMode::NOT_SET),
    m_importModeHasBeenSet(false),
    m_publishAttributionMetricsToS3(false),
    m_publishAttributionMetricsToS3HasBeenSet(false)
{
}

DatasetImportJob::DatasetImportJob(JsonView jsonValue) : 
    m_jobNameHasBeenSet(false),
    m_datasetImportJobArnHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_importMode(ImportMode::NOT_SET),
    m_importModeHasBeenSet(false),
    m_publishAttributionMetricsToS3(false),
    m_publishAttributionMetricsToS3HasBeenSet(false)
{
  *this = jsonValue;
}

DatasetImportJob& DatasetImportJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datasetImportJobArn"))
  {
    m_datasetImportJobArn = jsonValue.GetString("datasetImportJobArn");

    m_datasetImportJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datasetArn"))
  {
    m_datasetArn = jsonValue.GetString("datasetArn");

    m_datasetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSource"))
  {
    m_dataSource = jsonValue.GetObject("dataSource");

    m_dataSourceHasBeenSet = true;
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

  if(jsonValue.ValueExists("importMode"))
  {
    m_importMode = ImportModeMapper::GetImportModeForName(jsonValue.GetString("importMode"));

    m_importModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publishAttributionMetricsToS3"))
  {
    m_publishAttributionMetricsToS3 = jsonValue.GetBool("publishAttributionMetricsToS3");

    m_publishAttributionMetricsToS3HasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetImportJob::Jsonize() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_datasetImportJobArnHasBeenSet)
  {
   payload.WithString("datasetImportJobArn", m_datasetImportJobArn);

  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("datasetArn", m_datasetArn);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("dataSource", m_dataSource.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

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

  if(m_importModeHasBeenSet)
  {
   payload.WithString("importMode", ImportModeMapper::GetNameForImportMode(m_importMode));
  }

  if(m_publishAttributionMetricsToS3HasBeenSet)
  {
   payload.WithBool("publishAttributionMetricsToS3", m_publishAttributionMetricsToS3);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
