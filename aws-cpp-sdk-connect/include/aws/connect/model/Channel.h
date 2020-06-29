/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class Channel
  {
    NOT_SET,
    VOICE,
    CHAT
  };

namespace ChannelMapper
{
AWS_CONNECT_API Channel GetChannelForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForChannel(Channel value);
} // namespace ChannelMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
