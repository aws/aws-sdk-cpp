﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/MaximumAllowedResources.h>
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

MaximumAllowedResources::MaximumAllowedResources(JsonView jsonValue)
{
  *this = jsonValue;
}

MaximumAllowedResources& MaximumAllowedResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cpu"))
  {
    m_cpu = jsonValue.GetString("cpu");
    m_cpuHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetString("memory");
    m_memoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("disk"))
  {
    m_disk = jsonValue.GetString("disk");
    m_diskHasBeenSet = true;
  }
  return *this;
}

JsonValue MaximumAllowedResources::Jsonize() const
{
  JsonValue payload;

  if(m_cpuHasBeenSet)
  {
   payload.WithString("cpu", m_cpu);

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithString("memory", m_memory);

  }

  if(m_diskHasBeenSet)
  {
   payload.WithString("disk", m_disk);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
