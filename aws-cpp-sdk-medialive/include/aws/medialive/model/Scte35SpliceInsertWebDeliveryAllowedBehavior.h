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
  enum class Scte35SpliceInsertWebDeliveryAllowedBehavior
  {
    NOT_SET,
    FOLLOW,
    IGNORE
  };

namespace Scte35SpliceInsertWebDeliveryAllowedBehaviorMapper
{
AWS_MEDIALIVE_API Scte35SpliceInsertWebDeliveryAllowedBehavior GetScte35SpliceInsertWebDeliveryAllowedBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte35SpliceInsertWebDeliveryAllowedBehavior(Scte35SpliceInsertWebDeliveryAllowedBehavior value);
} // namespace Scte35SpliceInsertWebDeliveryAllowedBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
