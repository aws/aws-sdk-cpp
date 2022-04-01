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
  enum class DvbSubDestinationShadowColor
  {
    NOT_SET,
    BLACK,
    NONE,
    WHITE
  };

namespace DvbSubDestinationShadowColorMapper
{
AWS_MEDIALIVE_API DvbSubDestinationShadowColor GetDvbSubDestinationShadowColorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForDvbSubDestinationShadowColor(DvbSubDestinationShadowColor value);
} // namespace DvbSubDestinationShadowColorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
