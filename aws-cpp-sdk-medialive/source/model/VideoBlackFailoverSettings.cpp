/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/VideoBlackFailoverSettings.h>
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

VideoBlackFailoverSettings::VideoBlackFailoverSettings() : 
    m_blackDetectThreshold(0.0),
    m_blackDetectThresholdHasBeenSet(false),
    m_videoBlackThresholdMsec(0),
    m_videoBlackThresholdMsecHasBeenSet(false)
{
}

VideoBlackFailoverSettings::VideoBlackFailoverSettings(JsonView jsonValue) : 
    m_blackDetectThreshold(0.0),
    m_blackDetectThresholdHasBeenSet(false),
    m_videoBlackThresholdMsec(0),
    m_videoBlackThresholdMsecHasBeenSet(false)
{
  *this = jsonValue;
}

VideoBlackFailoverSettings& VideoBlackFailoverSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blackDetectThreshold"))
  {
    m_blackDetectThreshold = jsonValue.GetDouble("blackDetectThreshold");

    m_blackDetectThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoBlackThresholdMsec"))
  {
    m_videoBlackThresholdMsec = jsonValue.GetInteger("videoBlackThresholdMsec");

    m_videoBlackThresholdMsecHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoBlackFailoverSettings::Jsonize() const
{
  JsonValue payload;

  if(m_blackDetectThresholdHasBeenSet)
  {
   payload.WithDouble("blackDetectThreshold", m_blackDetectThreshold);

  }

  if(m_videoBlackThresholdMsecHasBeenSet)
  {
   payload.WithInteger("videoBlackThresholdMsec", m_videoBlackThresholdMsec);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
