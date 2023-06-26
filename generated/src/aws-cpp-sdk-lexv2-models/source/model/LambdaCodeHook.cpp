/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/LambdaCodeHook.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

LambdaCodeHook::LambdaCodeHook() : 
    m_lambdaARNHasBeenSet(false),
    m_codeHookInterfaceVersionHasBeenSet(false)
{
}

LambdaCodeHook::LambdaCodeHook(JsonView jsonValue) : 
    m_lambdaARNHasBeenSet(false),
    m_codeHookInterfaceVersionHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaCodeHook& LambdaCodeHook::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambdaARN"))
  {
    m_lambdaARN = jsonValue.GetString("lambdaARN");

    m_lambdaARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codeHookInterfaceVersion"))
  {
    m_codeHookInterfaceVersion = jsonValue.GetString("codeHookInterfaceVersion");

    m_codeHookInterfaceVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaCodeHook::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaARNHasBeenSet)
  {
   payload.WithString("lambdaARN", m_lambdaARN);

  }

  if(m_codeHookInterfaceVersionHasBeenSet)
  {
   payload.WithString("codeHookInterfaceVersion", m_codeHookInterfaceVersion);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
