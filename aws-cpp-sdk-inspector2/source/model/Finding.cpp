/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Finding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

Finding::Finding() : 
    m_awsAccountIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_exploitAvailable(ExploitAvailable::NOT_SET),
    m_exploitAvailableHasBeenSet(false),
    m_exploitabilityDetailsHasBeenSet(false),
    m_findingArnHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_fixAvailable(FixAvailable::NOT_SET),
    m_fixAvailableHasBeenSet(false),
    m_inspectorScore(0.0),
    m_inspectorScoreHasBeenSet(false),
    m_inspectorScoreDetailsHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_networkReachabilityDetailsHasBeenSet(false),
    m_packageVulnerabilityDetailsHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(FindingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_type(FindingType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

Finding::Finding(JsonView jsonValue) : 
    m_awsAccountIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_exploitAvailable(ExploitAvailable::NOT_SET),
    m_exploitAvailableHasBeenSet(false),
    m_exploitabilityDetailsHasBeenSet(false),
    m_findingArnHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_fixAvailable(FixAvailable::NOT_SET),
    m_fixAvailableHasBeenSet(false),
    m_inspectorScore(0.0),
    m_inspectorScoreHasBeenSet(false),
    m_inspectorScoreDetailsHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_networkReachabilityDetailsHasBeenSet(false),
    m_packageVulnerabilityDetailsHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(FindingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_type(FindingType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

Finding& Finding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exploitAvailable"))
  {
    m_exploitAvailable = ExploitAvailableMapper::GetExploitAvailableForName(jsonValue.GetString("exploitAvailable"));

    m_exploitAvailableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exploitabilityDetails"))
  {
    m_exploitabilityDetails = jsonValue.GetObject("exploitabilityDetails");

    m_exploitabilityDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingArn"))
  {
    m_findingArn = jsonValue.GetString("findingArn");

    m_findingArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstObservedAt"))
  {
    m_firstObservedAt = jsonValue.GetDouble("firstObservedAt");

    m_firstObservedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fixAvailable"))
  {
    m_fixAvailable = FixAvailableMapper::GetFixAvailableForName(jsonValue.GetString("fixAvailable"));

    m_fixAvailableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inspectorScore"))
  {
    m_inspectorScore = jsonValue.GetDouble("inspectorScore");

    m_inspectorScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inspectorScoreDetails"))
  {
    m_inspectorScoreDetails = jsonValue.GetObject("inspectorScoreDetails");

    m_inspectorScoreDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastObservedAt"))
  {
    m_lastObservedAt = jsonValue.GetDouble("lastObservedAt");

    m_lastObservedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkReachabilityDetails"))
  {
    m_networkReachabilityDetails = jsonValue.GetObject("networkReachabilityDetails");

    m_networkReachabilityDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packageVulnerabilityDetails"))
  {
    m_packageVulnerabilityDetails = jsonValue.GetObject("packageVulnerabilityDetails");

    m_packageVulnerabilityDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remediation"))
  {
    m_remediation = jsonValue.GetObject("remediation");

    m_remediationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severity"))
  {
    m_severity = SeverityMapper::GetSeverityForName(jsonValue.GetString("severity"));

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = FindingStatusMapper::GetFindingStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = FindingTypeMapper::GetFindingTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Finding::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_exploitAvailableHasBeenSet)
  {
   payload.WithString("exploitAvailable", ExploitAvailableMapper::GetNameForExploitAvailable(m_exploitAvailable));
  }

  if(m_exploitabilityDetailsHasBeenSet)
  {
   payload.WithObject("exploitabilityDetails", m_exploitabilityDetails.Jsonize());

  }

  if(m_findingArnHasBeenSet)
  {
   payload.WithString("findingArn", m_findingArn);

  }

  if(m_firstObservedAtHasBeenSet)
  {
   payload.WithDouble("firstObservedAt", m_firstObservedAt.SecondsWithMSPrecision());
  }

  if(m_fixAvailableHasBeenSet)
  {
   payload.WithString("fixAvailable", FixAvailableMapper::GetNameForFixAvailable(m_fixAvailable));
  }

  if(m_inspectorScoreHasBeenSet)
  {
   payload.WithDouble("inspectorScore", m_inspectorScore);

  }

  if(m_inspectorScoreDetailsHasBeenSet)
  {
   payload.WithObject("inspectorScoreDetails", m_inspectorScoreDetails.Jsonize());

  }

  if(m_lastObservedAtHasBeenSet)
  {
   payload.WithDouble("lastObservedAt", m_lastObservedAt.SecondsWithMSPrecision());
  }

  if(m_networkReachabilityDetailsHasBeenSet)
  {
   payload.WithObject("networkReachabilityDetails", m_networkReachabilityDetails.Jsonize());

  }

  if(m_packageVulnerabilityDetailsHasBeenSet)
  {
   payload.WithObject("packageVulnerabilityDetails", m_packageVulnerabilityDetails.Jsonize());

  }

  if(m_remediationHasBeenSet)
  {
   payload.WithObject("remediation", m_remediation.Jsonize());

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("resources", std::move(resourcesJsonList));

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", SeverityMapper::GetNameForSeverity(m_severity));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FindingStatusMapper::GetNameForFindingStatus(m_status));
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FindingTypeMapper::GetNameForFindingType(m_type));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
