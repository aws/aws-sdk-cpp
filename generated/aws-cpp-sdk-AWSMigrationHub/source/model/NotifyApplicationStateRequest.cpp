/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/NotifyApplicationStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

NotifyApplicationStateRequest::NotifyApplicationStateRequest() : 
    m_applicationIdHasBeenSet(false),
    m_status(ApplicationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String NotifyApplicationStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ApplicationStatusMapper::GetNameForApplicationStatus(m_status));
  }

  if(m_updateDateTimeHasBeenSet)
  {
   payload.WithDouble("UpdateDateTime", m_updateDateTime.SecondsWithMSPrecision());
  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection NotifyApplicationStateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMigrationHub.NotifyApplicationState"));
  return headers;

}




