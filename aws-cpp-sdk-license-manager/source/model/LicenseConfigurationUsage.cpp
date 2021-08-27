/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/LicenseConfigurationUsage.h>
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

LicenseConfigurationUsage::LicenseConfigurationUsage() : 
    m_resourceArnHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceStatusHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_associationTimeHasBeenSet(false),
    m_consumedLicenses(0),
    m_consumedLicensesHasBeenSet(false)
{
}

LicenseConfigurationUsage::LicenseConfigurationUsage(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceStatusHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_associationTimeHasBeenSet(false),
    m_consumedLicenses(0),
    m_consumedLicensesHasBeenSet(false)
{
  *this = jsonValue;
}

LicenseConfigurationUsage& LicenseConfigurationUsage::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ResourceStatus"))
  {
    m_resourceStatus = jsonValue.GetString("ResourceStatus");

    m_resourceStatusHasBeenSet = true;
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

  if(jsonValue.ValueExists("ConsumedLicenses"))
  {
    m_consumedLicenses = jsonValue.GetInt64("ConsumedLicenses");

    m_consumedLicensesHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseConfigurationUsage::Jsonize() const
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

  if(m_resourceStatusHasBeenSet)
  {
   payload.WithString("ResourceStatus", m_resourceStatus);

  }

  if(m_resourceOwnerIdHasBeenSet)
  {
   payload.WithString("ResourceOwnerId", m_resourceOwnerId);

  }

  if(m_associationTimeHasBeenSet)
  {
   payload.WithDouble("AssociationTime", m_associationTime.SecondsWithMSPrecision());
  }

  if(m_consumedLicensesHasBeenSet)
  {
   payload.WithInt64("ConsumedLicenses", m_consumedLicenses);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
