/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MotionGraphicsDeactivateScheduleActionSettings.h>
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

MotionGraphicsDeactivateScheduleActionSettings::MotionGraphicsDeactivateScheduleActionSettings()
{
}

MotionGraphicsDeactivateScheduleActionSettings::MotionGraphicsDeactivateScheduleActionSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MotionGraphicsDeactivateScheduleActionSettings& MotionGraphicsDeactivateScheduleActionSettings::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue MotionGraphicsDeactivateScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
