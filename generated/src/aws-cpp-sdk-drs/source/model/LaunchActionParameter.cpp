/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LaunchActionParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

LaunchActionParameter::LaunchActionParameter() : 
    m_type(LaunchActionParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

LaunchActionParameter::LaunchActionParameter(JsonView jsonValue) : 
    m_type(LaunchActionParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchActionParameter& LaunchActionParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = LaunchActionParameterTypeMapper::GetLaunchActionParameterTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchActionParameter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", LaunchActionParameterTypeMapper::GetNameForLaunchActionParameterType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
