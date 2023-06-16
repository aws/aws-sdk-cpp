/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/Ec2RecommendationsExportPreferences.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

Ec2RecommendationsExportPreferences::Ec2RecommendationsExportPreferences() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_cpuPerformanceMetricBasisHasBeenSet(false),
    m_ramPerformanceMetricBasisHasBeenSet(false),
    m_tenancy(Tenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_excludedInstanceTypesHasBeenSet(false),
    m_preferredRegionHasBeenSet(false),
    m_reservedInstanceOptionsHasBeenSet(false)
{
}

Ec2RecommendationsExportPreferences::Ec2RecommendationsExportPreferences(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_cpuPerformanceMetricBasisHasBeenSet(false),
    m_ramPerformanceMetricBasisHasBeenSet(false),
    m_tenancy(Tenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_excludedInstanceTypesHasBeenSet(false),
    m_preferredRegionHasBeenSet(false),
    m_reservedInstanceOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

Ec2RecommendationsExportPreferences& Ec2RecommendationsExportPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpuPerformanceMetricBasis"))
  {
    m_cpuPerformanceMetricBasis = jsonValue.GetObject("cpuPerformanceMetricBasis");

    m_cpuPerformanceMetricBasisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ramPerformanceMetricBasis"))
  {
    m_ramPerformanceMetricBasis = jsonValue.GetObject("ramPerformanceMetricBasis");

    m_ramPerformanceMetricBasisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tenancy"))
  {
    m_tenancy = TenancyMapper::GetTenancyForName(jsonValue.GetString("tenancy"));

    m_tenancyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("excludedInstanceTypes"))
  {
    Aws::Utils::Array<JsonView> excludedInstanceTypesJsonList = jsonValue.GetArray("excludedInstanceTypes");
    for(unsigned excludedInstanceTypesIndex = 0; excludedInstanceTypesIndex < excludedInstanceTypesJsonList.GetLength(); ++excludedInstanceTypesIndex)
    {
      m_excludedInstanceTypes.push_back(excludedInstanceTypesJsonList[excludedInstanceTypesIndex].AsString());
    }
    m_excludedInstanceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("preferredRegion"))
  {
    m_preferredRegion = jsonValue.GetString("preferredRegion");

    m_preferredRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reservedInstanceOptions"))
  {
    m_reservedInstanceOptions = jsonValue.GetObject("reservedInstanceOptions");

    m_reservedInstanceOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Ec2RecommendationsExportPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_cpuPerformanceMetricBasisHasBeenSet)
  {
   payload.WithObject("cpuPerformanceMetricBasis", m_cpuPerformanceMetricBasis.Jsonize());

  }

  if(m_ramPerformanceMetricBasisHasBeenSet)
  {
   payload.WithObject("ramPerformanceMetricBasis", m_ramPerformanceMetricBasis.Jsonize());

  }

  if(m_tenancyHasBeenSet)
  {
   payload.WithString("tenancy", TenancyMapper::GetNameForTenancy(m_tenancy));
  }

  if(m_excludedInstanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludedInstanceTypesJsonList(m_excludedInstanceTypes.size());
   for(unsigned excludedInstanceTypesIndex = 0; excludedInstanceTypesIndex < excludedInstanceTypesJsonList.GetLength(); ++excludedInstanceTypesIndex)
   {
     excludedInstanceTypesJsonList[excludedInstanceTypesIndex].AsString(m_excludedInstanceTypes[excludedInstanceTypesIndex]);
   }
   payload.WithArray("excludedInstanceTypes", std::move(excludedInstanceTypesJsonList));

  }

  if(m_preferredRegionHasBeenSet)
  {
   payload.WithString("preferredRegion", m_preferredRegion);

  }

  if(m_reservedInstanceOptionsHasBeenSet)
  {
   payload.WithObject("reservedInstanceOptions", m_reservedInstanceOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
