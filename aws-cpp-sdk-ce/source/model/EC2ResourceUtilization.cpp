/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
