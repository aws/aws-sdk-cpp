/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
