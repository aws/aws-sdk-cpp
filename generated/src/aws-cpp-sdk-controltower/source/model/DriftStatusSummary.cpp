/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/DriftStatusSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlTower
{
namespace Model
{

DriftStatusSummary::DriftStatusSummary() : 
    m_driftStatus(DriftStatus::NOT_SET),
    m_driftStatusHasBeenSet(false)
{
}

DriftStatusSummary::DriftStatusSummary(JsonView jsonValue) : 
    m_driftStatus(DriftStatus::NOT_SET),
    m_driftStatusHasBeenSet(false)
{
  *this = jsonValue;
}

DriftStatusSummary& DriftStatusSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("driftStatus"))
  {
    m_driftStatus = DriftStatusMapper::GetDriftStatusForName(jsonValue.GetString("driftStatus"));

    m_driftStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue DriftStatusSummary::Jsonize() const
{
  JsonValue payload;

  if(m_driftStatusHasBeenSet)
  {
   payload.WithString("driftStatus", DriftStatusMapper::GetNameForDriftStatus(m_driftStatus));
  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
