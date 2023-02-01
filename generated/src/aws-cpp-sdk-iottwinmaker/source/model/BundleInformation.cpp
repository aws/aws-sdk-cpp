/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/BundleInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

BundleInformation::BundleInformation() : 
    m_bundleNamesHasBeenSet(false),
    m_pricingTier(PricingTier::NOT_SET),
    m_pricingTierHasBeenSet(false)
{
}

BundleInformation::BundleInformation(JsonView jsonValue) : 
    m_bundleNamesHasBeenSet(false),
    m_pricingTier(PricingTier::NOT_SET),
    m_pricingTierHasBeenSet(false)
{
  *this = jsonValue;
}

BundleInformation& BundleInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bundleNames"))
  {
    Aws::Utils::Array<JsonView> bundleNamesJsonList = jsonValue.GetArray("bundleNames");
    for(unsigned bundleNamesIndex = 0; bundleNamesIndex < bundleNamesJsonList.GetLength(); ++bundleNamesIndex)
    {
      m_bundleNames.push_back(bundleNamesJsonList[bundleNamesIndex].AsString());
    }
    m_bundleNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pricingTier"))
  {
    m_pricingTier = PricingTierMapper::GetPricingTierForName(jsonValue.GetString("pricingTier"));

    m_pricingTierHasBeenSet = true;
  }

  return *this;
}

JsonValue BundleInformation::Jsonize() const
{
  JsonValue payload;

  if(m_bundleNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bundleNamesJsonList(m_bundleNames.size());
   for(unsigned bundleNamesIndex = 0; bundleNamesIndex < bundleNamesJsonList.GetLength(); ++bundleNamesIndex)
   {
     bundleNamesJsonList[bundleNamesIndex].AsString(m_bundleNames[bundleNamesIndex]);
   }
   payload.WithArray("bundleNames", std::move(bundleNamesJsonList));

  }

  if(m_pricingTierHasBeenSet)
  {
   payload.WithString("pricingTier", PricingTierMapper::GetNameForPricingTier(m_pricingTier));
  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
