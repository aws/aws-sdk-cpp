/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/EvidenceFinderEnablement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

EvidenceFinderEnablement::EvidenceFinderEnablement() : 
    m_eventDataStoreArnHasBeenSet(false),
    m_enablementStatus(EvidenceFinderEnablementStatus::NOT_SET),
    m_enablementStatusHasBeenSet(false),
    m_backfillStatus(EvidenceFinderBackfillStatus::NOT_SET),
    m_backfillStatusHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

EvidenceFinderEnablement::EvidenceFinderEnablement(JsonView jsonValue) : 
    m_eventDataStoreArnHasBeenSet(false),
    m_enablementStatus(EvidenceFinderEnablementStatus::NOT_SET),
    m_enablementStatusHasBeenSet(false),
    m_backfillStatus(EvidenceFinderBackfillStatus::NOT_SET),
    m_backfillStatusHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

EvidenceFinderEnablement& EvidenceFinderEnablement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventDataStoreArn"))
  {
    m_eventDataStoreArn = jsonValue.GetString("eventDataStoreArn");

    m_eventDataStoreArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enablementStatus"))
  {
    m_enablementStatus = EvidenceFinderEnablementStatusMapper::GetEvidenceFinderEnablementStatusForName(jsonValue.GetString("enablementStatus"));

    m_enablementStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("backfillStatus"))
  {
    m_backfillStatus = EvidenceFinderBackfillStatusMapper::GetEvidenceFinderBackfillStatusForName(jsonValue.GetString("backfillStatus"));

    m_backfillStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue EvidenceFinderEnablement::Jsonize() const
{
  JsonValue payload;

  if(m_eventDataStoreArnHasBeenSet)
  {
   payload.WithString("eventDataStoreArn", m_eventDataStoreArn);

  }

  if(m_enablementStatusHasBeenSet)
  {
   payload.WithString("enablementStatus", EvidenceFinderEnablementStatusMapper::GetNameForEvidenceFinderEnablementStatus(m_enablementStatus));
  }

  if(m_backfillStatusHasBeenSet)
  {
   payload.WithString("backfillStatus", EvidenceFinderBackfillStatusMapper::GetNameForEvidenceFinderBackfillStatus(m_backfillStatus));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
