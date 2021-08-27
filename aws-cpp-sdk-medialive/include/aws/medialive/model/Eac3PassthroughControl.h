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
  enum class Eac3PassthroughControl
  {
    NOT_SET,
    NO_PASSTHROUGH,
    WHEN_POSSIBLE
  };

namespace Eac3PassthroughControlMapper
{
AWS_MEDIALIVE_API Eac3PassthroughControl GetEac3PassthroughControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3PassthroughControl(Eac3PassthroughControl value);
} // namespace Eac3PassthroughControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
