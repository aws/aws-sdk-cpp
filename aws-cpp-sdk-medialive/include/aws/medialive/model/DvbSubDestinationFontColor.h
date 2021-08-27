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
  enum class DvbSubDestinationFontColor
  {
    NOT_SET,
    BLACK,
    BLUE,
    GREEN,
    RED,
    WHITE,
    YELLOW
  };

namespace DvbSubDestinationFontColorMapper
{
AWS_MEDIALIVE_API DvbSubDestinationFontColor GetDvbSubDestinationFontColorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForDvbSubDestinationFontColor(DvbSubDestinationFontColor value);
} // namespace DvbSubDestinationFontColorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
