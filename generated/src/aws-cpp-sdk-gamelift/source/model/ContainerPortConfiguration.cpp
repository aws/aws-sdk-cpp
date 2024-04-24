/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerPortConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

ContainerPortConfiguration::ContainerPortConfiguration() : 
    m_containerPortRangesHasBeenSet(false)
{
}

ContainerPortConfiguration::ContainerPortConfiguration(JsonView jsonValue) : 
    m_containerPortRangesHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerPortConfiguration& ContainerPortConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerPortRanges"))
  {
    Aws::Utils::Array<JsonView> containerPortRangesJsonList = jsonValue.GetArray("ContainerPortRanges");
    for(unsigned containerPortRangesIndex = 0; containerPortRangesIndex < containerPortRangesJsonList.GetLength(); ++containerPortRangesIndex)
    {
      m_containerPortRanges.push_back(containerPortRangesJsonList[containerPortRangesIndex].AsObject());
    }
    m_containerPortRangesHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerPortConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_containerPortRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerPortRangesJsonList(m_containerPortRanges.size());
   for(unsigned containerPortRangesIndex = 0; containerPortRangesIndex < containerPortRangesJsonList.GetLength(); ++containerPortRangesIndex)
   {
     containerPortRangesJsonList[containerPortRangesIndex].AsObject(m_containerPortRanges[containerPortRangesIndex].Jsonize());
   }
   payload.WithArray("ContainerPortRanges", std::move(containerPortRangesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
