/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceFleetProvisioningSpecifications.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

InstanceFleetProvisioningSpecifications::InstanceFleetProvisioningSpecifications() : 
    m_spotSpecificationHasBeenSet(false),
    m_onDemandSpecificationHasBeenSet(false)
{
}

InstanceFleetProvisioningSpecifications::InstanceFleetProvisioningSpecifications(JsonView jsonValue) : 
    m_spotSpecificationHasBeenSet(false),
    m_onDemandSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceFleetProvisioningSpecifications& InstanceFleetProvisioningSpecifications::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SpotSpecification"))
  {
    m_spotSpecification = jsonValue.GetObject("SpotSpecification");

    m_spotSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnDemandSpecification"))
  {
    m_onDemandSpecification = jsonValue.GetObject("OnDemandSpecification");

    m_onDemandSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceFleetProvisioningSpecifications::Jsonize() const
{
  JsonValue payload;

  if(m_spotSpecificationHasBeenSet)
  {
   payload.WithObject("SpotSpecification", m_spotSpecification.Jsonize());

  }

  if(m_onDemandSpecificationHasBeenSet)
  {
   payload.WithObject("OnDemandSpecification", m_onDemandSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
