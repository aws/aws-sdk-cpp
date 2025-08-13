/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/InstanceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

InstanceConfig::InstanceConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceConfig& InstanceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("instanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("volumeSizeInGb"))
  {
    m_volumeSizeInGb = jsonValue.GetInteger("volumeSizeInGb");
    m_volumeSizeInGbHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("instanceCount");
    m_instanceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", InstanceTypeMapper::GetNameForInstanceType(m_instanceType));
  }

  if(m_volumeSizeInGbHasBeenSet)
  {
   payload.WithInteger("volumeSizeInGb", m_volumeSizeInGb);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("instanceCount", m_instanceCount);

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
