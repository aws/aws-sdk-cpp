/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/ModuleLoggingConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MWAA
{
namespace Model
{

ModuleLoggingConfigurationInput::ModuleLoggingConfigurationInput() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_logLevel(LoggingLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
}

ModuleLoggingConfigurationInput::ModuleLoggingConfigurationInput(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_logLevel(LoggingLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
  *this = jsonValue;
}

ModuleLoggingConfigurationInput& ModuleLoggingConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogLevel"))
  {
    m_logLevel = LoggingLevelMapper::GetLoggingLevelForName(jsonValue.GetString("LogLevel"));

    m_logLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue ModuleLoggingConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("LogLevel", LoggingLevelMapper::GetNameForLoggingLevel(m_logLevel));
  }

  return payload;
}

} // namespace Model
} // namespace MWAA
} // namespace Aws
