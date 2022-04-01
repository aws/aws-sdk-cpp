/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/BehaviorModelTrainingSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

BehaviorModelTrainingSummary::BehaviorModelTrainingSummary() : 
    m_securityProfileNameHasBeenSet(false),
    m_behaviorNameHasBeenSet(false),
    m_trainingDataCollectionStartDateHasBeenSet(false),
    m_modelStatus(ModelStatus::NOT_SET),
    m_modelStatusHasBeenSet(false),
    m_datapointsCollectionPercentage(0.0),
    m_datapointsCollectionPercentageHasBeenSet(false),
    m_lastModelRefreshDateHasBeenSet(false)
{
}

BehaviorModelTrainingSummary::BehaviorModelTrainingSummary(JsonView jsonValue) : 
    m_securityProfileNameHasBeenSet(false),
    m_behaviorNameHasBeenSet(false),
    m_trainingDataCollectionStartDateHasBeenSet(false),
    m_modelStatus(ModelStatus::NOT_SET),
    m_modelStatusHasBeenSet(false),
    m_datapointsCollectionPercentage(0.0),
    m_datapointsCollectionPercentageHasBeenSet(false),
    m_lastModelRefreshDateHasBeenSet(false)
{
  *this = jsonValue;
}

BehaviorModelTrainingSummary& BehaviorModelTrainingSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("securityProfileName"))
  {
    m_securityProfileName = jsonValue.GetString("securityProfileName");

    m_securityProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("behaviorName"))
  {
    m_behaviorName = jsonValue.GetString("behaviorName");

    m_behaviorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingDataCollectionStartDate"))
  {
    m_trainingDataCollectionStartDate = jsonValue.GetDouble("trainingDataCollectionStartDate");

    m_trainingDataCollectionStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelStatus"))
  {
    m_modelStatus = ModelStatusMapper::GetModelStatusForName(jsonValue.GetString("modelStatus"));

    m_modelStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datapointsCollectionPercentage"))
  {
    m_datapointsCollectionPercentage = jsonValue.GetDouble("datapointsCollectionPercentage");

    m_datapointsCollectionPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModelRefreshDate"))
  {
    m_lastModelRefreshDate = jsonValue.GetDouble("lastModelRefreshDate");

    m_lastModelRefreshDateHasBeenSet = true;
  }

  return *this;
}

JsonValue BehaviorModelTrainingSummary::Jsonize() const
{
  JsonValue payload;

  if(m_securityProfileNameHasBeenSet)
  {
   payload.WithString("securityProfileName", m_securityProfileName);

  }

  if(m_behaviorNameHasBeenSet)
  {
   payload.WithString("behaviorName", m_behaviorName);

  }

  if(m_trainingDataCollectionStartDateHasBeenSet)
  {
   payload.WithDouble("trainingDataCollectionStartDate", m_trainingDataCollectionStartDate.SecondsWithMSPrecision());
  }

  if(m_modelStatusHasBeenSet)
  {
   payload.WithString("modelStatus", ModelStatusMapper::GetNameForModelStatus(m_modelStatus));
  }

  if(m_datapointsCollectionPercentageHasBeenSet)
  {
   payload.WithDouble("datapointsCollectionPercentage", m_datapointsCollectionPercentage);

  }

  if(m_lastModelRefreshDateHasBeenSet)
  {
   payload.WithDouble("lastModelRefreshDate", m_lastModelRefreshDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
