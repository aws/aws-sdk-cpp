/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ElicitationCodeHookInvocationSetting.h>
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

ElicitationCodeHookInvocationSetting::ElicitationCodeHookInvocationSetting() : 
    m_enableCodeHookInvocation(false),
    m_enableCodeHookInvocationHasBeenSet(false),
    m_invocationLabelHasBeenSet(false)
{
}

ElicitationCodeHookInvocationSetting::ElicitationCodeHookInvocationSetting(JsonView jsonValue) : 
    m_enableCodeHookInvocation(false),
    m_enableCodeHookInvocationHasBeenSet(false),
    m_invocationLabelHasBeenSet(false)
{
  *this = jsonValue;
}

ElicitationCodeHookInvocationSetting& ElicitationCodeHookInvocationSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enableCodeHookInvocation"))
  {
    m_enableCodeHookInvocation = jsonValue.GetBool("enableCodeHookInvocation");

    m_enableCodeHookInvocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invocationLabel"))
  {
    m_invocationLabel = jsonValue.GetString("invocationLabel");

    m_invocationLabelHasBeenSet = true;
  }

  return *this;
}

JsonValue ElicitationCodeHookInvocationSetting::Jsonize() const
{
  JsonValue payload;

  if(m_enableCodeHookInvocationHasBeenSet)
  {
   payload.WithBool("enableCodeHookInvocation", m_enableCodeHookInvocation);

  }

  if(m_invocationLabelHasBeenSet)
  {
   payload.WithString("invocationLabel", m_invocationLabel);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
