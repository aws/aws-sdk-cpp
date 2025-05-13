/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailCrossRegionConfig.h>
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

GuardrailCrossRegionConfig::GuardrailCrossRegionConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailCrossRegionConfig& GuardrailCrossRegionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("guardrailProfileIdentifier"))
  {
    m_guardrailProfileIdentifier = jsonValue.GetString("guardrailProfileIdentifier");
    m_guardrailProfileIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailCrossRegionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_guardrailProfileIdentifierHasBeenSet)
  {
   payload.WithString("guardrailProfileIdentifier", m_guardrailProfileIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
