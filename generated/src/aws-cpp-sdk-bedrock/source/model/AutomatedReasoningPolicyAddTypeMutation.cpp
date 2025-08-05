/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyAddTypeMutation.h>
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

AutomatedReasoningPolicyAddTypeMutation::AutomatedReasoningPolicyAddTypeMutation(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyAddTypeMutation& AutomatedReasoningPolicyAddTypeMutation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetObject("type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyAddTypeMutation::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithObject("type", m_type.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
