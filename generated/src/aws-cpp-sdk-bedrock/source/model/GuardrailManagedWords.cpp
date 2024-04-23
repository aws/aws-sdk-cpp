/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailManagedWords.h>
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

GuardrailManagedWords::GuardrailManagedWords() : 
    m_type(GuardrailManagedWordsType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

GuardrailManagedWords::GuardrailManagedWords(JsonView jsonValue) : 
    m_type(GuardrailManagedWordsType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

GuardrailManagedWords& GuardrailManagedWords::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailManagedWordsTypeMapper::GetGuardrailManagedWordsTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailManagedWords::Jsonize() const
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
