/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/JobDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

JobDetails::JobDetails() : 
    m_isDefinedInJob(IsDefinedInJob::NOT_SET),
    m_isDefinedInJobHasBeenSet(false),
    m_isMonitoredByJob(IsMonitoredByJob::NOT_SET),
    m_isMonitoredByJobHasBeenSet(false),
    m_lastJobIdHasBeenSet(false),
    m_lastJobRunTimeHasBeenSet(false)
{
}

JobDetails::JobDetails(JsonView jsonValue) : 
    m_isDefinedInJob(IsDefinedInJob::NOT_SET),
    m_isDefinedInJobHasBeenSet(false),
    m_isMonitoredByJob(IsMonitoredByJob::NOT_SET),
    m_isMonitoredByJobHasBeenSet(false),
    m_lastJobIdHasBeenSet(false),
    m_lastJobRunTimeHasBeenSet(false)
{
  *this = jsonValue;
}

JobDetails& JobDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isDefinedInJob"))
  {
    m_isDefinedInJob = IsDefinedInJobMapper::GetIsDefinedInJobForName(jsonValue.GetString("isDefinedInJob"));

    m_isDefinedInJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isMonitoredByJob"))
  {
    m_isMonitoredByJob = IsMonitoredByJobMapper::GetIsMonitoredByJobForName(jsonValue.GetString("isMonitoredByJob"));

    m_isMonitoredByJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastJobId"))
  {
    m_lastJobId = jsonValue.GetString("lastJobId");

    m_lastJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastJobRunTime"))
  {
    m_lastJobRunTime = jsonValue.GetString("lastJobRunTime");

    m_lastJobRunTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue JobDetails::Jsonize() const
{
  JsonValue payload;

  if(m_isDefinedInJobHasBeenSet)
  {
   payload.WithString("isDefinedInJob", IsDefinedInJobMapper::GetNameForIsDefinedInJob(m_isDefinedInJob));
  }

  if(m_isMonitoredByJobHasBeenSet)
  {
   payload.WithString("isMonitoredByJob", IsMonitoredByJobMapper::GetNameForIsMonitoredByJob(m_isMonitoredByJob));
  }

  if(m_lastJobIdHasBeenSet)
  {
   payload.WithString("lastJobId", m_lastJobId);

  }

  if(m_lastJobRunTimeHasBeenSet)
  {
   payload.WithString("lastJobRunTime", m_lastJobRunTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
