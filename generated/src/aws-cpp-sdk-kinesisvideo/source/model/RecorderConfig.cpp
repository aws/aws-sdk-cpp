/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/RecorderConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

RecorderConfig::RecorderConfig() : 
    m_mediaSourceConfigHasBeenSet(false),
    m_scheduleConfigHasBeenSet(false)
{
}

RecorderConfig::RecorderConfig(JsonView jsonValue) : 
    m_mediaSourceConfigHasBeenSet(false),
    m_scheduleConfigHasBeenSet(false)
{
  *this = jsonValue;
}

RecorderConfig& RecorderConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaSourceConfig"))
  {
    m_mediaSourceConfig = jsonValue.GetObject("MediaSourceConfig");

    m_mediaSourceConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleConfig"))
  {
    m_scheduleConfig = jsonValue.GetObject("ScheduleConfig");

    m_scheduleConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue RecorderConfig::Jsonize() const
{
  JsonValue payload;

  if(m_mediaSourceConfigHasBeenSet)
  {
   payload.WithObject("MediaSourceConfig", m_mediaSourceConfig.Jsonize());

  }

  if(m_scheduleConfigHasBeenSet)
  {
   payload.WithObject("ScheduleConfig", m_scheduleConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
