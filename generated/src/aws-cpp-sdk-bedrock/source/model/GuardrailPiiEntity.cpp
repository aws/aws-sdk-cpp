/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailPiiEntity.h>
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

GuardrailPiiEntity::GuardrailPiiEntity() : 
    m_type(GuardrailPiiEntityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_action(GuardrailSensitiveInformationAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

GuardrailPiiEntity::GuardrailPiiEntity(JsonView jsonValue) : 
    m_type(GuardrailPiiEntityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_action(GuardrailSensitiveInformationAction::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

GuardrailPiiEntity& GuardrailPiiEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailPiiEntityTypeMapper::GetGuardrailPiiEntityTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailSensitiveInformationActionMapper::GetGuardrailSensitiveInformationActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailPiiEntity::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailPiiEntityTypeMapper::GetNameForGuardrailPiiEntityType(m_type));
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GuardrailSensitiveInformationActionMapper::GetNameForGuardrailSensitiveInformationAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
