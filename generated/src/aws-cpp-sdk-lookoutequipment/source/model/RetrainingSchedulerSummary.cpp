/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/RetrainingSchedulerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

RetrainingSchedulerSummary::RetrainingSchedulerSummary() : 
    m_modelNameHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_status(RetrainingSchedulerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_retrainingStartDateHasBeenSet(false),
    m_retrainingFrequencyHasBeenSet(false),
    m_lookbackWindowHasBeenSet(false)
{
}

RetrainingSchedulerSummary::RetrainingSchedulerSummary(JsonView jsonValue) : 
    m_modelNameHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_status(RetrainingSchedulerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_retrainingStartDateHasBeenSet(false),
    m_retrainingFrequencyHasBeenSet(false),
    m_lookbackWindowHasBeenSet(false)
{
  *this = jsonValue;
}

RetrainingSchedulerSummary& RetrainingSchedulerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

    m_modelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");

    m_modelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RetrainingSchedulerStatusMapper::GetRetrainingSchedulerStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetrainingStartDate"))
  {
    m_retrainingStartDate = jsonValue.GetDouble("RetrainingStartDate");

    m_retrainingStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetrainingFrequency"))
  {
    m_retrainingFrequency = jsonValue.GetString("RetrainingFrequency");

    m_retrainingFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LookbackWindow"))
  {
    m_lookbackWindow = jsonValue.GetString("LookbackWindow");

    m_lookbackWindowHasBeenSet = true;
  }

  return *this;
}

JsonValue RetrainingSchedulerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("ModelArn", m_modelArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RetrainingSchedulerStatusMapper::GetNameForRetrainingSchedulerStatus(m_status));
  }

  if(m_retrainingStartDateHasBeenSet)
  {
   payload.WithDouble("RetrainingStartDate", m_retrainingStartDate.SecondsWithMSPrecision());
  }

  if(m_retrainingFrequencyHasBeenSet)
  {
   payload.WithString("RetrainingFrequency", m_retrainingFrequency);

  }

  if(m_lookbackWindowHasBeenSet)
  {
   payload.WithString("LookbackWindow", m_lookbackWindow);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
