/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_spotSpecificationHasBeenSet(false)
{
}

InstanceFleetProvisioningSpecifications::InstanceFleetProvisioningSpecifications(const JsonValue& jsonValue) : 
    m_spotSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceFleetProvisioningSpecifications& InstanceFleetProvisioningSpecifications::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SpotSpecification"))
  {
    m_spotSpecification = jsonValue.GetObject("SpotSpecification");

    m_spotSpecificationHasBeenSet = true;
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

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws