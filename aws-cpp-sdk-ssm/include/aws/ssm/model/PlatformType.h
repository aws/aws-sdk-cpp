/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class PlatformType
  {
    NOT_SET,
    Windows,
    Linux,
    MacOS
  };

namespace PlatformTypeMapper
{
AWS_SSM_API PlatformType GetPlatformTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForPlatformType(PlatformType value);
} // namespace PlatformTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
