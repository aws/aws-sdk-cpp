/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyAddVariableMutation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

AutomatedReasoningPolicyAddVariableMutation::AutomatedReasoningPolicyAddVariableMutation(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyAddVariableMutation& AutomatedReasoningPolicyAddVariableMutation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("variable"))
  {
    m_variable = jsonValue.GetObject("variable");
    m_variableHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyAddVariableMutation::Jsonize() const
{
  JsonValue payload;

  if(m_variableHasBeenSet)
  {
   payload.WithObject("variable", m_variable.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
