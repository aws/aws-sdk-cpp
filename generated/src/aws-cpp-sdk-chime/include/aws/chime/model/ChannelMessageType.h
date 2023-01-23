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
  enum class ChannelMessageType
  {
    NOT_SET,
    STANDARD,
    CONTROL
  };

namespace ChannelMessageTypeMapper
{
AWS_CHIME_API ChannelMessageType GetChannelMessageTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForChannelMessageType(ChannelMessageType value);
} // namespace ChannelMessageTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
