/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/CancelStepsInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

CancelStepsInfo::CancelStepsInfo() : 
    m_stepIdHasBeenSet(false),
    m_status(CancelStepsRequestStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CancelStepsInfo::CancelStepsInfo(JsonView jsonValue) : 
    m_stepIdHasBeenSet(false),
    m_status(CancelStepsRequestStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

CancelStepsInfo& CancelStepsInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StepId"))
  {
    m_stepId = jsonValue.GetString("StepId");

    m_stepIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CancelStepsRequestStatusMapper::GetCancelStepsRequestStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue CancelStepsInfo::Jsonize() const
{
  JsonValue payload;

  if(m_stepIdHasBeenSet)
  {
   payload.WithString("StepId", m_stepId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CancelStepsRequestStatusMapper::GetNameForCancelStepsRequestStatus(m_status));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
