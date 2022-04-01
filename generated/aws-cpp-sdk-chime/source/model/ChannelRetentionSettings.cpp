/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ChannelRetentionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

ChannelRetentionSettings::ChannelRetentionSettings() : 
    m_retentionDays(0),
    m_retentionDaysHasBeenSet(false)
{
}

ChannelRetentionSettings::ChannelRetentionSettings(JsonView jsonValue) : 
    m_retentionDays(0),
    m_retentionDaysHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelRetentionSettings& ChannelRetentionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RetentionDays"))
  {
    m_retentionDays = jsonValue.GetInteger("RetentionDays");

    m_retentionDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelRetentionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_retentionDaysHasBeenSet)
  {
   payload.WithInteger("RetentionDays", m_retentionDays);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
