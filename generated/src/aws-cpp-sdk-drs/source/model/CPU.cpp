/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/CPU.h>
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

CPU::CPU(JsonView jsonValue)
{
  *this = jsonValue;
}

CPU& CPU::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cores"))
  {
    m_cores = jsonValue.GetInt64("cores");
    m_coresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelName"))
  {
    m_modelName = jsonValue.GetString("modelName");
    m_modelNameHasBeenSet = true;
  }
  return *this;
}

JsonValue CPU::Jsonize() const
{
  JsonValue payload;

  if(m_coresHasBeenSet)
  {
   payload.WithInt64("cores", m_cores);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("modelName", m_modelName);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
