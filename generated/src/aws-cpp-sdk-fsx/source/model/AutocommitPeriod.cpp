/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/AutocommitPeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

AutocommitPeriod::AutocommitPeriod() : 
    m_type(AutocommitPeriodType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
}

AutocommitPeriod::AutocommitPeriod(JsonView jsonValue) : 
    m_type(AutocommitPeriodType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AutocommitPeriod& AutocommitPeriod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = AutocommitPeriodTypeMapper::GetAutocommitPeriodTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInteger("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AutocommitPeriod::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AutocommitPeriodTypeMapper::GetNameForAutocommitPeriodType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
