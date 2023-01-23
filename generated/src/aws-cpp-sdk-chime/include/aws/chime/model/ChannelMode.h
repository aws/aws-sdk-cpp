/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class ChannelMode
  {
    NOT_SET,
    UNRESTRICTED,
    RESTRICTED
  };

namespace ChannelModeMapper
{
AWS_CHIME_API ChannelMode GetChannelModeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForChannelMode(ChannelMode value);
} // namespace ChannelModeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
