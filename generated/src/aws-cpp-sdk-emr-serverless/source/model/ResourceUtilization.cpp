/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/ResourceUtilization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

ResourceUtilization::ResourceUtilization() : 
    m_vCPUHour(0.0),
    m_vCPUHourHasBeenSet(false),
    m_memoryGBHour(0.0),
    m_memoryGBHourHasBeenSet(false),
    m_storageGBHour(0.0),
    m_storageGBHourHasBeenSet(false)
{
}

ResourceUtilization::ResourceUtilization(JsonView jsonValue) : 
    m_vCPUHour(0.0),
    m_vCPUHourHasBeenSet(false),
    m_memoryGBHour(0.0),
    m_memoryGBHourHasBeenSet(false),
    m_storageGBHour(0.0),
    m_storageGBHourHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceUtilization& ResourceUtilization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vCPUHour"))
  {
    m_vCPUHour = jsonValue.GetDouble("vCPUHour");

    m_vCPUHourHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memoryGBHour"))
  {
    m_memoryGBHour = jsonValue.GetDouble("memoryGBHour");

    m_memoryGBHourHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageGBHour"))
  {
    m_storageGBHour = jsonValue.GetDouble("storageGBHour");

    m_storageGBHourHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceUtilization::Jsonize() const
{
  JsonValue payload;

  if(m_vCPUHourHasBeenSet)
  {
   payload.WithDouble("vCPUHour", m_vCPUHour);

  }

  if(m_memoryGBHourHasBeenSet)
  {
   payload.WithDouble("memoryGBHour", m_memoryGBHour);

  }

  if(m_storageGBHourHasBeenSet)
  {
   payload.WithDouble("storageGBHour", m_storageGBHour);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
