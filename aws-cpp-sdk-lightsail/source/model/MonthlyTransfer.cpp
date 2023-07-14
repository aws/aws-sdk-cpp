/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/MonthlyTransfer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

MonthlyTransfer::MonthlyTransfer() : 
    m_gbPerMonthAllocated(0),
    m_gbPerMonthAllocatedHasBeenSet(false)
{
}

MonthlyTransfer::MonthlyTransfer(JsonView jsonValue) : 
    m_gbPerMonthAllocated(0),
    m_gbPerMonthAllocatedHasBeenSet(false)
{
  *this = jsonValue;
}

MonthlyTransfer& MonthlyTransfer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("gbPerMonthAllocated"))
  {
    m_gbPerMonthAllocated = jsonValue.GetInteger("gbPerMonthAllocated");

    m_gbPerMonthAllocatedHasBeenSet = true;
  }

  return *this;
}

JsonValue MonthlyTransfer::Jsonize() const
{
  JsonValue payload;

  if(m_gbPerMonthAllocatedHasBeenSet)
  {
   payload.WithInteger("gbPerMonthAllocated", m_gbPerMonthAllocated);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
