/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/LambdaDataSourceConfig.h>
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

LambdaDataSourceConfig::LambdaDataSourceConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

LambdaDataSourceConfig& LambdaDataSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambdaFunctionArn"))
  {
    m_lambdaFunctionArn = jsonValue.GetString("lambdaFunctionArn");
    m_lambdaFunctionArnHasBeenSet = true;
  }
  return *this;
}

JsonValue LambdaDataSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaFunctionArnHasBeenSet)
  {
   payload.WithString("lambdaFunctionArn", m_lambdaFunctionArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
