/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ExecutorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ExecutorConfiguration::ExecutorConfiguration() : 
    m_lambdaExecutorConfigurationHasBeenSet(false),
    m_jobWorkerExecutorConfigurationHasBeenSet(false)
{
}

ExecutorConfiguration::ExecutorConfiguration(JsonView jsonValue) : 
    m_lambdaExecutorConfigurationHasBeenSet(false),
    m_jobWorkerExecutorConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutorConfiguration& ExecutorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambdaExecutorConfiguration"))
  {
    m_lambdaExecutorConfiguration = jsonValue.GetObject("lambdaExecutorConfiguration");

    m_lambdaExecutorConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobWorkerExecutorConfiguration"))
  {
    m_jobWorkerExecutorConfiguration = jsonValue.GetObject("jobWorkerExecutorConfiguration");

    m_jobWorkerExecutorConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaExecutorConfigurationHasBeenSet)
  {
   payload.WithObject("lambdaExecutorConfiguration", m_lambdaExecutorConfiguration.Jsonize());

  }

  if(m_jobWorkerExecutorConfigurationHasBeenSet)
  {
   payload.WithObject("jobWorkerExecutorConfiguration", m_jobWorkerExecutorConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
