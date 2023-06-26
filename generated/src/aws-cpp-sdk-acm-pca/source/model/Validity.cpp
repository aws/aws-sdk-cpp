/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/Validity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

Validity::Validity() : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_type(ValidityPeriodType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Validity::Validity(JsonView jsonValue) : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_type(ValidityPeriodType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Validity& Validity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInt64("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ValidityPeriodTypeMapper::GetValidityPeriodTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Validity::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("Value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ValidityPeriodTypeMapper::GetNameForValidityPeriodType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
