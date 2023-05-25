/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/EnhancedImageScanFinding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

EnhancedImageScanFinding::EnhancedImageScanFinding() : 
    m_awsAccountIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_findingArnHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_packageVulnerabilityDetailsHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_scoreDetailsHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

EnhancedImageScanFinding::EnhancedImageScanFinding(JsonView jsonValue) : 
    m_awsAccountIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_findingArnHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_packageVulnerabilityDetailsHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_scoreDetailsHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

EnhancedImageScanFinding& EnhancedImageScanFinding::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("lastObservedAt"))
  {
    m_lastObservedAt = jsonValue.GetDouble("lastObservedAt");

    m_lastObservedAtHasBeenSet = true;
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

  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetDouble("score");

    m_scoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scoreDetails"))
  {
    m_scoreDetails = jsonValue.GetObject("scoreDetails");

    m_scoreDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severity"))
  {
    m_severity = jsonValue.GetString("severity");

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue EnhancedImageScanFinding::Jsonize() const
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

  if(m_findingArnHasBeenSet)
  {
   payload.WithString("findingArn", m_findingArn);

  }

  if(m_firstObservedAtHasBeenSet)
  {
   payload.WithDouble("firstObservedAt", m_firstObservedAt.SecondsWithMSPrecision());
  }

  if(m_lastObservedAtHasBeenSet)
  {
   payload.WithDouble("lastObservedAt", m_lastObservedAt.SecondsWithMSPrecision());
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

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("score", m_score);

  }

  if(m_scoreDetailsHasBeenSet)
  {
   payload.WithObject("scoreDetails", m_scoreDetails.Jsonize());

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", m_severity);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
