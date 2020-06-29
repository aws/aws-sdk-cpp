/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsInputSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

HlsInputSettings::HlsInputSettings() : 
    m_bandwidth(0),
    m_bandwidthHasBeenSet(false),
    m_bufferSegments(0),
    m_bufferSegmentsHasBeenSet(false),
    m_retries(0),
    m_retriesHasBeenSet(false),
    m_retryInterval(0),
    m_retryIntervalHasBeenSet(false)
{
}

HlsInputSettings::HlsInputSettings(JsonView jsonValue) : 
    m_bandwidth(0),
    m_bandwidthHasBeenSet(false),
    m_bufferSegments(0),
    m_bufferSegmentsHasBeenSet(false),
    m_retries(0),
    m_retriesHasBeenSet(false),
    m_retryInterval(0),
    m_retryIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

HlsInputSettings& HlsInputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bandwidth"))
  {
    m_bandwidth = jsonValue.GetInteger("bandwidth");

    m_bandwidthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bufferSegments"))
  {
    m_bufferSegments = jsonValue.GetInteger("bufferSegments");

    m_bufferSegmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retries"))
  {
    m_retries = jsonValue.GetInteger("retries");

    m_retriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retryInterval"))
  {
    m_retryInterval = jsonValue.GetInteger("retryInterval");

    m_retryIntervalHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsInputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_bandwidthHasBeenSet)
  {
   payload.WithInteger("bandwidth", m_bandwidth);

  }

  if(m_bufferSegmentsHasBeenSet)
  {
   payload.WithInteger("bufferSegments", m_bufferSegments);

  }

  if(m_retriesHasBeenSet)
  {
   payload.WithInteger("retries", m_retries);

  }

  if(m_retryIntervalHasBeenSet)
  {
   payload.WithInteger("retryInterval", m_retryInterval);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
