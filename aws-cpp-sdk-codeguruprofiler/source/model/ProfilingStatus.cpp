/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codeguruprofiler/model/ProfilingStatus.h>
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

ProfilingStatus::ProfilingStatus() : 
    m_latestAgentOrchestratedAtHasBeenSet(false),
    m_latestAgentProfileReportedAtHasBeenSet(false),
    m_latestAggregatedProfileHasBeenSet(false)
{
}

ProfilingStatus::ProfilingStatus(JsonView jsonValue) : 
    m_latestAgentOrchestratedAtHasBeenSet(false),
    m_latestAgentProfileReportedAtHasBeenSet(false),
    m_latestAggregatedProfileHasBeenSet(false)
{
  *this = jsonValue;
}

ProfilingStatus& ProfilingStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("latestAgentOrchestratedAt"))
  {
    m_latestAgentOrchestratedAt = jsonValue.GetString("latestAgentOrchestratedAt");

    m_latestAgentOrchestratedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestAgentProfileReportedAt"))
  {
    m_latestAgentProfileReportedAt = jsonValue.GetString("latestAgentProfileReportedAt");

    m_latestAgentProfileReportedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestAggregatedProfile"))
  {
    m_latestAggregatedProfile = jsonValue.GetObject("latestAggregatedProfile");

    m_latestAggregatedProfileHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfilingStatus::Jsonize() const
{
  JsonValue payload;

  if(m_latestAgentOrchestratedAtHasBeenSet)
  {
   payload.WithString("latestAgentOrchestratedAt", m_latestAgentOrchestratedAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_latestAgentProfileReportedAtHasBeenSet)
  {
   payload.WithString("latestAgentProfileReportedAt", m_latestAgentProfileReportedAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_latestAggregatedProfileHasBeenSet)
  {
   payload.WithObject("latestAggregatedProfile", m_latestAggregatedProfile.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
