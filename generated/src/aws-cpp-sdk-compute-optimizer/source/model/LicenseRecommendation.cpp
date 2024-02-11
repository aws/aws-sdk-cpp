/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LicenseRecommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

LicenseRecommendation::LicenseRecommendation() : 
    m_resourceArnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_currentLicenseConfigurationHasBeenSet(false),
    m_lookbackPeriodInDays(0.0),
    m_lookbackPeriodInDaysHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false),
    m_finding(LicenseFinding::NOT_SET),
    m_findingHasBeenSet(false),
    m_findingReasonCodesHasBeenSet(false),
    m_licenseRecommendationOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

LicenseRecommendation::LicenseRecommendation(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_currentLicenseConfigurationHasBeenSet(false),
    m_lookbackPeriodInDays(0.0),
    m_lookbackPeriodInDaysHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false),
    m_finding(LicenseFinding::NOT_SET),
    m_findingHasBeenSet(false),
    m_findingReasonCodesHasBeenSet(false),
    m_licenseRecommendationOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

LicenseRecommendation& LicenseRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentLicenseConfiguration"))
  {
    m_currentLicenseConfiguration = jsonValue.GetObject("currentLicenseConfiguration");

    m_currentLicenseConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lookbackPeriodInDays"))
  {
    m_lookbackPeriodInDays = jsonValue.GetDouble("lookbackPeriodInDays");

    m_lookbackPeriodInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRefreshTimestamp"))
  {
    m_lastRefreshTimestamp = jsonValue.GetDouble("lastRefreshTimestamp");

    m_lastRefreshTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("finding"))
  {
    m_finding = LicenseFindingMapper::GetLicenseFindingForName(jsonValue.GetString("finding"));

    m_findingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingReasonCodes"))
  {
    Aws::Utils::Array<JsonView> findingReasonCodesJsonList = jsonValue.GetArray("findingReasonCodes");
    for(unsigned findingReasonCodesIndex = 0; findingReasonCodesIndex < findingReasonCodesJsonList.GetLength(); ++findingReasonCodesIndex)
    {
      m_findingReasonCodes.push_back(LicenseFindingReasonCodeMapper::GetLicenseFindingReasonCodeForName(findingReasonCodesJsonList[findingReasonCodesIndex].AsString()));
    }
    m_findingReasonCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseRecommendationOptions"))
  {
    Aws::Utils::Array<JsonView> licenseRecommendationOptionsJsonList = jsonValue.GetArray("licenseRecommendationOptions");
    for(unsigned licenseRecommendationOptionsIndex = 0; licenseRecommendationOptionsIndex < licenseRecommendationOptionsJsonList.GetLength(); ++licenseRecommendationOptionsIndex)
    {
      m_licenseRecommendationOptions.push_back(licenseRecommendationOptionsJsonList[licenseRecommendationOptionsIndex].AsObject());
    }
    m_licenseRecommendationOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_currentLicenseConfigurationHasBeenSet)
  {
   payload.WithObject("currentLicenseConfiguration", m_currentLicenseConfiguration.Jsonize());

  }

  if(m_lookbackPeriodInDaysHasBeenSet)
  {
   payload.WithDouble("lookbackPeriodInDays", m_lookbackPeriodInDays);

  }

  if(m_lastRefreshTimestampHasBeenSet)
  {
   payload.WithDouble("lastRefreshTimestamp", m_lastRefreshTimestamp.SecondsWithMSPrecision());
  }

  if(m_findingHasBeenSet)
  {
   payload.WithString("finding", LicenseFindingMapper::GetNameForLicenseFinding(m_finding));
  }

  if(m_findingReasonCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingReasonCodesJsonList(m_findingReasonCodes.size());
   for(unsigned findingReasonCodesIndex = 0; findingReasonCodesIndex < findingReasonCodesJsonList.GetLength(); ++findingReasonCodesIndex)
   {
     findingReasonCodesJsonList[findingReasonCodesIndex].AsString(LicenseFindingReasonCodeMapper::GetNameForLicenseFindingReasonCode(m_findingReasonCodes[findingReasonCodesIndex]));
   }
   payload.WithArray("findingReasonCodes", std::move(findingReasonCodesJsonList));

  }

  if(m_licenseRecommendationOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseRecommendationOptionsJsonList(m_licenseRecommendationOptions.size());
   for(unsigned licenseRecommendationOptionsIndex = 0; licenseRecommendationOptionsIndex < licenseRecommendationOptionsJsonList.GetLength(); ++licenseRecommendationOptionsIndex)
   {
     licenseRecommendationOptionsJsonList[licenseRecommendationOptionsIndex].AsObject(m_licenseRecommendationOptions[licenseRecommendationOptionsIndex].Jsonize());
   }
   payload.WithArray("licenseRecommendationOptions", std::move(licenseRecommendationOptionsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
