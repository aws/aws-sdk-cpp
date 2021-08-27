/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/Impact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

Impact::Impact() : 
    m_maxImpact(0.0),
    m_maxImpactHasBeenSet(false),
    m_totalImpact(0.0),
    m_totalImpactHasBeenSet(false)
{
}

Impact::Impact(JsonView jsonValue) : 
    m_maxImpact(0.0),
    m_maxImpactHasBeenSet(false),
    m_totalImpact(0.0),
    m_totalImpactHasBeenSet(false)
{
  *this = jsonValue;
}

Impact& Impact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxImpact"))
  {
    m_maxImpact = jsonValue.GetDouble("MaxImpact");

    m_maxImpactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalImpact"))
  {
    m_totalImpact = jsonValue.GetDouble("TotalImpact");

    m_totalImpactHasBeenSet = true;
  }

  return *this;
}

JsonValue Impact::Jsonize() const
{
  JsonValue payload;

  if(m_maxImpactHasBeenSet)
  {
   payload.WithDouble("MaxImpact", m_maxImpact);

  }

  if(m_totalImpactHasBeenSet)
  {
   payload.WithDouble("TotalImpact", m_totalImpact);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
