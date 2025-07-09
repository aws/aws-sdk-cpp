/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/model/ActivitySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FreeTier
{
namespace Model
{

ActivitySummary::ActivitySummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ActivitySummary& ActivitySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activityId"))
  {
    m_activityId = jsonValue.GetString("activityId");
    m_activityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reward"))
  {
    m_reward = jsonValue.GetObject("reward");
    m_rewardHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ActivityStatusMapper::GetActivityStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ActivitySummary::Jsonize() const
{
  JsonValue payload;

  if(m_activityIdHasBeenSet)
  {
   payload.WithString("activityId", m_activityId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_rewardHasBeenSet)
  {
   payload.WithObject("reward", m_reward.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ActivityStatusMapper::GetNameForActivityStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace FreeTier
} // namespace Aws
