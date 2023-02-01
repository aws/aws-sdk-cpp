/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/IdentityResolutionJob.h>
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

IdentityResolutionJob::IdentityResolutionJob() : 
    m_domainNameHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_status(IdentityResolutionJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_jobStartTimeHasBeenSet(false),
    m_jobEndTimeHasBeenSet(false),
    m_jobStatsHasBeenSet(false),
    m_exportingLocationHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

IdentityResolutionJob::IdentityResolutionJob(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_status(IdentityResolutionJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_jobStartTimeHasBeenSet(false),
    m_jobEndTimeHasBeenSet(false),
    m_jobStatsHasBeenSet(false),
    m_exportingLocationHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityResolutionJob& IdentityResolutionJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = IdentityResolutionJobStatusMapper::GetIdentityResolutionJobStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobStartTime"))
  {
    m_jobStartTime = jsonValue.GetDouble("JobStartTime");

    m_jobStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobEndTime"))
  {
    m_jobEndTime = jsonValue.GetDouble("JobEndTime");

    m_jobEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobStats"))
  {
    m_jobStats = jsonValue.GetObject("JobStats");

    m_jobStatsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportingLocation"))
  {
    m_exportingLocation = jsonValue.GetObject("ExportingLocation");

    m_exportingLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityResolutionJob::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", IdentityResolutionJobStatusMapper::GetNameForIdentityResolutionJobStatus(m_status));
  }

  if(m_jobStartTimeHasBeenSet)
  {
   payload.WithDouble("JobStartTime", m_jobStartTime.SecondsWithMSPrecision());
  }

  if(m_jobEndTimeHasBeenSet)
  {
   payload.WithDouble("JobEndTime", m_jobEndTime.SecondsWithMSPrecision());
  }

  if(m_jobStatsHasBeenSet)
  {
   payload.WithObject("JobStats", m_jobStats.Jsonize());

  }

  if(m_exportingLocationHasBeenSet)
  {
   payload.WithObject("ExportingLocation", m_exportingLocation.Jsonize());

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
