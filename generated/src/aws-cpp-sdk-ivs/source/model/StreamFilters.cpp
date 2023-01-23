/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/StreamFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

StreamFilters::StreamFilters() : 
    m_health(StreamHealth::NOT_SET),
    m_healthHasBeenSet(false)
{
}

StreamFilters::StreamFilters(JsonView jsonValue) : 
    m_health(StreamHealth::NOT_SET),
    m_healthHasBeenSet(false)
{
  *this = jsonValue;
}

StreamFilters& StreamFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("health"))
  {
    m_health = StreamHealthMapper::GetStreamHealthForName(jsonValue.GetString("health"));

    m_healthHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamFilters::Jsonize() const
{
  JsonValue payload;

  if(m_healthHasBeenSet)
  {
   payload.WithString("health", StreamHealthMapper::GetNameForStreamHealth(m_health));
  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
