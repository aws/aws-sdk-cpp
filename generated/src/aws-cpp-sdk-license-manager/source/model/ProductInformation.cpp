/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ProductInformation.h>
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

ProductInformation::ProductInformation() : 
    m_resourceTypeHasBeenSet(false),
    m_productInformationFilterListHasBeenSet(false)
{
}

ProductInformation::ProductInformation(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_productInformationFilterListHasBeenSet(false)
{
  *this = jsonValue;
}

ProductInformation& ProductInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductInformationFilterList"))
  {
    Aws::Utils::Array<JsonView> productInformationFilterListJsonList = jsonValue.GetArray("ProductInformationFilterList");
    for(unsigned productInformationFilterListIndex = 0; productInformationFilterListIndex < productInformationFilterListJsonList.GetLength(); ++productInformationFilterListIndex)
    {
      m_productInformationFilterList.push_back(productInformationFilterListJsonList[productInformationFilterListIndex].AsObject());
    }
    m_productInformationFilterListHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductInformation::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_productInformationFilterListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productInformationFilterListJsonList(m_productInformationFilterList.size());
   for(unsigned productInformationFilterListIndex = 0; productInformationFilterListIndex < productInformationFilterListJsonList.GetLength(); ++productInformationFilterListIndex)
   {
     productInformationFilterListJsonList[productInformationFilterListIndex].AsObject(m_productInformationFilterList[productInformationFilterListIndex].Jsonize());
   }
   payload.WithArray("ProductInformationFilterList", std::move(productInformationFilterListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
