/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class ChannelType
  {
    NOT_SET,
    PUSH,
    GCM,
    APNS,
    APNS_SANDBOX,
    APNS_VOIP,
    APNS_VOIP_SANDBOX,
    ADM,
    SMS,
    VOICE,
    EMAIL,
    BAIDU,
    CUSTOM
  };

namespace ChannelTypeMapper
{
AWS_PINPOINT_API ChannelType GetChannelTypeForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForChannelType(ChannelType value);
} // namespace ChannelTypeMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
