/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SparkGluePropertiesInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SparkGluePropertiesInput::SparkGluePropertiesInput(JsonView jsonValue)
{
  *this = jsonValue;
}

SparkGluePropertiesInput& SparkGluePropertiesInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("additionalArgs"))
  {
    m_additionalArgs = jsonValue.GetObject("additionalArgs");
    m_additionalArgsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("glueConnectionName"))
  {
    m_glueConnectionName = jsonValue.GetString("glueConnectionName");
    m_glueConnectionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("glueVersion"))
  {
    m_glueVersion = jsonValue.GetString("glueVersion");
    m_glueVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idleTimeout"))
  {
    m_idleTimeout = jsonValue.GetInteger("idleTimeout");
    m_idleTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("javaVirtualEnv"))
  {
    m_javaVirtualEnv = jsonValue.GetString("javaVirtualEnv");
    m_javaVirtualEnvHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfWorkers"))
  {
    m_numberOfWorkers = jsonValue.GetInteger("numberOfWorkers");
    m_numberOfWorkersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pythonVirtualEnv"))
  {
    m_pythonVirtualEnv = jsonValue.GetString("pythonVirtualEnv");
    m_pythonVirtualEnvHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workerType"))
  {
    m_workerType = jsonValue.GetString("workerType");
    m_workerTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SparkGluePropertiesInput::Jsonize() const
{
  JsonValue payload;

  if(m_additionalArgsHasBeenSet)
  {
   payload.WithObject("additionalArgs", m_additionalArgs.Jsonize());

  }

  if(m_glueConnectionNameHasBeenSet)
  {
   payload.WithString("glueConnectionName", m_glueConnectionName);

  }

  if(m_glueVersionHasBeenSet)
  {
   payload.WithString("glueVersion", m_glueVersion);

  }

  if(m_idleTimeoutHasBeenSet)
  {
   payload.WithInteger("idleTimeout", m_idleTimeout);

  }

  if(m_javaVirtualEnvHasBeenSet)
  {
   payload.WithString("javaVirtualEnv", m_javaVirtualEnv);

  }

  if(m_numberOfWorkersHasBeenSet)
  {
   payload.WithInteger("numberOfWorkers", m_numberOfWorkers);

  }

  if(m_pythonVirtualEnvHasBeenSet)
  {
   payload.WithString("pythonVirtualEnv", m_pythonVirtualEnv);

  }

  if(m_workerTypeHasBeenSet)
  {
   payload.WithString("workerType", m_workerType);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
