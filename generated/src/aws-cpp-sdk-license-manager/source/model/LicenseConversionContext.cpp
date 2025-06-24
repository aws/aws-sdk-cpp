/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/LicenseConversionContext.h>
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

LicenseConversionContext::LicenseConversionContext(JsonView jsonValue)
{
  *this = jsonValue;
}

LicenseConversionContext& LicenseConversionContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UsageOperation"))
  {
    m_usageOperation = jsonValue.GetString("UsageOperation");
    m_usageOperationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProductCodes"))
  {
    Aws::Utils::Array<JsonView> productCodesJsonList = jsonValue.GetArray("ProductCodes");
    for(unsigned productCodesIndex = 0; productCodesIndex < productCodesJsonList.GetLength(); ++productCodesIndex)
    {
      m_productCodes.push_back(productCodesJsonList[productCodesIndex].AsObject());
    }
    m_productCodesHasBeenSet = true;
  }
  return *this;
}

JsonValue LicenseConversionContext::Jsonize() const
{
  JsonValue payload;

  if(m_usageOperationHasBeenSet)
  {
   payload.WithString("UsageOperation", m_usageOperation);

  }

  if(m_productCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productCodesJsonList(m_productCodes.size());
   for(unsigned productCodesIndex = 0; productCodesIndex < productCodesJsonList.GetLength(); ++productCodesIndex)
   {
     productCodesJsonList[productCodesIndex].AsObject(m_productCodes[productCodesIndex].Jsonize());
   }
   payload.WithArray("ProductCodes", std::move(productCodesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
