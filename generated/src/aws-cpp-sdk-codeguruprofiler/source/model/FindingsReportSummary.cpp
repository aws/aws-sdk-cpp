/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/FindingsReportSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

FindingsReportSummary::FindingsReportSummary() : 
    m_idHasBeenSet(false),
    m_profileEndTimeHasBeenSet(false),
    m_profileStartTimeHasBeenSet(false),
    m_profilingGroupNameHasBeenSet(false),
    m_totalNumberOfFindings(0),
    m_totalNumberOfFindingsHasBeenSet(false)
{
}

FindingsReportSummary::FindingsReportSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_profileEndTimeHasBeenSet(false),
    m_profileStartTimeHasBeenSet(false),
    m_profilingGroupNameHasBeenSet(false),
    m_totalNumberOfFindings(0),
    m_totalNumberOfFindingsHasBeenSet(false)
{
  *this = jsonValue;
}

FindingsReportSummary& FindingsReportSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profileEndTime"))
  {
    m_profileEndTime = jsonValue.GetString("profileEndTime");

    m_profileEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profileStartTime"))
  {
    m_profileStartTime = jsonValue.GetString("profileStartTime");

    m_profileStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profilingGroupName"))
  {
    m_profilingGroupName = jsonValue.GetString("profilingGroupName");

    m_profilingGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalNumberOfFindings"))
  {
    m_totalNumberOfFindings = jsonValue.GetInteger("totalNumberOfFindings");

    m_totalNumberOfFindingsHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingsReportSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_profileEndTimeHasBeenSet)
  {
   payload.WithString("profileEndTime", m_profileEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_profileStartTimeHasBeenSet)
  {
   payload.WithString("profileStartTime", m_profileStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_profilingGroupNameHasBeenSet)
  {
   payload.WithString("profilingGroupName", m_profilingGroupName);

  }

  if(m_totalNumberOfFindingsHasBeenSet)
  {
   payload.WithInteger("totalNumberOfFindings", m_totalNumberOfFindings);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
