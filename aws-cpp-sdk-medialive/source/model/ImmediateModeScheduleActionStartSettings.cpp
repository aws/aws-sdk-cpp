/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ImmediateModeScheduleActionStartSettings.h>
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

ImmediateModeScheduleActionStartSettings::ImmediateModeScheduleActionStartSettings()
{
}

ImmediateModeScheduleActionStartSettings::ImmediateModeScheduleActionStartSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

ImmediateModeScheduleActionStartSettings& ImmediateModeScheduleActionStartSettings::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue ImmediateModeScheduleActionStartSettings::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
