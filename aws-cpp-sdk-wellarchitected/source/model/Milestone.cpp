/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/Milestone.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

Milestone::Milestone() : 
    m_milestoneNumber(0),
    m_milestoneNumberHasBeenSet(false),
    m_milestoneNameHasBeenSet(false),
    m_recordedAtHasBeenSet(false),
    m_workloadHasBeenSet(false)
{
}

Milestone::Milestone(JsonView jsonValue) : 
    m_milestoneNumber(0),
    m_milestoneNumberHasBeenSet(false),
    m_milestoneNameHasBeenSet(false),
    m_recordedAtHasBeenSet(false),
    m_workloadHasBeenSet(false)
{
  *this = jsonValue;
}

Milestone& Milestone::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MilestoneNumber"))
  {
    m_milestoneNumber = jsonValue.GetInteger("MilestoneNumber");

    m_milestoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MilestoneName"))
  {
    m_milestoneName = jsonValue.GetString("MilestoneName");

    m_milestoneNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordedAt"))
  {
    m_recordedAt = jsonValue.GetDouble("RecordedAt");

    m_recordedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Workload"))
  {
    m_workload = jsonValue.GetObject("Workload");

    m_workloadHasBeenSet = true;
  }

  return *this;
}

JsonValue Milestone::Jsonize() const
{
  JsonValue payload;

  if(m_milestoneNumberHasBeenSet)
  {
   payload.WithInteger("MilestoneNumber", m_milestoneNumber);

  }

  if(m_milestoneNameHasBeenSet)
  {
   payload.WithString("MilestoneName", m_milestoneName);

  }

  if(m_recordedAtHasBeenSet)
  {
   payload.WithDouble("RecordedAt", m_recordedAt.SecondsWithMSPrecision());
  }

  if(m_workloadHasBeenSet)
  {
   payload.WithObject("Workload", m_workload.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
