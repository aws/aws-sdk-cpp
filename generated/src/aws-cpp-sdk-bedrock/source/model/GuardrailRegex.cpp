/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailRegex.h>
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

GuardrailRegex::GuardrailRegex(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailRegex& GuardrailRegex::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pattern"))
  {
    m_pattern = jsonValue.GetString("pattern");
    m_patternHasBeenSet = true;
  }
  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailSensitiveInformationActionMapper::GetGuardrailSensitiveInformationActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputAction"))
  {
    m_inputAction = GuardrailSensitiveInformationActionMapper::GetGuardrailSensitiveInformationActionForName(jsonValue.GetString("inputAction"));
    m_inputActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputAction"))
  {
    m_outputAction = GuardrailSensitiveInformationActionMapper::GetGuardrailSensitiveInformationActionForName(jsonValue.GetString("outputAction"));
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

JsonValue GuardrailRegex::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_patternHasBeenSet)
  {
   payload.WithString("pattern", m_pattern);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GuardrailSensitiveInformationActionMapper::GetNameForGuardrailSensitiveInformationAction(m_action));
  }

  if(m_inputActionHasBeenSet)
  {
   payload.WithString("inputAction", GuardrailSensitiveInformationActionMapper::GetNameForGuardrailSensitiveInformationAction(m_inputAction));
  }

  if(m_outputActionHasBeenSet)
  {
   payload.WithString("outputAction", GuardrailSensitiveInformationActionMapper::GetNameForGuardrailSensitiveInformationAction(m_outputAction));
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
