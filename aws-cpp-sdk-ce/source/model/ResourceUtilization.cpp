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

#include <aws/ce/model/ResourceUtilization.h>
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

ResourceUtilization::ResourceUtilization() : 
    m_eC2ResourceUtilizationHasBeenSet(false)
{
}

ResourceUtilization::ResourceUtilization(JsonView jsonValue) : 
    m_eC2ResourceUtilizationHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceUtilization& ResourceUtilization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EC2ResourceUtilization"))
  {
    m_eC2ResourceUtilization = jsonValue.GetObject("EC2ResourceUtilization");

    m_eC2ResourceUtilizationHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceUtilization::Jsonize() const
{
  JsonValue payload;

  if(m_eC2ResourceUtilizationHasBeenSet)
  {
   payload.WithObject("EC2ResourceUtilization", m_eC2ResourceUtilization.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
