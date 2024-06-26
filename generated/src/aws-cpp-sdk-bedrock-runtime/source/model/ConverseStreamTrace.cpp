/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ConverseStreamTrace.h>
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

ConverseStreamTrace::ConverseStreamTrace() : 
    m_guardrailHasBeenSet(false)
{
}

ConverseStreamTrace::ConverseStreamTrace(JsonView jsonValue)
  : ConverseStreamTrace()
{
  *this = jsonValue;
}

ConverseStreamTrace& ConverseStreamTrace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("guardrail"))
  {
    m_guardrail = jsonValue.GetObject("guardrail");

    m_guardrailHasBeenSet = true;
  }

  return *this;
}

JsonValue ConverseStreamTrace::Jsonize() const
{
  JsonValue payload;

  if(m_guardrailHasBeenSet)
  {
   payload.WithObject("guardrail", m_guardrail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
