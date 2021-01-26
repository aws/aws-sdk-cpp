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
  enum class Scte35AposNoRegionalBlackoutBehavior
  {
    NOT_SET,
    FOLLOW,
    IGNORE
  };

namespace Scte35AposNoRegionalBlackoutBehaviorMapper
{
AWS_MEDIALIVE_API Scte35AposNoRegionalBlackoutBehavior GetScte35AposNoRegionalBlackoutBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte35AposNoRegionalBlackoutBehavior(Scte35AposNoRegionalBlackoutBehavior value);
} // namespace Scte35AposNoRegionalBlackoutBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
