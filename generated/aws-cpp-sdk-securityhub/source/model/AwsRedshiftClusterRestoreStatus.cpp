/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterRestoreStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRedshiftClusterRestoreStatus::AwsRedshiftClusterRestoreStatus() : 
    m_currentRestoreRateInMegaBytesPerSecond(0.0),
    m_currentRestoreRateInMegaBytesPerSecondHasBeenSet(false),
    m_elapsedTimeInSeconds(0),
    m_elapsedTimeInSecondsHasBeenSet(false),
    m_estimatedTimeToCompletionInSeconds(0),
    m_estimatedTimeToCompletionInSecondsHasBeenSet(false),
    m_progressInMegaBytes(0),
    m_progressInMegaBytesHasBeenSet(false),
    m_snapshotSizeInMegaBytes(0),
    m_snapshotSizeInMegaBytesHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsRedshiftClusterRestoreStatus::AwsRedshiftClusterRestoreStatus(JsonView jsonValue) : 
    m_currentRestoreRateInMegaBytesPerSecond(0.0),
    m_currentRestoreRateInMegaBytesPerSecondHasBeenSet(false),
    m_elapsedTimeInSeconds(0),
    m_elapsedTimeInSecondsHasBeenSet(false),
    m_estimatedTimeToCompletionInSeconds(0),
    m_estimatedTimeToCompletionInSecondsHasBeenSet(false),
    m_progressInMegaBytes(0),
    m_progressInMegaBytesHasBeenSet(false),
    m_snapshotSizeInMegaBytes(0),
    m_snapshotSizeInMegaBytesHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterRestoreStatus& AwsRedshiftClusterRestoreStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CurrentRestoreRateInMegaBytesPerSecond"))
  {
    m_currentRestoreRateInMegaBytesPerSecond = jsonValue.GetDouble("CurrentRestoreRateInMegaBytesPerSecond");

    m_currentRestoreRateInMegaBytesPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElapsedTimeInSeconds"))
  {
    m_elapsedTimeInSeconds = jsonValue.GetInt64("ElapsedTimeInSeconds");

    m_elapsedTimeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedTimeToCompletionInSeconds"))
  {
    m_estimatedTimeToCompletionInSeconds = jsonValue.GetInt64("EstimatedTimeToCompletionInSeconds");

    m_estimatedTimeToCompletionInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProgressInMegaBytes"))
  {
    m_progressInMegaBytes = jsonValue.GetInt64("ProgressInMegaBytes");

    m_progressInMegaBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotSizeInMegaBytes"))
  {
    m_snapshotSizeInMegaBytes = jsonValue.GetInt64("SnapshotSizeInMegaBytes");

    m_snapshotSizeInMegaBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterRestoreStatus::Jsonize() const
{
  JsonValue payload;

  if(m_currentRestoreRateInMegaBytesPerSecondHasBeenSet)
  {
   payload.WithDouble("CurrentRestoreRateInMegaBytesPerSecond", m_currentRestoreRateInMegaBytesPerSecond);

  }

  if(m_elapsedTimeInSecondsHasBeenSet)
  {
   payload.WithInt64("ElapsedTimeInSeconds", m_elapsedTimeInSeconds);

  }

  if(m_estimatedTimeToCompletionInSecondsHasBeenSet)
  {
   payload.WithInt64("EstimatedTimeToCompletionInSeconds", m_estimatedTimeToCompletionInSeconds);

  }

  if(m_progressInMegaBytesHasBeenSet)
  {
   payload.WithInt64("ProgressInMegaBytes", m_progressInMegaBytes);

  }

  if(m_snapshotSizeInMegaBytesHasBeenSet)
  {
   payload.WithInt64("SnapshotSizeInMegaBytes", m_snapshotSizeInMegaBytes);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
