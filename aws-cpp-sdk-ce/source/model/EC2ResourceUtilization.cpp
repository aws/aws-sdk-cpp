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

#include <aws/ce/model/EC2ResourceUtilization.h>
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

EC2ResourceUtilization::EC2ResourceUtilization() : 
    m_maxCpuUtilizationPercentageHasBeenSet(false),
    m_maxMemoryUtilizationPercentageHasBeenSet(false),
    m_maxStorageUtilizationPercentageHasBeenSet(false)
{
}

EC2ResourceUtilization::EC2ResourceUtilization(JsonView jsonValue) : 
    m_maxCpuUtilizationPercentageHasBeenSet(false),
    m_maxMemoryUtilizationPercentageHasBeenSet(false),
    m_maxStorageUtilizationPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

EC2ResourceUtilization& EC2ResourceUtilization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxCpuUtilizationPercentage"))
  {
    m_maxCpuUtilizationPercentage = jsonValue.GetString("MaxCpuUtilizationPercentage");

    m_maxCpuUtilizationPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxMemoryUtilizationPercentage"))
  {
    m_maxMemoryUtilizationPercentage = jsonValue.GetString("MaxMemoryUtilizationPercentage");

    m_maxMemoryUtilizationPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxStorageUtilizationPercentage"))
  {
    m_maxStorageUtilizationPercentage = jsonValue.GetString("MaxStorageUtilizationPercentage");

    m_maxStorageUtilizationPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue EC2ResourceUtilization::Jsonize() const
{
  JsonValue payload;

  if(m_maxCpuUtilizationPercentageHasBeenSet)
  {
   payload.WithString("MaxCpuUtilizationPercentage", m_maxCpuUtilizationPercentage);

  }

  if(m_maxMemoryUtilizationPercentageHasBeenSet)
  {
   payload.WithString("MaxMemoryUtilizationPercentage", m_maxMemoryUtilizationPercentage);

  }

  if(m_maxStorageUtilizationPercentageHasBeenSet)
  {
   payload.WithString("MaxStorageUtilizationPercentage", m_maxStorageUtilizationPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
