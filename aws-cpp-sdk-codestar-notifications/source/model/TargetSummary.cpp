/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/model/TargetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStarNotifications
{
namespace Model
{

TargetSummary::TargetSummary() : 
    m_targetAddressHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_targetStatus(TargetStatus::NOT_SET),
    m_targetStatusHasBeenSet(false)
{
}

TargetSummary::TargetSummary(JsonView jsonValue) : 
    m_targetAddressHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_targetStatus(TargetStatus::NOT_SET),
    m_targetStatusHasBeenSet(false)
{
  *this = jsonValue;
}

TargetSummary& TargetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetAddress"))
  {
    m_targetAddress = jsonValue.GetString("TargetAddress");

    m_targetAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetType"))
  {
    m_targetType = jsonValue.GetString("TargetType");

    m_targetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetStatus"))
  {
    m_targetStatus = TargetStatusMapper::GetTargetStatusForName(jsonValue.GetString("TargetStatus"));

    m_targetStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_targetAddressHasBeenSet)
  {
   payload.WithString("TargetAddress", m_targetAddress);

  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("TargetType", m_targetType);

  }

  if(m_targetStatusHasBeenSet)
  {
   payload.WithString("TargetStatus", TargetStatusMapper::GetNameForTargetStatus(m_targetStatus));
  }

  return payload;
}

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
