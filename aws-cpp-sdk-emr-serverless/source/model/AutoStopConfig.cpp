/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/AutoStopConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

AutoStopConfig::AutoStopConfig() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_idleTimeoutMinutes(0),
    m_idleTimeoutMinutesHasBeenSet(false)
{
}

AutoStopConfig::AutoStopConfig(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_idleTimeoutMinutes(0),
    m_idleTimeoutMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

AutoStopConfig& AutoStopConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("idleTimeoutMinutes"))
  {
    m_idleTimeoutMinutes = jsonValue.GetInteger("idleTimeoutMinutes");

    m_idleTimeoutMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoStopConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_idleTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("idleTimeoutMinutes", m_idleTimeoutMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
