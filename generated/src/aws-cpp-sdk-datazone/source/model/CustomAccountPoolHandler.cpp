/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CustomAccountPoolHandler.h>
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

CustomAccountPoolHandler::CustomAccountPoolHandler(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomAccountPoolHandler& CustomAccountPoolHandler::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambdaExecutionRoleArn"))
  {
    m_lambdaExecutionRoleArn = jsonValue.GetString("lambdaExecutionRoleArn");
    m_lambdaExecutionRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lambdaFunctionArn"))
  {
    m_lambdaFunctionArn = jsonValue.GetString("lambdaFunctionArn");
    m_lambdaFunctionArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomAccountPoolHandler::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaExecutionRoleArnHasBeenSet)
  {
   payload.WithString("lambdaExecutionRoleArn", m_lambdaExecutionRoleArn);

  }

  if(m_lambdaFunctionArnHasBeenSet)
  {
   payload.WithString("lambdaFunctionArn", m_lambdaFunctionArn);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
