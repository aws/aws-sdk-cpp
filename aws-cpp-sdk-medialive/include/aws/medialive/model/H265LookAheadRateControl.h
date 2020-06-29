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
  enum class H265LookAheadRateControl
  {
    NOT_SET,
    HIGH,
    LOW,
    MEDIUM
  };

namespace H265LookAheadRateControlMapper
{
AWS_MEDIALIVE_API H265LookAheadRateControl GetH265LookAheadRateControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265LookAheadRateControl(H265LookAheadRateControl value);
} // namespace H265LookAheadRateControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
