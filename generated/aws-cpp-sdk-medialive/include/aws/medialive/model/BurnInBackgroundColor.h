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
  enum class BurnInBackgroundColor
  {
    NOT_SET,
    BLACK,
    NONE,
    WHITE
  };

namespace BurnInBackgroundColorMapper
{
AWS_MEDIALIVE_API BurnInBackgroundColor GetBurnInBackgroundColorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForBurnInBackgroundColor(BurnInBackgroundColor value);
} // namespace BurnInBackgroundColorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
