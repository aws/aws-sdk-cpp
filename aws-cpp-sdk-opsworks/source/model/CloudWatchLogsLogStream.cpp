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

#include <aws/opsworks/model/CloudWatchLogsLogStream.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

CloudWatchLogsLogStream::CloudWatchLogsLogStream() : 
    m_logGroupNameHasBeenSet(false),
    m_datetimeFormatHasBeenSet(false),
    m_timeZone(CloudWatchLogsTimeZone::NOT_SET),
    m_timeZoneHasBeenSet(false),
    m_fileHasBeenSet(false),
    m_fileFingerprintLinesHasBeenSet(false),
    m_multiLineStartPatternHasBeenSet(false),
    m_initialPosition(CloudWatchLogsInitialPosition::NOT_SET),
    m_initialPositionHasBeenSet(false),
    m_encoding(CloudWatchLogsEncoding::NOT_SET),
    m_encodingHasBeenSet(false),
    m_bufferDuration(0),
    m_bufferDurationHasBeenSet(false),
    m_batchCount(0),
    m_batchCountHasBeenSet(false),
    m_batchSize(0),
    m_batchSizeHasBeenSet(false)
{
}

CloudWatchLogsLogStream::CloudWatchLogsLogStream(const JsonValue& jsonValue) : 
    m_logGroupNameHasBeenSet(false),
    m_datetimeFormatHasBeenSet(false),
    m_timeZone(CloudWatchLogsTimeZone::NOT_SET),
    m_timeZoneHasBeenSet(false),
    m_fileHasBeenSet(false),
    m_fileFingerprintLinesHasBeenSet(false),
    m_multiLineStartPatternHasBeenSet(false),
    m_initialPosition(CloudWatchLogsInitialPosition::NOT_SET),
    m_initialPositionHasBeenSet(false),
    m_encoding(CloudWatchLogsEncoding::NOT_SET),
    m_encodingHasBeenSet(false),
    m_bufferDuration(0),
    m_bufferDurationHasBeenSet(false),
    m_batchCount(0),
    m_batchCountHasBeenSet(false),
    m_batchSize(0),
    m_batchSizeHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLogsLogStream& CloudWatchLogsLogStream::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("LogGroupName"))
  {
    m_logGroupName = jsonValue.GetString("LogGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatetimeFormat"))
  {
    m_datetimeFormat = jsonValue.GetString("DatetimeFormat");

    m_datetimeFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeZone"))
  {
    m_timeZone = CloudWatchLogsTimeZoneMapper::GetCloudWatchLogsTimeZoneForName(jsonValue.GetString("TimeZone"));

    m_timeZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("File"))
  {
    m_file = jsonValue.GetString("File");

    m_fileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileFingerprintLines"))
  {
    m_fileFingerprintLines = jsonValue.GetString("FileFingerprintLines");

    m_fileFingerprintLinesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultiLineStartPattern"))
  {
    m_multiLineStartPattern = jsonValue.GetString("MultiLineStartPattern");

    m_multiLineStartPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitialPosition"))
  {
    m_initialPosition = CloudWatchLogsInitialPositionMapper::GetCloudWatchLogsInitialPositionForName(jsonValue.GetString("InitialPosition"));

    m_initialPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encoding"))
  {
    m_encoding = CloudWatchLogsEncodingMapper::GetCloudWatchLogsEncodingForName(jsonValue.GetString("Encoding"));

    m_encodingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BufferDuration"))
  {
    m_bufferDuration = jsonValue.GetInteger("BufferDuration");

    m_bufferDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BatchCount"))
  {
    m_batchCount = jsonValue.GetInteger("BatchCount");

    m_batchCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BatchSize"))
  {
    m_batchSize = jsonValue.GetInteger("BatchSize");

    m_batchSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogsLogStream::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("LogGroupName", m_logGroupName);

  }

  if(m_datetimeFormatHasBeenSet)
  {
   payload.WithString("DatetimeFormat", m_datetimeFormat);

  }

  if(m_timeZoneHasBeenSet)
  {
   payload.WithString("TimeZone", CloudWatchLogsTimeZoneMapper::GetNameForCloudWatchLogsTimeZone(m_timeZone));
  }

  if(m_fileHasBeenSet)
  {
   payload.WithString("File", m_file);

  }

  if(m_fileFingerprintLinesHasBeenSet)
  {
   payload.WithString("FileFingerprintLines", m_fileFingerprintLines);

  }

  if(m_multiLineStartPatternHasBeenSet)
  {
   payload.WithString("MultiLineStartPattern", m_multiLineStartPattern);

  }

  if(m_initialPositionHasBeenSet)
  {
   payload.WithString("InitialPosition", CloudWatchLogsInitialPositionMapper::GetNameForCloudWatchLogsInitialPosition(m_initialPosition));
  }

  if(m_encodingHasBeenSet)
  {
   payload.WithString("Encoding", CloudWatchLogsEncodingMapper::GetNameForCloudWatchLogsEncoding(m_encoding));
  }

  if(m_bufferDurationHasBeenSet)
  {
   payload.WithInteger("BufferDuration", m_bufferDuration);

  }

  if(m_batchCountHasBeenSet)
  {
   payload.WithInteger("BatchCount", m_batchCount);

  }

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("BatchSize", m_batchSize);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws