/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class BootMode
  {
    NOT_SET,
    LEGACY_BIOS,
    UEFI
  };

namespace BootModeMapper
{
AWS_MGN_API BootMode GetBootModeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForBootMode(BootMode value);
} // namespace BootModeMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
