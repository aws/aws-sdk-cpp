/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ConsumedUsages.h>
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

ConsumedUsages::ConsumedUsages(JsonView jsonValue)
{
  *this = jsonValue;
}

ConsumedUsages& ConsumedUsages::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("approximateDollarUsage"))
  {
    m_approximateDollarUsage = jsonValue.GetDouble("approximateDollarUsage");
    m_approximateDollarUsageHasBeenSet = true;
  }
  return *this;
}

JsonValue ConsumedUsages::Jsonize() const
{
  JsonValue payload;

  if(m_approximateDollarUsageHasBeenSet)
  {
   payload.WithDouble("approximateDollarUsage", m_approximateDollarUsage);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
