/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ResourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

ResourceConfig::ResourceConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceConfig& ResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("instanceCount");
    m_instanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("instanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("volumeSizeInGB"))
  {
    m_volumeSizeInGB = jsonValue.GetInteger("volumeSizeInGB");
    m_volumeSizeInGBHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("instanceCount", m_instanceCount);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", InstanceTypeMapper::GetNameForInstanceType(m_instanceType));
  }

  if(m_volumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("volumeSizeInGB", m_volumeSizeInGB);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
