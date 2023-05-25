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

LicenseConversionContext::LicenseConversionContext() : 
    m_usageOperationHasBeenSet(false)
{
}

LicenseConversionContext::LicenseConversionContext(JsonView jsonValue) : 
    m_usageOperationHasBeenSet(false)
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

  return *this;
}

JsonValue LicenseConversionContext::Jsonize() const
{
  JsonValue payload;

  if(m_usageOperationHasBeenSet)
  {
   payload.WithString("UsageOperation", m_usageOperation);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
