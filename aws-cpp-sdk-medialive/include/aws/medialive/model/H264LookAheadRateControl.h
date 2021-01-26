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
  enum class H264LookAheadRateControl
  {
    NOT_SET,
    HIGH,
    LOW,
    MEDIUM
  };

namespace H264LookAheadRateControlMapper
{
AWS_MEDIALIVE_API H264LookAheadRateControl GetH264LookAheadRateControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264LookAheadRateControl(H264LookAheadRateControl value);
} // namespace H264LookAheadRateControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
