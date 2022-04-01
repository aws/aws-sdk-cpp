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
  enum class ChannelMembershipType
  {
    NOT_SET,
    DEFAULT,
    HIDDEN
  };

namespace ChannelMembershipTypeMapper
{
AWS_CHIME_API ChannelMembershipType GetChannelMembershipTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForChannelMembershipType(ChannelMembershipType value);
} // namespace ChannelMembershipTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
