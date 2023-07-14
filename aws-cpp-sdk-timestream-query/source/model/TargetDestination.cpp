/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/TargetDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

TargetDestination::TargetDestination() : 
    m_timestreamDestinationHasBeenSet(false)
{
}

TargetDestination::TargetDestination(JsonView jsonValue) : 
    m_timestreamDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

TargetDestination& TargetDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimestreamDestination"))
  {
    m_timestreamDestination = jsonValue.GetObject("TimestreamDestination");

    m_timestreamDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetDestination::Jsonize() const
{
  JsonValue payload;

  if(m_timestreamDestinationHasBeenSet)
  {
   payload.WithObject("TimestreamDestination", m_timestreamDestination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
