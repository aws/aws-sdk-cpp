/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/ParameterNameValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DAX
{
namespace Model
{

ParameterNameValue::ParameterNameValue() : 
    m_parameterNameHasBeenSet(false),
    m_parameterValueHasBeenSet(false)
{
}

ParameterNameValue::ParameterNameValue(JsonView jsonValue) : 
    m_parameterNameHasBeenSet(false),
    m_parameterValueHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterNameValue& ParameterNameValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterName"))
  {
    m_parameterName = jsonValue.GetString("ParameterName");

    m_parameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterValue"))
  {
    m_parameterValue = jsonValue.GetString("ParameterValue");

    m_parameterValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterNameValue::Jsonize() const
{
  JsonValue payload;

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("ParameterName", m_parameterName);

  }

  if(m_parameterValueHasBeenSet)
  {
   payload.WithString("ParameterValue", m_parameterValue);

  }

  return payload;
}

} // namespace Model
} // namespace DAX
} // namespace Aws
