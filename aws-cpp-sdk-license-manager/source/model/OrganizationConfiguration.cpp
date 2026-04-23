/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/license-manager/model/OrganizationConfiguration.h>
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

OrganizationConfiguration::OrganizationConfiguration() : 
    m_enableIntegration(false),
    m_enableIntegrationHasBeenSet(false)
{
}

OrganizationConfiguration::OrganizationConfiguration(JsonView jsonValue) : 
    m_enableIntegration(false),
    m_enableIntegrationHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationConfiguration& OrganizationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableIntegration"))
  {
    m_enableIntegration = jsonValue.GetBool("EnableIntegration");

    m_enableIntegrationHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enableIntegrationHasBeenSet)
  {
   payload.WithBool("EnableIntegration", m_enableIntegration);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
