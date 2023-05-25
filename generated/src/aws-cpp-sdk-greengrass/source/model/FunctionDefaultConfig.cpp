/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/FunctionDefaultConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

FunctionDefaultConfig::FunctionDefaultConfig() : 
    m_executionHasBeenSet(false)
{
}

FunctionDefaultConfig::FunctionDefaultConfig(JsonView jsonValue) : 
    m_executionHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionDefaultConfig& FunctionDefaultConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Execution"))
  {
    m_execution = jsonValue.GetObject("Execution");

    m_executionHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionDefaultConfig::Jsonize() const
{
  JsonValue payload;

  if(m_executionHasBeenSet)
  {
   payload.WithObject("Execution", m_execution.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
