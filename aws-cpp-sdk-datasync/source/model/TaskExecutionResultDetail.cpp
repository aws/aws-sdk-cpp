/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/TaskExecutionResultDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

TaskExecutionResultDetail::TaskExecutionResultDetail() : 
    m_prepareDuration(0),
    m_prepareDurationHasBeenSet(false),
    m_prepareStatus(PhaseStatus::NOT_SET),
    m_prepareStatusHasBeenSet(false),
    m_totalDuration(0),
    m_totalDurationHasBeenSet(false),
    m_transferDuration(0),
    m_transferDurationHasBeenSet(false),
    m_transferStatus(PhaseStatus::NOT_SET),
    m_transferStatusHasBeenSet(false),
    m_verifyDuration(0),
    m_verifyDurationHasBeenSet(false),
    m_verifyStatus(PhaseStatus::NOT_SET),
    m_verifyStatusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorDetailHasBeenSet(false)
{
}

TaskExecutionResultDetail::TaskExecutionResultDetail(JsonView jsonValue) : 
    m_prepareDuration(0),
    m_prepareDurationHasBeenSet(false),
    m_prepareStatus(PhaseStatus::NOT_SET),
    m_prepareStatusHasBeenSet(false),
    m_totalDuration(0),
    m_totalDurationHasBeenSet(false),
    m_transferDuration(0),
    m_transferDurationHasBeenSet(false),
    m_transferStatus(PhaseStatus::NOT_SET),
    m_transferStatusHasBeenSet(false),
    m_verifyDuration(0),
    m_verifyDurationHasBeenSet(false),
    m_verifyStatus(PhaseStatus::NOT_SET),
    m_verifyStatusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorDetailHasBeenSet(false)
{
  *this = jsonValue;
}

TaskExecutionResultDetail& TaskExecutionResultDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrepareDuration"))
  {
    m_prepareDuration = jsonValue.GetInt64("PrepareDuration");

    m_prepareDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrepareStatus"))
  {
    m_prepareStatus = PhaseStatusMapper::GetPhaseStatusForName(jsonValue.GetString("PrepareStatus"));

    m_prepareStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalDuration"))
  {
    m_totalDuration = jsonValue.GetInt64("TotalDuration");

    m_totalDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransferDuration"))
  {
    m_transferDuration = jsonValue.GetInt64("TransferDuration");

    m_transferDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransferStatus"))
  {
    m_transferStatus = PhaseStatusMapper::GetPhaseStatusForName(jsonValue.GetString("TransferStatus"));

    m_transferStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerifyDuration"))
  {
    m_verifyDuration = jsonValue.GetInt64("VerifyDuration");

    m_verifyDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerifyStatus"))
  {
    m_verifyStatus = PhaseStatusMapper::GetPhaseStatusForName(jsonValue.GetString("VerifyStatus"));

    m_verifyStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorDetail"))
  {
    m_errorDetail = jsonValue.GetString("ErrorDetail");

    m_errorDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskExecutionResultDetail::Jsonize() const
{
  JsonValue payload;

  if(m_prepareDurationHasBeenSet)
  {
   payload.WithInt64("PrepareDuration", m_prepareDuration);

  }

  if(m_prepareStatusHasBeenSet)
  {
   payload.WithString("PrepareStatus", PhaseStatusMapper::GetNameForPhaseStatus(m_prepareStatus));
  }

  if(m_totalDurationHasBeenSet)
  {
   payload.WithInt64("TotalDuration", m_totalDuration);

  }

  if(m_transferDurationHasBeenSet)
  {
   payload.WithInt64("TransferDuration", m_transferDuration);

  }

  if(m_transferStatusHasBeenSet)
  {
   payload.WithString("TransferStatus", PhaseStatusMapper::GetNameForPhaseStatus(m_transferStatus));
  }

  if(m_verifyDurationHasBeenSet)
  {
   payload.WithInt64("VerifyDuration", m_verifyDuration);

  }

  if(m_verifyStatusHasBeenSet)
  {
   payload.WithString("VerifyStatus", PhaseStatusMapper::GetNameForPhaseStatus(m_verifyStatus));
  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorDetailHasBeenSet)
  {
   payload.WithString("ErrorDetail", m_errorDetail);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
