/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailManagedWordsConfig.h>
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

GuardrailManagedWordsConfig::GuardrailManagedWordsConfig() : 
    m_type(GuardrailManagedWordsType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

GuardrailManagedWordsConfig::GuardrailManagedWordsConfig(JsonView jsonValue) : 
    m_type(GuardrailManagedWordsType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

GuardrailManagedWordsConfig& GuardrailManagedWordsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailManagedWordsTypeMapper::GetGuardrailManagedWordsTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailManagedWordsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailManagedWordsTypeMapper::GetNameForGuardrailManagedWordsType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
