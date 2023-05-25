/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ReportContext.h>
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

ReportContext::ReportContext() : 
    m_licenseConfigurationArnsHasBeenSet(false)
{
}

ReportContext::ReportContext(JsonView jsonValue) : 
    m_licenseConfigurationArnsHasBeenSet(false)
{
  *this = jsonValue;
}

ReportContext& ReportContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("licenseConfigurationArns"))
  {
    Aws::Utils::Array<JsonView> licenseConfigurationArnsJsonList = jsonValue.GetArray("licenseConfigurationArns");
    for(unsigned licenseConfigurationArnsIndex = 0; licenseConfigurationArnsIndex < licenseConfigurationArnsJsonList.GetLength(); ++licenseConfigurationArnsIndex)
    {
      m_licenseConfigurationArns.push_back(licenseConfigurationArnsJsonList[licenseConfigurationArnsIndex].AsString());
    }
    m_licenseConfigurationArnsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportContext::Jsonize() const
{
  JsonValue payload;

  if(m_licenseConfigurationArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseConfigurationArnsJsonList(m_licenseConfigurationArns.size());
   for(unsigned licenseConfigurationArnsIndex = 0; licenseConfigurationArnsIndex < licenseConfigurationArnsJsonList.GetLength(); ++licenseConfigurationArnsIndex)
   {
     licenseConfigurationArnsJsonList[licenseConfigurationArnsIndex].AsString(m_licenseConfigurationArns[licenseConfigurationArnsIndex]);
   }
   payload.WithArray("licenseConfigurationArns", std::move(licenseConfigurationArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
