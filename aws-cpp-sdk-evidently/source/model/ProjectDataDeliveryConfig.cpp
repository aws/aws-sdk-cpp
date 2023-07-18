/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ProjectDataDeliveryConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

ProjectDataDeliveryConfig::ProjectDataDeliveryConfig() : 
    m_cloudWatchLogsHasBeenSet(false),
    m_s3DestinationHasBeenSet(false)
{
}

ProjectDataDeliveryConfig::ProjectDataDeliveryConfig(JsonView jsonValue) : 
    m_cloudWatchLogsHasBeenSet(false),
    m_s3DestinationHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectDataDeliveryConfig& ProjectDataDeliveryConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudWatchLogs"))
  {
    m_cloudWatchLogs = jsonValue.GetObject("cloudWatchLogs");

    m_cloudWatchLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Destination"))
  {
    m_s3Destination = jsonValue.GetObject("s3Destination");

    m_s3DestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectDataDeliveryConfig::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsHasBeenSet)
  {
   payload.WithObject("cloudWatchLogs", m_cloudWatchLogs.Jsonize());

  }

  if(m_s3DestinationHasBeenSet)
  {
   payload.WithObject("s3Destination", m_s3Destination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
