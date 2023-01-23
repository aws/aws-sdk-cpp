/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ManagedResourceSummary.h>
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

ManagedResourceSummary::ManagedResourceSummary() : 
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_associationCount(0),
    m_associationCountHasBeenSet(false)
{
}

ManagedResourceSummary::ManagedResourceSummary(JsonView jsonValue) : 
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_associationCount(0),
    m_associationCountHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedResourceSummary& ManagedResourceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationCount"))
  {
    m_associationCount = jsonValue.GetInt64("AssociationCount");

    m_associationCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedResourceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_associationCountHasBeenSet)
  {
   payload.WithInt64("AssociationCount", m_associationCount);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
