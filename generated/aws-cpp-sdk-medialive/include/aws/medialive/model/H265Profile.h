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
  enum class H265Profile
  {
    NOT_SET,
    MAIN,
    MAIN_10BIT
  };

namespace H265ProfileMapper
{
AWS_MEDIALIVE_API H265Profile GetH265ProfileForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265Profile(H265Profile value);
} // namespace H265ProfileMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
