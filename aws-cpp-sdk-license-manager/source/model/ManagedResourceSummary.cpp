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
