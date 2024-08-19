/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/TaskParameterValue.h>
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

TaskParameterValue::TaskParameterValue() : 
    m_intHasBeenSet(false),
    m_floatHasBeenSet(false),
    m_stringHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

TaskParameterValue::TaskParameterValue(JsonView jsonValue)
  : TaskParameterValue()
{
  *this = jsonValue;
}

TaskParameterValue& TaskParameterValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("int"))
  {
    m_int = jsonValue.GetString("int");

    m_intHasBeenSet = true;
  }

  if(jsonValue.ValueExists("float"))
  {
    m_float = jsonValue.GetString("float");

    m_floatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("string"))
  {
    m_string = jsonValue.GetString("string");

    m_stringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskParameterValue::Jsonize() const
{
  JsonValue payload;

  if(m_intHasBeenSet)
  {
   payload.WithString("int", m_int);

  }

  if(m_floatHasBeenSet)
  {
   payload.WithString("float", m_float);

  }

  if(m_stringHasBeenSet)
  {
   payload.WithString("string", m_string);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
