/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ServerProcess.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

ServerProcess::ServerProcess() : 
    m_launchPathHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_concurrentExecutions(0),
    m_concurrentExecutionsHasBeenSet(false)
{
}

ServerProcess::ServerProcess(JsonView jsonValue) : 
    m_launchPathHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_concurrentExecutions(0),
    m_concurrentExecutionsHasBeenSet(false)
{
  *this = jsonValue;
}

ServerProcess& ServerProcess::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LaunchPath"))
  {
    m_launchPath = jsonValue.GetString("LaunchPath");

    m_launchPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    m_parameters = jsonValue.GetString("Parameters");

    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConcurrentExecutions"))
  {
    m_concurrentExecutions = jsonValue.GetInteger("ConcurrentExecutions");

    m_concurrentExecutionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerProcess::Jsonize() const
{
  JsonValue payload;

  if(m_launchPathHasBeenSet)
  {
   payload.WithString("LaunchPath", m_launchPath);

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithString("Parameters", m_parameters);

  }

  if(m_concurrentExecutionsHasBeenSet)
  {
   payload.WithInteger("ConcurrentExecutions", m_concurrentExecutions);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
