/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class H265FlickerAq
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H265FlickerAqMapper
{
AWS_MEDIALIVE_API H265FlickerAq GetH265FlickerAqForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265FlickerAq(H265FlickerAq value);
} // namespace H265FlickerAqMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
