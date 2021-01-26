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
  enum class InputDenoiseFilter
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace InputDenoiseFilterMapper
{
AWS_MEDIALIVE_API InputDenoiseFilter GetInputDenoiseFilterForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputDenoiseFilter(InputDenoiseFilter value);
} // namespace InputDenoiseFilterMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
