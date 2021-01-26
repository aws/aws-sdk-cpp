/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/LicenseConfigurationAssociation.h>
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

LicenseConfigurationAssociation::LicenseConfigurationAssociation() : 
    m_resourceArnHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_associationTimeHasBeenSet(false),
    m_amiAssociationScopeHasBeenSet(false)
{
}

LicenseConfigurationAssociation::LicenseConfigurationAssociation(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_associationTimeHasBeenSet(false),
    m_amiAssociationScopeHasBeenSet(false)
{
  *this = jsonValue;
}

LicenseConfigurationAssociation& LicenseConfigurationAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceOwnerId"))
  {
    m_resourceOwnerId = jsonValue.GetString("ResourceOwnerId");

    m_resourceOwnerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationTime"))
  {
    m_associationTime = jsonValue.GetDouble("AssociationTime");

    m_associationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmiAssociationScope"))
  {
    m_amiAssociationScope = jsonValue.GetString("AmiAssociationScope");

    m_amiAssociationScopeHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseConfigurationAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_resourceOwnerIdHasBeenSet)
  {
   payload.WithString("ResourceOwnerId", m_resourceOwnerId);

  }

  if(m_associationTimeHasBeenSet)
  {
   payload.WithDouble("AssociationTime", m_associationTime.SecondsWithMSPrecision());
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
