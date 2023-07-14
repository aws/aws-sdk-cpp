/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/AudioFeatures.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

AudioFeatures::AudioFeatures() : 
    m_echoReduction(MeetingFeatureStatus::NOT_SET),
    m_echoReductionHasBeenSet(false)
{
}

AudioFeatures::AudioFeatures(JsonView jsonValue) : 
    m_echoReduction(MeetingFeatureStatus::NOT_SET),
    m_echoReductionHasBeenSet(false)
{
  *this = jsonValue;
}

AudioFeatures& AudioFeatures::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EchoReduction"))
  {
    m_echoReduction = MeetingFeatureStatusMapper::GetMeetingFeatureStatusForName(jsonValue.GetString("EchoReduction"));

    m_echoReductionHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioFeatures::Jsonize() const
{
  JsonValue payload;

  if(m_echoReductionHasBeenSet)
  {
   payload.WithString("EchoReduction", MeetingFeatureStatusMapper::GetNameForMeetingFeatureStatus(m_echoReduction));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
