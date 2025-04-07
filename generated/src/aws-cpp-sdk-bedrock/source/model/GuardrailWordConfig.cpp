/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailWordConfig.h>
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

GuardrailWordConfig::GuardrailWordConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailWordConfig& GuardrailWordConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputAction"))
  {
    m_inputAction = GuardrailWordActionMapper::GetGuardrailWordActionForName(jsonValue.GetString("inputAction"));
    m_inputActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputAction"))
  {
    m_outputAction = GuardrailWordActionMapper::GetGuardrailWordActionForName(jsonValue.GetString("outputAction"));
    m_outputActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputEnabled"))
  {
    m_inputEnabled = jsonValue.GetBool("inputEnabled");
    m_inputEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputEnabled"))
  {
    m_outputEnabled = jsonValue.GetBool("outputEnabled");
    m_outputEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailWordConfig::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_inputActionHasBeenSet)
  {
   payload.WithString("inputAction", GuardrailWordActionMapper::GetNameForGuardrailWordAction(m_inputAction));
  }

  if(m_outputActionHasBeenSet)
  {
   payload.WithString("outputAction", GuardrailWordActionMapper::GetNameForGuardrailWordAction(m_outputAction));
  }

  if(m_inputEnabledHasBeenSet)
  {
   payload.WithBool("inputEnabled", m_inputEnabled);

  }

  if(m_outputEnabledHasBeenSet)
  {
   payload.WithBool("outputEnabled", m_outputEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
