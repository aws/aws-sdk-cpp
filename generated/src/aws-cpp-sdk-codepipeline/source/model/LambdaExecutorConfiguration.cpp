/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/LambdaExecutorConfiguration.h>
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

LambdaExecutorConfiguration::LambdaExecutorConfiguration() : 
    m_lambdaFunctionArnHasBeenSet(false)
{
}

LambdaExecutorConfiguration::LambdaExecutorConfiguration(JsonView jsonValue) : 
    m_lambdaFunctionArnHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaExecutorConfiguration& LambdaExecutorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambdaFunctionArn"))
  {
    m_lambdaFunctionArn = jsonValue.GetString("lambdaFunctionArn");

    m_lambdaFunctionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaExecutorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaFunctionArnHasBeenSet)
  {
   payload.WithString("lambdaFunctionArn", m_lambdaFunctionArn);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
