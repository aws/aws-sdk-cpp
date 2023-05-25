/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/UploaderConfig.h>
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

UploaderConfig::UploaderConfig() : 
    m_scheduleConfigHasBeenSet(false)
{
}

UploaderConfig::UploaderConfig(JsonView jsonValue) : 
    m_scheduleConfigHasBeenSet(false)
{
  *this = jsonValue;
}

UploaderConfig& UploaderConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduleConfig"))
  {
    m_scheduleConfig = jsonValue.GetObject("ScheduleConfig");

    m_scheduleConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue UploaderConfig::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleConfigHasBeenSet)
  {
   payload.WithObject("ScheduleConfig", m_scheduleConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
