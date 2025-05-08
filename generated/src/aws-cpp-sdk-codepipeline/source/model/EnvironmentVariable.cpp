/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/EnvironmentVariable.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

EnvironmentVariable::EnvironmentVariable(JsonView jsonValue)
{
  *this = jsonValue;
}

EnvironmentVariable& EnvironmentVariable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = EnvironmentVariableTypeMapper::GetEnvironmentVariableTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentVariable::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", EnvironmentVariableTypeMapper::GetNameForEnvironmentVariableType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
