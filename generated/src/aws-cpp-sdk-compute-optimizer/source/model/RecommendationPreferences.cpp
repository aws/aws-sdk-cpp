/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RecommendationPreferences.h>
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

RecommendationPreferences::RecommendationPreferences() : 
    m_cpuVendorArchitecturesHasBeenSet(false)
{
}

RecommendationPreferences::RecommendationPreferences(JsonView jsonValue) : 
    m_cpuVendorArchitecturesHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationPreferences& RecommendationPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cpuVendorArchitectures"))
  {
    Aws::Utils::Array<JsonView> cpuVendorArchitecturesJsonList = jsonValue.GetArray("cpuVendorArchitectures");
    for(unsigned cpuVendorArchitecturesIndex = 0; cpuVendorArchitecturesIndex < cpuVendorArchitecturesJsonList.GetLength(); ++cpuVendorArchitecturesIndex)
    {
      m_cpuVendorArchitectures.push_back(CpuVendorArchitectureMapper::GetCpuVendorArchitectureForName(cpuVendorArchitecturesJsonList[cpuVendorArchitecturesIndex].AsString()));
    }
    m_cpuVendorArchitecturesHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_cpuVendorArchitecturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cpuVendorArchitecturesJsonList(m_cpuVendorArchitectures.size());
   for(unsigned cpuVendorArchitecturesIndex = 0; cpuVendorArchitecturesIndex < cpuVendorArchitecturesJsonList.GetLength(); ++cpuVendorArchitecturesIndex)
   {
     cpuVendorArchitecturesJsonList[cpuVendorArchitecturesIndex].AsString(CpuVendorArchitectureMapper::GetNameForCpuVendorArchitecture(m_cpuVendorArchitectures[cpuVendorArchitecturesIndex]));
   }
   payload.WithArray("cpuVendorArchitectures", std::move(cpuVendorArchitecturesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
