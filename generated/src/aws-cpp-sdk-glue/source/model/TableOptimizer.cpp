/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TableOptimizer.h>
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

TableOptimizer::TableOptimizer() : 
    m_type(TableOptimizerType::NOT_SET),
    m_typeHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_lastRunHasBeenSet(false)
{
}

TableOptimizer::TableOptimizer(JsonView jsonValue) : 
    m_type(TableOptimizerType::NOT_SET),
    m_typeHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_lastRunHasBeenSet(false)
{
  *this = jsonValue;
}

TableOptimizer& TableOptimizer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = TableOptimizerTypeMapper::GetTableOptimizerTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRun"))
  {
    m_lastRun = jsonValue.GetObject("lastRun");

    m_lastRunHasBeenSet = true;
  }

  return *this;
}

JsonValue TableOptimizer::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TableOptimizerTypeMapper::GetNameForTableOptimizerType(m_type));
  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_lastRunHasBeenSet)
  {
   payload.WithObject("lastRun", m_lastRun.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
