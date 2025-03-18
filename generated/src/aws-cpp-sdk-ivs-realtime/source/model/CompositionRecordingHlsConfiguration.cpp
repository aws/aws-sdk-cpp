/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/CompositionRecordingHlsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

CompositionRecordingHlsConfiguration::CompositionRecordingHlsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CompositionRecordingHlsConfiguration& CompositionRecordingHlsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetSegmentDurationSeconds"))
  {
    m_targetSegmentDurationSeconds = jsonValue.GetInteger("targetSegmentDurationSeconds");
    m_targetSegmentDurationSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue CompositionRecordingHlsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_targetSegmentDurationSecondsHasBeenSet)
  {
   payload.WithInteger("targetSegmentDurationSeconds", m_targetSegmentDurationSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
