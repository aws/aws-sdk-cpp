/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IVS
{
namespace Model
{
  enum class ChannelType
  {
    NOT_SET,
    BASIC,
    STANDARD
  };

namespace ChannelTypeMapper
{
AWS_IVS_API ChannelType GetChannelTypeForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForChannelType(ChannelType value);
} // namespace ChannelTypeMapper
} // namespace Model
} // namespace IVS
} // namespace Aws
