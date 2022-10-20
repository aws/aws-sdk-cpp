/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/LicenseUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

LicenseUsage::LicenseUsage() : 
    m_entitlementUsagesHasBeenSet(false)
{
}

LicenseUsage::LicenseUsage(JsonView jsonValue) : 
    m_entitlementUsagesHasBeenSet(false)
{
  *this = jsonValue;
}

LicenseUsage& LicenseUsage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntitlementUsages"))
  {
    Aws::Utils::Array<JsonView> entitlementUsagesJsonList = jsonValue.GetArray("EntitlementUsages");
    for(unsigned entitlementUsagesIndex = 0; entitlementUsagesIndex < entitlementUsagesJsonList.GetLength(); ++entitlementUsagesIndex)
    {
      m_entitlementUsages.push_back(entitlementUsagesJsonList[entitlementUsagesIndex].AsObject());
    }
    m_entitlementUsagesHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseUsage::Jsonize() const
{
  JsonValue payload;

  if(m_entitlementUsagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entitlementUsagesJsonList(m_entitlementUsages.size());
   for(unsigned entitlementUsagesIndex = 0; entitlementUsagesIndex < entitlementUsagesJsonList.GetLength(); ++entitlementUsagesIndex)
   {
     entitlementUsagesJsonList[entitlementUsagesIndex].AsObject(m_entitlementUsages[entitlementUsagesIndex].Jsonize());
   }
   payload.WithArray("EntitlementUsages", std::move(entitlementUsagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
