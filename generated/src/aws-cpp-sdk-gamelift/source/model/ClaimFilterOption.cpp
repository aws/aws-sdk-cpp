/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ClaimFilterOption.h>
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

ClaimFilterOption::ClaimFilterOption() : 
    m_instanceStatusesHasBeenSet(false)
{
}

ClaimFilterOption::ClaimFilterOption(JsonView jsonValue) : 
    m_instanceStatusesHasBeenSet(false)
{
  *this = jsonValue;
}

ClaimFilterOption& ClaimFilterOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceStatuses"))
  {
    Aws::Utils::Array<JsonView> instanceStatusesJsonList = jsonValue.GetArray("InstanceStatuses");
    for(unsigned instanceStatusesIndex = 0; instanceStatusesIndex < instanceStatusesJsonList.GetLength(); ++instanceStatusesIndex)
    {
      m_instanceStatuses.push_back(FilterInstanceStatusMapper::GetFilterInstanceStatusForName(instanceStatusesJsonList[instanceStatusesIndex].AsString()));
    }
    m_instanceStatusesHasBeenSet = true;
  }

  return *this;
}

JsonValue ClaimFilterOption::Jsonize() const
{
  JsonValue payload;

  if(m_instanceStatusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceStatusesJsonList(m_instanceStatuses.size());
   for(unsigned instanceStatusesIndex = 0; instanceStatusesIndex < instanceStatusesJsonList.GetLength(); ++instanceStatusesIndex)
   {
     instanceStatusesJsonList[instanceStatusesIndex].AsString(FilterInstanceStatusMapper::GetNameForFilterInstanceStatus(m_instanceStatuses[instanceStatusesIndex]));
   }
   payload.WithArray("InstanceStatuses", std::move(instanceStatusesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
