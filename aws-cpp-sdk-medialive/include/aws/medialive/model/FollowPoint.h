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
  enum class FollowPoint
  {
    NOT_SET,
    END,
    START
  };

namespace FollowPointMapper
{
AWS_MEDIALIVE_API FollowPoint GetFollowPointForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForFollowPoint(FollowPoint value);
} // namespace FollowPointMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
