/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/StopTimecode.h>
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

StopTimecode::StopTimecode() : 
    m_lastFrameClippingBehavior(LastFrameClippingBehavior::NOT_SET),
    m_lastFrameClippingBehaviorHasBeenSet(false),
    m_timecodeHasBeenSet(false)
{
}

StopTimecode::StopTimecode(JsonView jsonValue) : 
    m_lastFrameClippingBehavior(LastFrameClippingBehavior::NOT_SET),
    m_lastFrameClippingBehaviorHasBeenSet(false),
    m_timecodeHasBeenSet(false)
{
  *this = jsonValue;
}

StopTimecode& StopTimecode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastFrameClippingBehavior"))
  {
    m_lastFrameClippingBehavior = LastFrameClippingBehaviorMapper::GetLastFrameClippingBehaviorForName(jsonValue.GetString("lastFrameClippingBehavior"));

    m_lastFrameClippingBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecode"))
  {
    m_timecode = jsonValue.GetString("timecode");

    m_timecodeHasBeenSet = true;
  }

  return *this;
}

JsonValue StopTimecode::Jsonize() const
{
  JsonValue payload;

  if(m_lastFrameClippingBehaviorHasBeenSet)
  {
   payload.WithString("lastFrameClippingBehavior", LastFrameClippingBehaviorMapper::GetNameForLastFrameClippingBehavior(m_lastFrameClippingBehavior));
  }

  if(m_timecodeHasBeenSet)
  {
   payload.WithString("timecode", m_timecode);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
