/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CodeHookSpecification.h>
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

CodeHookSpecification::CodeHookSpecification() : 
    m_lambdaCodeHookHasBeenSet(false)
{
}

CodeHookSpecification::CodeHookSpecification(JsonView jsonValue) : 
    m_lambdaCodeHookHasBeenSet(false)
{
  *this = jsonValue;
}

CodeHookSpecification& CodeHookSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambdaCodeHook"))
  {
    m_lambdaCodeHook = jsonValue.GetObject("lambdaCodeHook");

    m_lambdaCodeHookHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeHookSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaCodeHookHasBeenSet)
  {
   payload.WithObject("lambdaCodeHook", m_lambdaCodeHook.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
