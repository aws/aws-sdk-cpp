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
    m_associationTimeHasBeenSet(false)
{
}

LicenseConfigurationAssociation::LicenseConfigurationAssociation(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_associationTimeHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
