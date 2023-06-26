/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ServiceSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

ServiceSpecification::ServiceSpecification() : 
    m_eC2SpecificationHasBeenSet(false)
{
}

ServiceSpecification::ServiceSpecification(JsonView jsonValue) : 
    m_eC2SpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceSpecification& ServiceSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EC2Specification"))
  {
    m_eC2Specification = jsonValue.GetObject("EC2Specification");

    m_eC2SpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_eC2SpecificationHasBeenSet)
  {
   payload.WithObject("EC2Specification", m_eC2Specification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
