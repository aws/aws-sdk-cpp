/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class SupportedHardwareType
  {
    NOT_SET,
    RACK,
    SERVER
  };

namespace SupportedHardwareTypeMapper
{
AWS_OUTPOSTS_API SupportedHardwareType GetSupportedHardwareTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForSupportedHardwareType(SupportedHardwareType value);
} // namespace SupportedHardwareTypeMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
