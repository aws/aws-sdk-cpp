/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuditCheckDetails.h>
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

AuditCheckDetails::AuditCheckDetails() : 
    m_checkRunStatus(AuditCheckRunStatus::NOT_SET),
    m_checkRunStatusHasBeenSet(false),
    m_checkCompliant(false),
    m_checkCompliantHasBeenSet(false),
    m_totalResourcesCount(0),
    m_totalResourcesCountHasBeenSet(false),
    m_nonCompliantResourcesCount(0),
    m_nonCompliantResourcesCountHasBeenSet(false),
    m_suppressedNonCompliantResourcesCount(0),
    m_suppressedNonCompliantResourcesCountHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

AuditCheckDetails::AuditCheckDetails(JsonView jsonValue) : 
    m_checkRunStatus(AuditCheckRunStatus::NOT_SET),
    m_checkRunStatusHasBeenSet(false),
    m_checkCompliant(false),
    m_checkCompliantHasBeenSet(false),
    m_totalResourcesCount(0),
    m_totalResourcesCountHasBeenSet(false),
    m_nonCompliantResourcesCount(0),
    m_nonCompliantResourcesCountHasBeenSet(false),
    m_suppressedNonCompliantResourcesCount(0),
    m_suppressedNonCompliantResourcesCountHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

AuditCheckDetails& AuditCheckDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("checkRunStatus"))
  {
    m_checkRunStatus = AuditCheckRunStatusMapper::GetAuditCheckRunStatusForName(jsonValue.GetString("checkRunStatus"));

    m_checkRunStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("checkCompliant"))
  {
    m_checkCompliant = jsonValue.GetBool("checkCompliant");

    m_checkCompliantHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalResourcesCount"))
  {
    m_totalResourcesCount = jsonValue.GetInt64("totalResourcesCount");

    m_totalResourcesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nonCompliantResourcesCount"))
  {
    m_nonCompliantResourcesCount = jsonValue.GetInt64("nonCompliantResourcesCount");

    m_nonCompliantResourcesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suppressedNonCompliantResourcesCount"))
  {
    m_suppressedNonCompliantResourcesCount = jsonValue.GetInt64("suppressedNonCompliantResourcesCount");

    m_suppressedNonCompliantResourcesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditCheckDetails::Jsonize() const
{
  JsonValue payload;

  if(m_checkRunStatusHasBeenSet)
  {
   payload.WithString("checkRunStatus", AuditCheckRunStatusMapper::GetNameForAuditCheckRunStatus(m_checkRunStatus));
  }

  if(m_checkCompliantHasBeenSet)
  {
   payload.WithBool("checkCompliant", m_checkCompliant);

  }

  if(m_totalResourcesCountHasBeenSet)
  {
   payload.WithInt64("totalResourcesCount", m_totalResourcesCount);

  }

  if(m_nonCompliantResourcesCountHasBeenSet)
  {
   payload.WithInt64("nonCompliantResourcesCount", m_nonCompliantResourcesCount);

  }

  if(m_suppressedNonCompliantResourcesCountHasBeenSet)
  {
   payload.WithInt64("suppressedNonCompliantResourcesCount", m_suppressedNonCompliantResourcesCount);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
