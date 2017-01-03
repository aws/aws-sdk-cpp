﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ssm/model/InstancePatchState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InstancePatchState::InstancePatchState() : 
    m_instanceIdHasBeenSet(false),
    m_patchGroupHasBeenSet(false),
    m_baselineIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_ownerInformationHasBeenSet(false),
    m_installedCount(0),
    m_installedCountHasBeenSet(false),
    m_installedOtherCount(0),
    m_installedOtherCountHasBeenSet(false),
    m_missingCount(0),
    m_missingCountHasBeenSet(false),
    m_failedCount(0),
    m_failedCountHasBeenSet(false),
    m_notApplicableCount(0),
    m_notApplicableCountHasBeenSet(false),
    m_operationStartTimeHasBeenSet(false),
    m_operationEndTimeHasBeenSet(false),
    m_operation(PatchOperationType::NOT_SET),
    m_operationHasBeenSet(false)
{
}

InstancePatchState::InstancePatchState(const JsonValue& jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_patchGroupHasBeenSet(false),
    m_baselineIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_ownerInformationHasBeenSet(false),
    m_installedCount(0),
    m_installedCountHasBeenSet(false),
    m_installedOtherCount(0),
    m_installedOtherCountHasBeenSet(false),
    m_missingCount(0),
    m_missingCountHasBeenSet(false),
    m_failedCount(0),
    m_failedCountHasBeenSet(false),
    m_notApplicableCount(0),
    m_notApplicableCountHasBeenSet(false),
    m_operationStartTimeHasBeenSet(false),
    m_operationEndTimeHasBeenSet(false),
    m_operation(PatchOperationType::NOT_SET),
    m_operationHasBeenSet(false)
{
  *this = jsonValue;
}

InstancePatchState& InstancePatchState::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PatchGroup"))
  {
    m_patchGroup = jsonValue.GetString("PatchGroup");

    m_patchGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaselineId"))
  {
    m_baselineId = jsonValue.GetString("BaselineId");

    m_baselineIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotId"))
  {
    m_snapshotId = jsonValue.GetString("SnapshotId");

    m_snapshotIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerInformation"))
  {
    m_ownerInformation = jsonValue.GetString("OwnerInformation");

    m_ownerInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstalledCount"))
  {
    m_installedCount = jsonValue.GetInteger("InstalledCount");

    m_installedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstalledOtherCount"))
  {
    m_installedOtherCount = jsonValue.GetInteger("InstalledOtherCount");

    m_installedOtherCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MissingCount"))
  {
    m_missingCount = jsonValue.GetInteger("MissingCount");

    m_missingCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailedCount"))
  {
    m_failedCount = jsonValue.GetInteger("FailedCount");

    m_failedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotApplicableCount"))
  {
    m_notApplicableCount = jsonValue.GetInteger("NotApplicableCount");

    m_notApplicableCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperationStartTime"))
  {
    m_operationStartTime = jsonValue.GetDouble("OperationStartTime");

    m_operationStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperationEndTime"))
  {
    m_operationEndTime = jsonValue.GetDouble("OperationEndTime");

    m_operationEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = PatchOperationTypeMapper::GetPatchOperationTypeForName(jsonValue.GetString("Operation"));

    m_operationHasBeenSet = true;
  }

  return *this;
}

JsonValue InstancePatchState::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_patchGroupHasBeenSet)
  {
   payload.WithString("PatchGroup", m_patchGroup);

  }

  if(m_baselineIdHasBeenSet)
  {
   payload.WithString("BaselineId", m_baselineId);

  }

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("SnapshotId", m_snapshotId);

  }

  if(m_ownerInformationHasBeenSet)
  {
   payload.WithString("OwnerInformation", m_ownerInformation);

  }

  if(m_installedCountHasBeenSet)
  {
   payload.WithInteger("InstalledCount", m_installedCount);

  }

  if(m_installedOtherCountHasBeenSet)
  {
   payload.WithInteger("InstalledOtherCount", m_installedOtherCount);

  }

  if(m_missingCountHasBeenSet)
  {
   payload.WithInteger("MissingCount", m_missingCount);

  }

  if(m_failedCountHasBeenSet)
  {
   payload.WithInteger("FailedCount", m_failedCount);

  }

  if(m_notApplicableCountHasBeenSet)
  {
   payload.WithInteger("NotApplicableCount", m_notApplicableCount);

  }

  if(m_operationStartTimeHasBeenSet)
  {
   payload.WithDouble("OperationStartTime", m_operationStartTime.SecondsWithMSPrecision());
  }

  if(m_operationEndTimeHasBeenSet)
  {
   payload.WithDouble("OperationEndTime", m_operationEndTime.SecondsWithMSPrecision());
  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", PatchOperationTypeMapper::GetNameForPatchOperationType(m_operation));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws