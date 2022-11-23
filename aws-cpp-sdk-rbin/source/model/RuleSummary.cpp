/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/RuleSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RecycleBin
{
namespace Model
{

RuleSummary::RuleSummary() : 
    m_identifierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_lockState(LockState::NOT_SET),
    m_lockStateHasBeenSet(false)
{
}

RuleSummary::RuleSummary(JsonView jsonValue) : 
    m_identifierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_lockState(LockState::NOT_SET),
    m_lockStateHasBeenSet(false)
{
  *this = jsonValue;
}

RuleSummary& RuleSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetObject("RetentionPeriod");

    m_retentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LockState"))
  {
    m_lockState = LockStateMapper::GetLockStateForName(jsonValue.GetString("LockState"));

    m_lockStateHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleSummary::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithObject("RetentionPeriod", m_retentionPeriod.Jsonize());

  }

  if(m_lockStateHasBeenSet)
  {
   payload.WithString("LockState", LockStateMapper::GetNameForLockState(m_lockState));
  }

  return payload;
}

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
