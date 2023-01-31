/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/IngestionStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

IngestionStatus::IngestionStatus() : 
    m_latestIngestionSuccessTimeHasBeenSet(false),
    m_latestIngestionSuccessEventIDHasBeenSet(false),
    m_latestIngestionErrorCodeHasBeenSet(false),
    m_latestIngestionAttemptTimeHasBeenSet(false),
    m_latestIngestionAttemptEventIDHasBeenSet(false)
{
}

IngestionStatus::IngestionStatus(JsonView jsonValue) : 
    m_latestIngestionSuccessTimeHasBeenSet(false),
    m_latestIngestionSuccessEventIDHasBeenSet(false),
    m_latestIngestionErrorCodeHasBeenSet(false),
    m_latestIngestionAttemptTimeHasBeenSet(false),
    m_latestIngestionAttemptEventIDHasBeenSet(false)
{
  *this = jsonValue;
}

IngestionStatus& IngestionStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LatestIngestionSuccessTime"))
  {
    m_latestIngestionSuccessTime = jsonValue.GetDouble("LatestIngestionSuccessTime");

    m_latestIngestionSuccessTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestIngestionSuccessEventID"))
  {
    m_latestIngestionSuccessEventID = jsonValue.GetString("LatestIngestionSuccessEventID");

    m_latestIngestionSuccessEventIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestIngestionErrorCode"))
  {
    m_latestIngestionErrorCode = jsonValue.GetString("LatestIngestionErrorCode");

    m_latestIngestionErrorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestIngestionAttemptTime"))
  {
    m_latestIngestionAttemptTime = jsonValue.GetDouble("LatestIngestionAttemptTime");

    m_latestIngestionAttemptTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestIngestionAttemptEventID"))
  {
    m_latestIngestionAttemptEventID = jsonValue.GetString("LatestIngestionAttemptEventID");

    m_latestIngestionAttemptEventIDHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestionStatus::Jsonize() const
{
  JsonValue payload;

  if(m_latestIngestionSuccessTimeHasBeenSet)
  {
   payload.WithDouble("LatestIngestionSuccessTime", m_latestIngestionSuccessTime.SecondsWithMSPrecision());
  }

  if(m_latestIngestionSuccessEventIDHasBeenSet)
  {
   payload.WithString("LatestIngestionSuccessEventID", m_latestIngestionSuccessEventID);

  }

  if(m_latestIngestionErrorCodeHasBeenSet)
  {
   payload.WithString("LatestIngestionErrorCode", m_latestIngestionErrorCode);

  }

  if(m_latestIngestionAttemptTimeHasBeenSet)
  {
   payload.WithDouble("LatestIngestionAttemptTime", m_latestIngestionAttemptTime.SecondsWithMSPrecision());
  }

  if(m_latestIngestionAttemptEventIDHasBeenSet)
  {
   payload.WithString("LatestIngestionAttemptEventID", m_latestIngestionAttemptEventID);

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
