/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/LayoutConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

LayoutConfiguration::LayoutConfiguration() : 
    m_gridHasBeenSet(false)
{
}

LayoutConfiguration::LayoutConfiguration(JsonView jsonValue) : 
    m_gridHasBeenSet(false)
{
  *this = jsonValue;
}

LayoutConfiguration& LayoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("grid"))
  {
    m_grid = jsonValue.GetObject("grid");

    m_gridHasBeenSet = true;
  }

  return *this;
}

JsonValue LayoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_gridHasBeenSet)
  {
   payload.WithObject("grid", m_grid.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
