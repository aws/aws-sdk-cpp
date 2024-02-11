/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AnalysisParameter::AnalysisParameter() : 
    m_nameHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

AnalysisParameter::AnalysisParameter(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisParameter& AnalysisParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ParameterTypeMapper::GetParameterTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisParameter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ParameterTypeMapper::GetNameForParameterType(m_type));
  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
