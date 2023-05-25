/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ProductInformationFilter.h>
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

ProductInformationFilter::ProductInformationFilter() : 
    m_productInformationFilterNameHasBeenSet(false),
    m_productInformationFilterValueHasBeenSet(false),
    m_productInformationFilterComparatorHasBeenSet(false)
{
}

ProductInformationFilter::ProductInformationFilter(JsonView jsonValue) : 
    m_productInformationFilterNameHasBeenSet(false),
    m_productInformationFilterValueHasBeenSet(false),
    m_productInformationFilterComparatorHasBeenSet(false)
{
  *this = jsonValue;
}

ProductInformationFilter& ProductInformationFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductInformationFilterName"))
  {
    m_productInformationFilterName = jsonValue.GetString("ProductInformationFilterName");

    m_productInformationFilterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductInformationFilterValue"))
  {
    Aws::Utils::Array<JsonView> productInformationFilterValueJsonList = jsonValue.GetArray("ProductInformationFilterValue");
    for(unsigned productInformationFilterValueIndex = 0; productInformationFilterValueIndex < productInformationFilterValueJsonList.GetLength(); ++productInformationFilterValueIndex)
    {
      m_productInformationFilterValue.push_back(productInformationFilterValueJsonList[productInformationFilterValueIndex].AsString());
    }
    m_productInformationFilterValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductInformationFilterComparator"))
  {
    m_productInformationFilterComparator = jsonValue.GetString("ProductInformationFilterComparator");

    m_productInformationFilterComparatorHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductInformationFilter::Jsonize() const
{
  JsonValue payload;

  if(m_productInformationFilterNameHasBeenSet)
  {
   payload.WithString("ProductInformationFilterName", m_productInformationFilterName);

  }

  if(m_productInformationFilterValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productInformationFilterValueJsonList(m_productInformationFilterValue.size());
   for(unsigned productInformationFilterValueIndex = 0; productInformationFilterValueIndex < productInformationFilterValueJsonList.GetLength(); ++productInformationFilterValueIndex)
   {
     productInformationFilterValueJsonList[productInformationFilterValueIndex].AsString(m_productInformationFilterValue[productInformationFilterValueIndex]);
   }
   payload.WithArray("ProductInformationFilterValue", std::move(productInformationFilterValueJsonList));

  }

  if(m_productInformationFilterComparatorHasBeenSet)
  {
   payload.WithString("ProductInformationFilterComparator", m_productInformationFilterComparator);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
