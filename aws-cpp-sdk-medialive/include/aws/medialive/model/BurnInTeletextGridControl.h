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
  enum class BurnInTeletextGridControl
  {
    NOT_SET,
    FIXED,
    SCALED
  };

namespace BurnInTeletextGridControlMapper
{
AWS_MEDIALIVE_API BurnInTeletextGridControl GetBurnInTeletextGridControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForBurnInTeletextGridControl(BurnInTeletextGridControl value);
} // namespace BurnInTeletextGridControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
