/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LicenseRecommendationOption.h>
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

LicenseRecommendationOption::LicenseRecommendationOption() : 
    m_rank(0),
    m_rankHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_licenseEdition(LicenseEdition::NOT_SET),
    m_licenseEditionHasBeenSet(false),
    m_licenseModel(LicenseModel::NOT_SET),
    m_licenseModelHasBeenSet(false),
    m_savingsOpportunityHasBeenSet(false)
{
}

LicenseRecommendationOption::LicenseRecommendationOption(JsonView jsonValue) : 
    m_rank(0),
    m_rankHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_licenseEdition(LicenseEdition::NOT_SET),
    m_licenseEditionHasBeenSet(false),
    m_licenseModel(LicenseModel::NOT_SET),
    m_licenseModelHasBeenSet(false),
    m_savingsOpportunityHasBeenSet(false)
{
  *this = jsonValue;
}

LicenseRecommendationOption& LicenseRecommendationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rank"))
  {
    m_rank = jsonValue.GetInteger("rank");

    m_rankHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operatingSystem"))
  {
    m_operatingSystem = jsonValue.GetString("operatingSystem");

    m_operatingSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseEdition"))
  {
    m_licenseEdition = LicenseEditionMapper::GetLicenseEditionForName(jsonValue.GetString("licenseEdition"));

    m_licenseEditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseModel"))
  {
    m_licenseModel = LicenseModelMapper::GetLicenseModelForName(jsonValue.GetString("licenseModel"));

    m_licenseModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("savingsOpportunity"))
  {
    m_savingsOpportunity = jsonValue.GetObject("savingsOpportunity");

    m_savingsOpportunityHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseRecommendationOption::Jsonize() const
{
  JsonValue payload;

  if(m_rankHasBeenSet)
  {
   payload.WithInteger("rank", m_rank);

  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("operatingSystem", m_operatingSystem);

  }

  if(m_licenseEditionHasBeenSet)
  {
   payload.WithString("licenseEdition", LicenseEditionMapper::GetNameForLicenseEdition(m_licenseEdition));
  }

  if(m_licenseModelHasBeenSet)
  {
   payload.WithString("licenseModel", LicenseModelMapper::GetNameForLicenseModel(m_licenseModel));
  }

  if(m_savingsOpportunityHasBeenSet)
  {
   payload.WithObject("savingsOpportunity", m_savingsOpportunity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
