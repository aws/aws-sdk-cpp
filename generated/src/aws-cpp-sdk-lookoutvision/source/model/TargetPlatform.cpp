﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/TargetPlatform.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

TargetPlatform::TargetPlatform(JsonView jsonValue)
{
  *this = jsonValue;
}

TargetPlatform& TargetPlatform::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Os"))
  {
    m_os = TargetPlatformOsMapper::GetTargetPlatformOsForName(jsonValue.GetString("Os"));
    m_osHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arch"))
  {
    m_arch = TargetPlatformArchMapper::GetTargetPlatformArchForName(jsonValue.GetString("Arch"));
    m_archHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Accelerator"))
  {
    m_accelerator = TargetPlatformAcceleratorMapper::GetTargetPlatformAcceleratorForName(jsonValue.GetString("Accelerator"));
    m_acceleratorHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetPlatform::Jsonize() const
{
  JsonValue payload;

  if(m_osHasBeenSet)
  {
   payload.WithString("Os", TargetPlatformOsMapper::GetNameForTargetPlatformOs(m_os));
  }

  if(m_archHasBeenSet)
  {
   payload.WithString("Arch", TargetPlatformArchMapper::GetNameForTargetPlatformArch(m_arch));
  }

  if(m_acceleratorHasBeenSet)
  {
   payload.WithString("Accelerator", TargetPlatformAcceleratorMapper::GetNameForTargetPlatformAccelerator(m_accelerator));
  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
