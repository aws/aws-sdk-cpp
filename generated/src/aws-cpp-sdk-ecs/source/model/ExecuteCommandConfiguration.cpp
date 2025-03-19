/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ExecuteCommandConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ExecuteCommandConfiguration::ExecuteCommandConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ExecuteCommandConfiguration& ExecuteCommandConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logging"))
  {
    m_logging = ExecuteCommandLoggingMapper::GetExecuteCommandLoggingForName(jsonValue.GetString("logging"));
    m_loggingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("logConfiguration");
    m_logConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecuteCommandConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_loggingHasBeenSet)
  {
   payload.WithString("logging", ExecuteCommandLoggingMapper::GetNameForExecuteCommandLogging(m_logging));
  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("logConfiguration", m_logConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
