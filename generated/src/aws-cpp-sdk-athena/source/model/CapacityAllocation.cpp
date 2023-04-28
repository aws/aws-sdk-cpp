/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CapacityAllocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

CapacityAllocation::CapacityAllocation() : 
    m_status(CapacityAllocationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_requestCompletionTimeHasBeenSet(false)
{
}

CapacityAllocation::CapacityAllocation(JsonView jsonValue) : 
    m_status(CapacityAllocationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_requestCompletionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityAllocation& CapacityAllocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = CapacityAllocationStatusMapper::GetCapacityAllocationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestTime"))
  {
    m_requestTime = jsonValue.GetDouble("RequestTime");

    m_requestTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestCompletionTime"))
  {
    m_requestCompletionTime = jsonValue.GetDouble("RequestCompletionTime");

    m_requestCompletionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityAllocation::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CapacityAllocationStatusMapper::GetNameForCapacityAllocationStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_requestTimeHasBeenSet)
  {
   payload.WithDouble("RequestTime", m_requestTime.SecondsWithMSPrecision());
  }

  if(m_requestCompletionTimeHasBeenSet)
  {
   payload.WithDouble("RequestCompletionTime", m_requestCompletionTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
