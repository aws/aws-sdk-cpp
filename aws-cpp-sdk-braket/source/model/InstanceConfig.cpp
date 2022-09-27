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

InstanceConfig::InstanceConfig() : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_volumeSizeInGb(0),
    m_volumeSizeInGbHasBeenSet(false)
{
}

InstanceConfig::InstanceConfig(JsonView jsonValue) : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_volumeSizeInGb(0),
    m_volumeSizeInGbHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceConfig& InstanceConfig::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("volumeSizeInGb"))
  {
    m_volumeSizeInGb = jsonValue.GetInteger("volumeSizeInGb");

    m_volumeSizeInGbHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceConfig::Jsonize() const
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

  if(m_volumeSizeInGbHasBeenSet)
  {
   payload.WithInteger("volumeSizeInGb", m_volumeSizeInGb);

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
