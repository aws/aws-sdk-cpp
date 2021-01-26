/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class UlimitName
  {
    NOT_SET,
    core,
    cpu,
    data,
    fsize,
    locks,
    memlock,
    msgqueue,
    nice,
    nofile,
    nproc,
    rss,
    rtprio,
    rttime,
    sigpending,
    stack
  };

namespace UlimitNameMapper
{
AWS_ECS_API UlimitName GetUlimitNameForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForUlimitName(UlimitName value);
} // namespace UlimitNameMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
