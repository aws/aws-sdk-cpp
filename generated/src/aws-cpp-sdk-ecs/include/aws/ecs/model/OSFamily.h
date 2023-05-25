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
  enum class OSFamily
  {
    NOT_SET,
    WINDOWS_SERVER_2019_FULL,
    WINDOWS_SERVER_2019_CORE,
    WINDOWS_SERVER_2016_FULL,
    WINDOWS_SERVER_2004_CORE,
    WINDOWS_SERVER_2022_CORE,
    WINDOWS_SERVER_2022_FULL,
    WINDOWS_SERVER_20H2_CORE,
    LINUX
  };

namespace OSFamilyMapper
{
AWS_ECS_API OSFamily GetOSFamilyForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForOSFamily(OSFamily value);
} // namespace OSFamilyMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
