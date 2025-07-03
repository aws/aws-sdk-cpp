/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/UploadJobItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

UploadJobItem::UploadJobItem(JsonView jsonValue)
{
  *this = jsonValue;
}

UploadJobItem& UploadJobItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = UploadJobStatusMapper::GetUploadJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = StatusReasonMapper::GetStatusReasonForName(jsonValue.GetString("StatusReason"));
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletedAt"))
  {
    m_completedAt = jsonValue.GetDouble("CompletedAt");
    m_completedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataExpiry"))
  {
    m_dataExpiry = jsonValue.GetInteger("DataExpiry");
    m_dataExpiryHasBeenSet = true;
  }
  return *this;
}

JsonValue UploadJobItem::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", UploadJobStatusMapper::GetNameForUploadJobStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", StatusReasonMapper::GetNameForStatusReason(m_statusReason));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_completedAtHasBeenSet)
  {
   payload.WithDouble("CompletedAt", m_completedAt.SecondsWithMSPrecision());
  }

  if(m_dataExpiryHasBeenSet)
  {
   payload.WithInteger("DataExpiry", m_dataExpiry);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
