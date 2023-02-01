/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ImportSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

ImportSummary::ImportSummary() : 
    m_importArnHasBeenSet(false),
    m_importStatus(ImportStatus::NOT_SET),
    m_importStatusHasBeenSet(false),
    m_tableArnHasBeenSet(false),
    m_s3BucketSourceHasBeenSet(false),
    m_cloudWatchLogGroupArnHasBeenSet(false),
    m_inputFormat(InputFormat::NOT_SET),
    m_inputFormatHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

ImportSummary::ImportSummary(JsonView jsonValue) : 
    m_importArnHasBeenSet(false),
    m_importStatus(ImportStatus::NOT_SET),
    m_importStatusHasBeenSet(false),
    m_tableArnHasBeenSet(false),
    m_s3BucketSourceHasBeenSet(false),
    m_cloudWatchLogGroupArnHasBeenSet(false),
    m_inputFormat(InputFormat::NOT_SET),
    m_inputFormatHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ImportSummary& ImportSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImportArn"))
  {
    m_importArn = jsonValue.GetString("ImportArn");

    m_importArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportStatus"))
  {
    m_importStatus = ImportStatusMapper::GetImportStatusForName(jsonValue.GetString("ImportStatus"));

    m_importStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableArn"))
  {
    m_tableArn = jsonValue.GetString("TableArn");

    m_tableArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketSource"))
  {
    m_s3BucketSource = jsonValue.GetObject("S3BucketSource");

    m_s3BucketSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLogGroupArn"))
  {
    m_cloudWatchLogGroupArn = jsonValue.GetString("CloudWatchLogGroupArn");

    m_cloudWatchLogGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputFormat"))
  {
    m_inputFormat = InputFormatMapper::GetInputFormatForName(jsonValue.GetString("InputFormat"));

    m_inputFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportSummary::Jsonize() const
{
  JsonValue payload;

  if(m_importArnHasBeenSet)
  {
   payload.WithString("ImportArn", m_importArn);

  }

  if(m_importStatusHasBeenSet)
  {
   payload.WithString("ImportStatus", ImportStatusMapper::GetNameForImportStatus(m_importStatus));
  }

  if(m_tableArnHasBeenSet)
  {
   payload.WithString("TableArn", m_tableArn);

  }

  if(m_s3BucketSourceHasBeenSet)
  {
   payload.WithObject("S3BucketSource", m_s3BucketSource.Jsonize());

  }

  if(m_cloudWatchLogGroupArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogGroupArn", m_cloudWatchLogGroupArn);

  }

  if(m_inputFormatHasBeenSet)
  {
   payload.WithString("InputFormat", InputFormatMapper::GetNameForInputFormat(m_inputFormat));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
