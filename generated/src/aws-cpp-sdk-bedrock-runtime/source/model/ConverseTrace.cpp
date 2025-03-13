/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ConverseTrace.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

ConverseTrace::ConverseTrace(JsonView jsonValue)
{
  *this = jsonValue;
}

ConverseTrace& ConverseTrace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("guardrail"))
  {
    m_guardrail = jsonValue.GetObject("guardrail");
    m_guardrailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("promptRouter"))
  {
    m_promptRouter = jsonValue.GetObject("promptRouter");
    m_promptRouterHasBeenSet = true;
  }
  return *this;
}

JsonValue ConverseTrace::Jsonize() const
{
  JsonValue payload;

  if(m_guardrailHasBeenSet)
  {
   payload.WithObject("guardrail", m_guardrail.Jsonize());

  }

  if(m_promptRouterHasBeenSet)
  {
   payload.WithObject("promptRouter", m_promptRouter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
