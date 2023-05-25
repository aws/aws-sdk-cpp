/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CodeGenNodeArg.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CodeGenNodeArg::CodeGenNodeArg() : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_param(false),
    m_paramHasBeenSet(false)
{
}

CodeGenNodeArg::CodeGenNodeArg(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_param(false),
    m_paramHasBeenSet(false)
{
  *this = jsonValue;
}

CodeGenNodeArg& CodeGenNodeArg::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Param"))
  {
    m_param = jsonValue.GetBool("Param");

    m_paramHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeGenNodeArg::Jsonize() const
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

  if(m_paramHasBeenSet)
  {
   payload.WithBool("Param", m_param);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
