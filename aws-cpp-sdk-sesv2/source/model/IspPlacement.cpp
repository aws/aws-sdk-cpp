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

#include <aws/sesv2/model/IspPlacement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

IspPlacement::IspPlacement() : 
    m_ispNameHasBeenSet(false),
    m_placementStatisticsHasBeenSet(false)
{
}

IspPlacement::IspPlacement(JsonView jsonValue) : 
    m_ispNameHasBeenSet(false),
    m_placementStatisticsHasBeenSet(false)
{
  *this = jsonValue;
}

IspPlacement& IspPlacement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IspName"))
  {
    m_ispName = jsonValue.GetString("IspName");

    m_ispNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlacementStatistics"))
  {
    m_placementStatistics = jsonValue.GetObject("PlacementStatistics");

    m_placementStatisticsHasBeenSet = true;
  }

  return *this;
}

JsonValue IspPlacement::Jsonize() const
{
  JsonValue payload;

  if(m_ispNameHasBeenSet)
  {
   payload.WithString("IspName", m_ispName);

  }

  if(m_placementStatisticsHasBeenSet)
  {
   payload.WithObject("PlacementStatistics", m_placementStatistics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
