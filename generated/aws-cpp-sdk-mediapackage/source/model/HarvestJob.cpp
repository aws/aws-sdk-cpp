/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/HarvestJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

HarvestJob::HarvestJob() : 
    m_arnHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_originEndpointIdHasBeenSet(false),
    m_s3DestinationHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false)
{
}

HarvestJob::HarvestJob(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_originEndpointIdHasBeenSet(false),
    m_s3DestinationHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

HarvestJob& HarvestJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");

    m_channelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("originEndpointId"))
  {
    m_originEndpointId = jsonValue.GetString("originEndpointId");

    m_originEndpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Destination"))
  {
    m_s3Destination = jsonValue.GetObject("s3Destination");

    m_s3DestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue HarvestJob::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("channelId", m_channelId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_originEndpointIdHasBeenSet)
  {
   payload.WithString("originEndpointId", m_originEndpointId);

  }

  if(m_s3DestinationHasBeenSet)
  {
   payload.WithObject("s3Destination", m_s3Destination.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
