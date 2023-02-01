/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class Architecture
  {
    NOT_SET,
    X86_64,
    ARM64
  };

namespace ArchitectureMapper
{
AWS_INSPECTOR2_API Architecture GetArchitectureForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForArchitecture(Architecture value);
} // namespace ArchitectureMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
