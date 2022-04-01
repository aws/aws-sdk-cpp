/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/MilestoneSummary.h>
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

MilestoneSummary::MilestoneSummary() : 
    m_milestoneNumber(0),
    m_milestoneNumberHasBeenSet(false),
    m_milestoneNameHasBeenSet(false),
    m_recordedAtHasBeenSet(false),
    m_workloadSummaryHasBeenSet(false)
{
}

MilestoneSummary::MilestoneSummary(JsonView jsonValue) : 
    m_milestoneNumber(0),
    m_milestoneNumberHasBeenSet(false),
    m_milestoneNameHasBeenSet(false),
    m_recordedAtHasBeenSet(false),
    m_workloadSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

MilestoneSummary& MilestoneSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("WorkloadSummary"))
  {
    m_workloadSummary = jsonValue.GetObject("WorkloadSummary");

    m_workloadSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue MilestoneSummary::Jsonize() const
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

  if(m_workloadSummaryHasBeenSet)
  {
   payload.WithObject("WorkloadSummary", m_workloadSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
