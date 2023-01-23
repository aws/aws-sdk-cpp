/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/LicenseSpecification.h>
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

LicenseSpecification::LicenseSpecification() : 
    m_licenseConfigurationArnHasBeenSet(false),
    m_amiAssociationScopeHasBeenSet(false)
{
}

LicenseSpecification::LicenseSpecification(JsonView jsonValue) : 
    m_licenseConfigurationArnHasBeenSet(false),
    m_amiAssociationScopeHasBeenSet(false)
{
  *this = jsonValue;
}

LicenseSpecification& LicenseSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LicenseConfigurationArn"))
  {
    m_licenseConfigurationArn = jsonValue.GetString("LicenseConfigurationArn");

    m_licenseConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmiAssociationScope"))
  {
    m_amiAssociationScope = jsonValue.GetString("AmiAssociationScope");

    m_amiAssociationScopeHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_licenseConfigurationArnHasBeenSet)
  {
   payload.WithString("LicenseConfigurationArn", m_licenseConfigurationArn);

  }

  if(m_amiAssociationScopeHasBeenSet)
  {
   payload.WithString("AmiAssociationScope", m_amiAssociationScope);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
