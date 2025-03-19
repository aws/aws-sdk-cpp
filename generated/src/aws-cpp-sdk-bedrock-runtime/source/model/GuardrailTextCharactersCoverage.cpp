/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailTextCharactersCoverage.h>
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

GuardrailTextCharactersCoverage::GuardrailTextCharactersCoverage(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailTextCharactersCoverage& GuardrailTextCharactersCoverage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("guarded"))
  {
    m_guarded = jsonValue.GetInteger("guarded");
    m_guardedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetInteger("total");
    m_totalHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailTextCharactersCoverage::Jsonize() const
{
  JsonValue payload;

  if(m_guardedHasBeenSet)
  {
   payload.WithInteger("guarded", m_guarded);

  }

  if(m_totalHasBeenSet)
  {
   payload.WithInteger("total", m_total);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
