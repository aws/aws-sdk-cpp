/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/LambdaConflictHandlerConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

LambdaConflictHandlerConfig::LambdaConflictHandlerConfig() : 
    m_lambdaConflictHandlerArnHasBeenSet(false)
{
}

LambdaConflictHandlerConfig::LambdaConflictHandlerConfig(JsonView jsonValue) : 
    m_lambdaConflictHandlerArnHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaConflictHandlerConfig& LambdaConflictHandlerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambdaConflictHandlerArn"))
  {
    m_lambdaConflictHandlerArn = jsonValue.GetString("lambdaConflictHandlerArn");

    m_lambdaConflictHandlerArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaConflictHandlerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaConflictHandlerArnHasBeenSet)
  {
   payload.WithString("lambdaConflictHandlerArn", m_lambdaConflictHandlerArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
