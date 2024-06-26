﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailContentFilterConfig.h>
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

GuardrailContentFilterConfig::GuardrailContentFilterConfig() : 
    m_type(GuardrailContentFilterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_inputStrength(GuardrailFilterStrength::NOT_SET),
    m_inputStrengthHasBeenSet(false),
    m_outputStrength(GuardrailFilterStrength::NOT_SET),
    m_outputStrengthHasBeenSet(false)
{
}

GuardrailContentFilterConfig::GuardrailContentFilterConfig(JsonView jsonValue)
  : GuardrailContentFilterConfig()
{
  *this = jsonValue;
}

GuardrailContentFilterConfig& GuardrailContentFilterConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailContentFilterTypeMapper::GetGuardrailContentFilterTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputStrength"))
  {
    m_inputStrength = GuardrailFilterStrengthMapper::GetGuardrailFilterStrengthForName(jsonValue.GetString("inputStrength"));

    m_inputStrengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputStrength"))
  {
    m_outputStrength = GuardrailFilterStrengthMapper::GetGuardrailFilterStrengthForName(jsonValue.GetString("outputStrength"));

    m_outputStrengthHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailContentFilterConfig::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailContentFilterTypeMapper::GetNameForGuardrailContentFilterType(m_type));
  }

  if(m_inputStrengthHasBeenSet)
  {
   payload.WithString("inputStrength", GuardrailFilterStrengthMapper::GetNameForGuardrailFilterStrength(m_inputStrength));
  }

  if(m_outputStrengthHasBeenSet)
  {
   payload.WithString("outputStrength", GuardrailFilterStrengthMapper::GetNameForGuardrailFilterStrength(m_outputStrength));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
