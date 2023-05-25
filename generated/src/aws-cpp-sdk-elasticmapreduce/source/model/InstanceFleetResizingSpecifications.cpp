/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceFleetResizingSpecifications.h>
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

InstanceFleetResizingSpecifications::InstanceFleetResizingSpecifications() : 
    m_spotResizeSpecificationHasBeenSet(false),
    m_onDemandResizeSpecificationHasBeenSet(false)
{
}

InstanceFleetResizingSpecifications::InstanceFleetResizingSpecifications(JsonView jsonValue) : 
    m_spotResizeSpecificationHasBeenSet(false),
    m_onDemandResizeSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceFleetResizingSpecifications& InstanceFleetResizingSpecifications::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SpotResizeSpecification"))
  {
    m_spotResizeSpecification = jsonValue.GetObject("SpotResizeSpecification");

    m_spotResizeSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnDemandResizeSpecification"))
  {
    m_onDemandResizeSpecification = jsonValue.GetObject("OnDemandResizeSpecification");

    m_onDemandResizeSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceFleetResizingSpecifications::Jsonize() const
{
  JsonValue payload;

  if(m_spotResizeSpecificationHasBeenSet)
  {
   payload.WithObject("SpotResizeSpecification", m_spotResizeSpecification.Jsonize());

  }

  if(m_onDemandResizeSpecificationHasBeenSet)
  {
   payload.WithObject("OnDemandResizeSpecification", m_onDemandResizeSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
