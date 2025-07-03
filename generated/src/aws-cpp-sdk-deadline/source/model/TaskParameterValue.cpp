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

TaskParameterValue::TaskParameterValue(JsonView jsonValue)
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
  if(jsonValue.ValueExists("chunkInt"))
  {
    m_chunkInt = jsonValue.GetString("chunkInt");
    m_chunkIntHasBeenSet = true;
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

  if(m_chunkIntHasBeenSet)
  {
   payload.WithString("chunkInt", m_chunkInt);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
