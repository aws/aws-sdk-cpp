/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TrafficDistributionGroupUserSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

TrafficDistributionGroupUserSummary::TrafficDistributionGroupUserSummary() : 
    m_userIdHasBeenSet(false)
{
}

TrafficDistributionGroupUserSummary::TrafficDistributionGroupUserSummary(JsonView jsonValue) : 
    m_userIdHasBeenSet(false)
{
  *this = jsonValue;
}

TrafficDistributionGroupUserSummary& TrafficDistributionGroupUserSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TrafficDistributionGroupUserSummary::Jsonize() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
