/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/Validator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

Validator::Validator() : 
    m_type(ValidatorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

Validator::Validator(JsonView jsonValue) : 
    m_type(ValidatorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

Validator& Validator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ValidatorTypeMapper::GetValidatorTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue Validator::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ValidatorTypeMapper::GetNameForValidatorType(m_type));
  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
