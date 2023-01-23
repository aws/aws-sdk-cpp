/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TimeoutConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

TimeoutConfig::TimeoutConfig() : 
    m_inProgressTimeoutInMinutes(0),
    m_inProgressTimeoutInMinutesHasBeenSet(false)
{
}

TimeoutConfig::TimeoutConfig(JsonView jsonValue) : 
    m_inProgressTimeoutInMinutes(0),
    m_inProgressTimeoutInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

TimeoutConfig& TimeoutConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inProgressTimeoutInMinutes"))
  {
    m_inProgressTimeoutInMinutes = jsonValue.GetInt64("inProgressTimeoutInMinutes");

    m_inProgressTimeoutInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeoutConfig::Jsonize() const
{
  JsonValue payload;

  if(m_inProgressTimeoutInMinutesHasBeenSet)
  {
   payload.WithInt64("inProgressTimeoutInMinutes", m_inProgressTimeoutInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
