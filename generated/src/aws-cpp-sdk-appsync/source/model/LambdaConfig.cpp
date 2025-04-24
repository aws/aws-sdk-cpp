/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/LambdaConfig.h>
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

LambdaConfig::LambdaConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

LambdaConfig& LambdaConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invokeType"))
  {
    m_invokeType = InvokeTypeMapper::GetInvokeTypeForName(jsonValue.GetString("invokeType"));
    m_invokeTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue LambdaConfig::Jsonize() const
{
  JsonValue payload;

  if(m_invokeTypeHasBeenSet)
  {
   payload.WithString("invokeType", InvokeTypeMapper::GetNameForInvokeType(m_invokeType));
  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
