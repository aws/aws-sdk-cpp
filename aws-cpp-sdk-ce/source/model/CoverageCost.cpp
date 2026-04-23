/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ce/model/CoverageCost.h>
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

CoverageCost::CoverageCost() : 
    m_onDemandCostHasBeenSet(false)
{
}

CoverageCost::CoverageCost(JsonView jsonValue) : 
    m_onDemandCostHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageCost& CoverageCost::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OnDemandCost"))
  {
    m_onDemandCost = jsonValue.GetString("OnDemandCost");

    m_onDemandCostHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageCost::Jsonize() const
{
  JsonValue payload;

  if(m_onDemandCostHasBeenSet)
  {
   payload.WithString("OnDemandCost", m_onDemandCost);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
