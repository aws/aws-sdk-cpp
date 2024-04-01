/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StepParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

StepParameter::StepParameter() : 
    m_nameHasBeenSet(false),
    m_type(StepParameterType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

StepParameter::StepParameter(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(StepParameterType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

StepParameter& StepParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = StepParameterTypeMapper::GetStepParameterTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue StepParameter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", StepParameterTypeMapper::GetNameForStepParameterType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
