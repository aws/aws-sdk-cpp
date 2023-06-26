/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/GroupSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

GroupSummary::GroupSummary() : 
    m_groupIdHasBeenSet(false),
    m_orderingId(0),
    m_orderingIdHasBeenSet(false)
{
}

GroupSummary::GroupSummary(JsonView jsonValue) : 
    m_groupIdHasBeenSet(false),
    m_orderingId(0),
    m_orderingIdHasBeenSet(false)
{
  *this = jsonValue;
}

GroupSummary& GroupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetString("GroupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrderingId"))
  {
    m_orderingId = jsonValue.GetInt64("OrderingId");

    m_orderingIdHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_orderingIdHasBeenSet)
  {
   payload.WithInt64("OrderingId", m_orderingId);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
