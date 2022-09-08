/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   payload.WithString("latestAgentOrchestratedAt", m_latestAgentOrchestratedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_latestAgentProfileReportedAtHasBeenSet)
  {
   payload.WithString("latestAgentProfileReportedAt", m_latestAgentProfileReportedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
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
