/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/RecommendationReportDetails.h>
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

RecommendationReportDetails::RecommendationReportDetails() : 
    m_completionTimeHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3KeysHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(RecommendationReportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

RecommendationReportDetails::RecommendationReportDetails(JsonView jsonValue) : 
    m_completionTimeHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3KeysHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(RecommendationReportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationReportDetails& RecommendationReportDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetDouble("completionTime");

    m_completionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Keys"))
  {
    Aws::Utils::Array<JsonView> s3KeysJsonList = jsonValue.GetArray("s3Keys");
    for(unsigned s3KeysIndex = 0; s3KeysIndex < s3KeysJsonList.GetLength(); ++s3KeysIndex)
    {
      m_s3Keys.push_back(s3KeysJsonList[s3KeysIndex].AsString());
    }
    m_s3KeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RecommendationReportStatusMapper::GetRecommendationReportStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationReportDetails::Jsonize() const
{
  JsonValue payload;

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("completionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("s3Bucket", m_s3Bucket);

  }

  if(m_s3KeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3KeysJsonList(m_s3Keys.size());
   for(unsigned s3KeysIndex = 0; s3KeysIndex < s3KeysJsonList.GetLength(); ++s3KeysIndex)
   {
     s3KeysJsonList[s3KeysIndex].AsString(m_s3Keys[s3KeysIndex]);
   }
   payload.WithArray("s3Keys", std::move(s3KeysJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RecommendationReportStatusMapper::GetNameForRecommendationReportStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
