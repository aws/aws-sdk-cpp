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
  enum class H264FlickerAq
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H264FlickerAqMapper
{
AWS_MEDIALIVE_API H264FlickerAq GetH264FlickerAqForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264FlickerAq(H264FlickerAq value);
} // namespace H264FlickerAqMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
