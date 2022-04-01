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
  enum class HlsIncompleteSegmentBehavior
  {
    NOT_SET,
    AUTO,
    SUPPRESS
  };

namespace HlsIncompleteSegmentBehaviorMapper
{
AWS_MEDIALIVE_API HlsIncompleteSegmentBehavior GetHlsIncompleteSegmentBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsIncompleteSegmentBehavior(HlsIncompleteSegmentBehavior value);
} // namespace HlsIncompleteSegmentBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
