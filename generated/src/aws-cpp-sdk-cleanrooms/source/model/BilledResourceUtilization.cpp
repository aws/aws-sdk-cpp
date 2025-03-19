/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/BilledResourceUtilization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

BilledResourceUtilization::BilledResourceUtilization(JsonView jsonValue)
{
  *this = jsonValue;
}

BilledResourceUtilization& BilledResourceUtilization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("units"))
  {
    m_units = jsonValue.GetDouble("units");
    m_unitsHasBeenSet = true;
  }
  return *this;
}

JsonValue BilledResourceUtilization::Jsonize() const
{
  JsonValue payload;

  if(m_unitsHasBeenSet)
  {
   payload.WithDouble("units", m_units);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
