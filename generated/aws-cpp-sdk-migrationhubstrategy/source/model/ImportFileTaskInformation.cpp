/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ImportFileTaskInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

ImportFileTaskInformation::ImportFileTaskInformation() : 
    m_completionTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_importNameHasBeenSet(false),
    m_inputS3BucketHasBeenSet(false),
    m_inputS3KeyHasBeenSet(false),
    m_numberOfRecordsFailed(0),
    m_numberOfRecordsFailedHasBeenSet(false),
    m_numberOfRecordsSuccess(0),
    m_numberOfRecordsSuccessHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(ImportFileTaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReportS3BucketHasBeenSet(false),
    m_statusReportS3KeyHasBeenSet(false)
{
}

ImportFileTaskInformation::ImportFileTaskInformation(JsonView jsonValue) : 
    m_completionTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_importNameHasBeenSet(false),
    m_inputS3BucketHasBeenSet(false),
    m_inputS3KeyHasBeenSet(false),
    m_numberOfRecordsFailed(0),
    m_numberOfRecordsFailedHasBeenSet(false),
    m_numberOfRecordsSuccess(0),
    m_numberOfRecordsSuccessHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(ImportFileTaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReportS3BucketHasBeenSet(false),
    m_statusReportS3KeyHasBeenSet(false)
{
  *this = jsonValue;
}

ImportFileTaskInformation& ImportFileTaskInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetDouble("completionTime");

    m_completionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importName"))
  {
    m_importName = jsonValue.GetString("importName");

    m_importNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputS3Bucket"))
  {
    m_inputS3Bucket = jsonValue.GetString("inputS3Bucket");

    m_inputS3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputS3Key"))
  {
    m_inputS3Key = jsonValue.GetString("inputS3Key");

    m_inputS3KeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfRecordsFailed"))
  {
    m_numberOfRecordsFailed = jsonValue.GetInteger("numberOfRecordsFailed");

    m_numberOfRecordsFailedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfRecordsSuccess"))
  {
    m_numberOfRecordsSuccess = jsonValue.GetInteger("numberOfRecordsSuccess");

    m_numberOfRecordsSuccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ImportFileTaskStatusMapper::GetImportFileTaskStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReportS3Bucket"))
  {
    m_statusReportS3Bucket = jsonValue.GetString("statusReportS3Bucket");

    m_statusReportS3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReportS3Key"))
  {
    m_statusReportS3Key = jsonValue.GetString("statusReportS3Key");

    m_statusReportS3KeyHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportFileTaskInformation::Jsonize() const
{
  JsonValue payload;

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("completionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_importNameHasBeenSet)
  {
   payload.WithString("importName", m_importName);

  }

  if(m_inputS3BucketHasBeenSet)
  {
   payload.WithString("inputS3Bucket", m_inputS3Bucket);

  }

  if(m_inputS3KeyHasBeenSet)
  {
   payload.WithString("inputS3Key", m_inputS3Key);

  }

  if(m_numberOfRecordsFailedHasBeenSet)
  {
   payload.WithInteger("numberOfRecordsFailed", m_numberOfRecordsFailed);

  }

  if(m_numberOfRecordsSuccessHasBeenSet)
  {
   payload.WithInteger("numberOfRecordsSuccess", m_numberOfRecordsSuccess);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ImportFileTaskStatusMapper::GetNameForImportFileTaskStatus(m_status));
  }

  if(m_statusReportS3BucketHasBeenSet)
  {
   payload.WithString("statusReportS3Bucket", m_statusReportS3Bucket);

  }

  if(m_statusReportS3KeyHasBeenSet)
  {
   payload.WithString("statusReportS3Key", m_statusReportS3Key);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
