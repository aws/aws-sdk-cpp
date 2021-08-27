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
  enum class H265SceneChangeDetect
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H265SceneChangeDetectMapper
{
AWS_MEDIALIVE_API H265SceneChangeDetect GetH265SceneChangeDetectForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265SceneChangeDetect(H265SceneChangeDetect value);
} // namespace H265SceneChangeDetectMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
