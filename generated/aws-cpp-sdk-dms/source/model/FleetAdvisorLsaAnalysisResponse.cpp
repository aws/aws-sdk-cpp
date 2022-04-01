/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/FleetAdvisorLsaAnalysisResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

FleetAdvisorLsaAnalysisResponse::FleetAdvisorLsaAnalysisResponse() : 
    m_lsaAnalysisIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

FleetAdvisorLsaAnalysisResponse::FleetAdvisorLsaAnalysisResponse(JsonView jsonValue) : 
    m_lsaAnalysisIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

FleetAdvisorLsaAnalysisResponse& FleetAdvisorLsaAnalysisResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LsaAnalysisId"))
  {
    m_lsaAnalysisId = jsonValue.GetString("LsaAnalysisId");

    m_lsaAnalysisIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue FleetAdvisorLsaAnalysisResponse::Jsonize() const
{
  JsonValue payload;

  if(m_lsaAnalysisIdHasBeenSet)
  {
   payload.WithString("LsaAnalysisId", m_lsaAnalysisId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
