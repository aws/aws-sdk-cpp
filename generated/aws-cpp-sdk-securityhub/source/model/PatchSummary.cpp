/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/PatchSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

PatchSummary::PatchSummary() : 
    m_idHasBeenSet(false),
    m_installedCount(0),
    m_installedCountHasBeenSet(false),
    m_missingCount(0),
    m_missingCountHasBeenSet(false),
    m_failedCount(0),
    m_failedCountHasBeenSet(false),
    m_installedOtherCount(0),
    m_installedOtherCountHasBeenSet(false),
    m_installedRejectedCount(0),
    m_installedRejectedCountHasBeenSet(false),
    m_installedPendingReboot(0),
    m_installedPendingRebootHasBeenSet(false),
    m_operationStartTimeHasBeenSet(false),
    m_operationEndTimeHasBeenSet(false),
    m_rebootOptionHasBeenSet(false),
    m_operationHasBeenSet(false)
{
}

PatchSummary::PatchSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_installedCount(0),
    m_installedCountHasBeenSet(false),
    m_missingCount(0),
    m_missingCountHasBeenSet(false),
    m_failedCount(0),
    m_failedCountHasBeenSet(false),
    m_installedOtherCount(0),
    m_installedOtherCountHasBeenSet(false),
    m_installedRejectedCount(0),
    m_installedRejectedCountHasBeenSet(false),
    m_installedPendingReboot(0),
    m_installedPendingRebootHasBeenSet(false),
    m_operationStartTimeHasBeenSet(false),
    m_operationEndTimeHasBeenSet(false),
    m_rebootOptionHasBeenSet(false),
    m_operationHasBeenSet(false)
{
  *this = jsonValue;
}

PatchSummary& PatchSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstalledCount"))
  {
    m_installedCount = jsonValue.GetInteger("InstalledCount");

    m_installedCountHasBeenSet = true;
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

  if(jsonValue.ValueExists("InstalledOtherCount"))
  {
    m_installedOtherCount = jsonValue.GetInteger("InstalledOtherCount");

    m_installedOtherCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstalledRejectedCount"))
  {
    m_installedRejectedCount = jsonValue.GetInteger("InstalledRejectedCount");

    m_installedRejectedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstalledPendingReboot"))
  {
    m_installedPendingReboot = jsonValue.GetInteger("InstalledPendingReboot");

    m_installedPendingRebootHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperationStartTime"))
  {
    m_operationStartTime = jsonValue.GetString("OperationStartTime");

    m_operationStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperationEndTime"))
  {
    m_operationEndTime = jsonValue.GetString("OperationEndTime");

    m_operationEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RebootOption"))
  {
    m_rebootOption = jsonValue.GetString("RebootOption");

    m_rebootOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = jsonValue.GetString("Operation");

    m_operationHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_installedCountHasBeenSet)
  {
   payload.WithInteger("InstalledCount", m_installedCount);

  }

  if(m_missingCountHasBeenSet)
  {
   payload.WithInteger("MissingCount", m_missingCount);

  }

  if(m_failedCountHasBeenSet)
  {
   payload.WithInteger("FailedCount", m_failedCount);

  }

  if(m_installedOtherCountHasBeenSet)
  {
   payload.WithInteger("InstalledOtherCount", m_installedOtherCount);

  }

  if(m_installedRejectedCountHasBeenSet)
  {
   payload.WithInteger("InstalledRejectedCount", m_installedRejectedCount);

  }

  if(m_installedPendingRebootHasBeenSet)
  {
   payload.WithInteger("InstalledPendingReboot", m_installedPendingReboot);

  }

  if(m_operationStartTimeHasBeenSet)
  {
   payload.WithString("OperationStartTime", m_operationStartTime);

  }

  if(m_operationEndTimeHasBeenSet)
  {
   payload.WithString("OperationEndTime", m_operationEndTime);

  }

  if(m_rebootOptionHasBeenSet)
  {
   payload.WithString("RebootOption", m_rebootOption);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", m_operation);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
