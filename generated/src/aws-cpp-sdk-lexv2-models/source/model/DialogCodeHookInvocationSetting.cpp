/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DialogCodeHookInvocationSetting.h>
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

DialogCodeHookInvocationSetting::DialogCodeHookInvocationSetting() : 
    m_enableCodeHookInvocation(false),
    m_enableCodeHookInvocationHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_invocationLabelHasBeenSet(false),
    m_postCodeHookSpecificationHasBeenSet(false)
{
}

DialogCodeHookInvocationSetting::DialogCodeHookInvocationSetting(JsonView jsonValue) : 
    m_enableCodeHookInvocation(false),
    m_enableCodeHookInvocationHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_invocationLabelHasBeenSet(false),
    m_postCodeHookSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

DialogCodeHookInvocationSetting& DialogCodeHookInvocationSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enableCodeHookInvocation"))
  {
    m_enableCodeHookInvocation = jsonValue.GetBool("enableCodeHookInvocation");

    m_enableCodeHookInvocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invocationLabel"))
  {
    m_invocationLabel = jsonValue.GetString("invocationLabel");

    m_invocationLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postCodeHookSpecification"))
  {
    m_postCodeHookSpecification = jsonValue.GetObject("postCodeHookSpecification");

    m_postCodeHookSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue DialogCodeHookInvocationSetting::Jsonize() const
{
  JsonValue payload;

  if(m_enableCodeHookInvocationHasBeenSet)
  {
   payload.WithBool("enableCodeHookInvocation", m_enableCodeHookInvocation);

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  if(m_invocationLabelHasBeenSet)
  {
   payload.WithString("invocationLabel", m_invocationLabel);

  }

  if(m_postCodeHookSpecificationHasBeenSet)
  {
   payload.WithObject("postCodeHookSpecification", m_postCodeHookSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
