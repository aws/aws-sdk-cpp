/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/PlanningStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

PlanningStatistics::PlanningStatistics() : 
    m_estimatedDataToScanBytes(0),
    m_estimatedDataToScanBytesHasBeenSet(false),
    m_planningTimeMillis(0),
    m_planningTimeMillisHasBeenSet(false),
    m_queueTimeMillis(0),
    m_queueTimeMillisHasBeenSet(false),
    m_workUnitsGeneratedCount(0),
    m_workUnitsGeneratedCountHasBeenSet(false)
{
}

PlanningStatistics::PlanningStatistics(JsonView jsonValue) : 
    m_estimatedDataToScanBytes(0),
    m_estimatedDataToScanBytesHasBeenSet(false),
    m_planningTimeMillis(0),
    m_planningTimeMillisHasBeenSet(false),
    m_queueTimeMillis(0),
    m_queueTimeMillisHasBeenSet(false),
    m_workUnitsGeneratedCount(0),
    m_workUnitsGeneratedCountHasBeenSet(false)
{
  *this = jsonValue;
}

PlanningStatistics& PlanningStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EstimatedDataToScanBytes"))
  {
    m_estimatedDataToScanBytes = jsonValue.GetInt64("EstimatedDataToScanBytes");

    m_estimatedDataToScanBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlanningTimeMillis"))
  {
    m_planningTimeMillis = jsonValue.GetInt64("PlanningTimeMillis");

    m_planningTimeMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueueTimeMillis"))
  {
    m_queueTimeMillis = jsonValue.GetInt64("QueueTimeMillis");

    m_queueTimeMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkUnitsGeneratedCount"))
  {
    m_workUnitsGeneratedCount = jsonValue.GetInt64("WorkUnitsGeneratedCount");

    m_workUnitsGeneratedCountHasBeenSet = true;
  }

  return *this;
}

JsonValue PlanningStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedDataToScanBytesHasBeenSet)
  {
   payload.WithInt64("EstimatedDataToScanBytes", m_estimatedDataToScanBytes);

  }

  if(m_planningTimeMillisHasBeenSet)
  {
   payload.WithInt64("PlanningTimeMillis", m_planningTimeMillis);

  }

  if(m_queueTimeMillisHasBeenSet)
  {
   payload.WithInt64("QueueTimeMillis", m_queueTimeMillis);

  }

  if(m_workUnitsGeneratedCountHasBeenSet)
  {
   payload.WithInt64("WorkUnitsGeneratedCount", m_workUnitsGeneratedCount);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
