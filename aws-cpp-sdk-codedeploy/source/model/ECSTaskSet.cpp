/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ECSTaskSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

ECSTaskSet::ECSTaskSet() : 
    m_identiferHasBeenSet(false),
    m_desiredCount(0),
    m_desiredCountHasBeenSet(false),
    m_pendingCount(0),
    m_pendingCountHasBeenSet(false),
    m_runningCount(0),
    m_runningCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_trafficWeight(0.0),
    m_trafficWeightHasBeenSet(false),
    m_targetGroupHasBeenSet(false),
    m_taskSetLabel(TargetLabel::NOT_SET),
    m_taskSetLabelHasBeenSet(false)
{
}

ECSTaskSet::ECSTaskSet(JsonView jsonValue) : 
    m_identiferHasBeenSet(false),
    m_desiredCount(0),
    m_desiredCountHasBeenSet(false),
    m_pendingCount(0),
    m_pendingCountHasBeenSet(false),
    m_runningCount(0),
    m_runningCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_trafficWeight(0.0),
    m_trafficWeightHasBeenSet(false),
    m_targetGroupHasBeenSet(false),
    m_taskSetLabel(TargetLabel::NOT_SET),
    m_taskSetLabelHasBeenSet(false)
{
  *this = jsonValue;
}

ECSTaskSet& ECSTaskSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identifer"))
  {
    m_identifer = jsonValue.GetString("identifer");

    m_identiferHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desiredCount"))
  {
    m_desiredCount = jsonValue.GetInt64("desiredCount");

    m_desiredCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingCount"))
  {
    m_pendingCount = jsonValue.GetInt64("pendingCount");

    m_pendingCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runningCount"))
  {
    m_runningCount = jsonValue.GetInt64("runningCount");

    m_runningCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trafficWeight"))
  {
    m_trafficWeight = jsonValue.GetDouble("trafficWeight");

    m_trafficWeightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetGroup"))
  {
    m_targetGroup = jsonValue.GetObject("targetGroup");

    m_targetGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskSetLabel"))
  {
    m_taskSetLabel = TargetLabelMapper::GetTargetLabelForName(jsonValue.GetString("taskSetLabel"));

    m_taskSetLabelHasBeenSet = true;
  }

  return *this;
}

JsonValue ECSTaskSet::Jsonize() const
{
  JsonValue payload;

  if(m_identiferHasBeenSet)
  {
   payload.WithString("identifer", m_identifer);

  }

  if(m_desiredCountHasBeenSet)
  {
   payload.WithInt64("desiredCount", m_desiredCount);

  }

  if(m_pendingCountHasBeenSet)
  {
   payload.WithInt64("pendingCount", m_pendingCount);

  }

  if(m_runningCountHasBeenSet)
  {
   payload.WithInt64("runningCount", m_runningCount);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_trafficWeightHasBeenSet)
  {
   payload.WithDouble("trafficWeight", m_trafficWeight);

  }

  if(m_targetGroupHasBeenSet)
  {
   payload.WithObject("targetGroup", m_targetGroup.Jsonize());

  }

  if(m_taskSetLabelHasBeenSet)
  {
   payload.WithString("taskSetLabel", TargetLabelMapper::GetNameForTargetLabel(m_taskSetLabel));
  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
