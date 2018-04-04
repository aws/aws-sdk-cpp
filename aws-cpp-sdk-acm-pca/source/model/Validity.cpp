/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

Validity::Validity(const JsonValue& jsonValue) : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_type(ValidityPeriodType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Validity& Validity::operator =(const JsonValue& jsonValue)
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
