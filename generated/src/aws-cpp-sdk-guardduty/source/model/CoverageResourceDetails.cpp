/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageResourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

CoverageResourceDetails::CoverageResourceDetails() : 
    m_eksClusterDetailsHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_ecsClusterDetailsHasBeenSet(false),
    m_ec2InstanceDetailsHasBeenSet(false)
{
}

CoverageResourceDetails::CoverageResourceDetails(JsonView jsonValue) : 
    m_eksClusterDetailsHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_ecsClusterDetailsHasBeenSet(false),
    m_ec2InstanceDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageResourceDetails& CoverageResourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eksClusterDetails"))
  {
    m_eksClusterDetails = jsonValue.GetObject("eksClusterDetails");

    m_eksClusterDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecsClusterDetails"))
  {
    m_ecsClusterDetails = jsonValue.GetObject("ecsClusterDetails");

    m_ecsClusterDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceDetails"))
  {
    m_ec2InstanceDetails = jsonValue.GetObject("ec2InstanceDetails");

    m_ec2InstanceDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageResourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_eksClusterDetailsHasBeenSet)
  {
   payload.WithObject("eksClusterDetails", m_eksClusterDetails.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_ecsClusterDetailsHasBeenSet)
  {
   payload.WithObject("ecsClusterDetails", m_ecsClusterDetails.Jsonize());

  }

  if(m_ec2InstanceDetailsHasBeenSet)
  {
   payload.WithObject("ec2InstanceDetails", m_ec2InstanceDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
