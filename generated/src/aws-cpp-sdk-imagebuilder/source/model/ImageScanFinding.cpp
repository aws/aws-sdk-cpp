/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImageScanFinding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ImageScanFinding::ImageScanFinding() : 
    m_awsAccountIdHasBeenSet(false),
    m_imageBuildVersionArnHasBeenSet(false),
    m_imagePipelineArnHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_inspectorScore(0.0),
    m_inspectorScoreHasBeenSet(false),
    m_inspectorScoreDetailsHasBeenSet(false),
    m_packageVulnerabilityDetailsHasBeenSet(false),
    m_fixAvailableHasBeenSet(false)
{
}

ImageScanFinding::ImageScanFinding(JsonView jsonValue) : 
    m_awsAccountIdHasBeenSet(false),
    m_imageBuildVersionArnHasBeenSet(false),
    m_imagePipelineArnHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_inspectorScore(0.0),
    m_inspectorScoreHasBeenSet(false),
    m_inspectorScoreDetailsHasBeenSet(false),
    m_packageVulnerabilityDetailsHasBeenSet(false),
    m_fixAvailableHasBeenSet(false)
{
  *this = jsonValue;
}

ImageScanFinding& ImageScanFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageBuildVersionArn"))
  {
    m_imageBuildVersionArn = jsonValue.GetString("imageBuildVersionArn");

    m_imageBuildVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imagePipelineArn"))
  {
    m_imagePipelineArn = jsonValue.GetString("imagePipelineArn");

    m_imagePipelineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remediation"))
  {
    m_remediation = jsonValue.GetObject("remediation");

    m_remediationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severity"))
  {
    m_severity = jsonValue.GetString("severity");

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstObservedAt"))
  {
    m_firstObservedAt = jsonValue.GetDouble("firstObservedAt");

    m_firstObservedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
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

  if(jsonValue.ValueExists("packageVulnerabilityDetails"))
  {
    m_packageVulnerabilityDetails = jsonValue.GetObject("packageVulnerabilityDetails");

    m_packageVulnerabilityDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fixAvailable"))
  {
    m_fixAvailable = jsonValue.GetString("fixAvailable");

    m_fixAvailableHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageScanFinding::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_imageBuildVersionArnHasBeenSet)
  {
   payload.WithString("imageBuildVersionArn", m_imageBuildVersionArn);

  }

  if(m_imagePipelineArnHasBeenSet)
  {
   payload.WithString("imagePipelineArn", m_imagePipelineArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_remediationHasBeenSet)
  {
   payload.WithObject("remediation", m_remediation.Jsonize());

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", m_severity);

  }

  if(m_firstObservedAtHasBeenSet)
  {
   payload.WithDouble("firstObservedAt", m_firstObservedAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_inspectorScoreHasBeenSet)
  {
   payload.WithDouble("inspectorScore", m_inspectorScore);

  }

  if(m_inspectorScoreDetailsHasBeenSet)
  {
   payload.WithObject("inspectorScoreDetails", m_inspectorScoreDetails.Jsonize());

  }

  if(m_packageVulnerabilityDetailsHasBeenSet)
  {
   payload.WithObject("packageVulnerabilityDetails", m_packageVulnerabilityDetails.Jsonize());

  }

  if(m_fixAvailableHasBeenSet)
  {
   payload.WithString("fixAvailable", m_fixAvailable);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
