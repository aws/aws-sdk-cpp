/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/MeasureValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

MeasureValue::MeasureValue() : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_type(MeasureValueType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

MeasureValue::MeasureValue(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_type(MeasureValueType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

MeasureValue& MeasureValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = MeasureValueTypeMapper::GetMeasureValueTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue MeasureValue::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", MeasureValueTypeMapper::GetNameForMeasureValueType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
