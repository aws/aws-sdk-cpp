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
  enum class Scte35InputMode
  {
    NOT_SET,
    FIXED,
    FOLLOW_ACTIVE
  };

namespace Scte35InputModeMapper
{
AWS_MEDIALIVE_API Scte35InputMode GetScte35InputModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte35InputMode(Scte35InputMode value);
} // namespace Scte35InputModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
