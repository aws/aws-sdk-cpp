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
  enum class VideoDescriptionRespondToAfd
  {
    NOT_SET,
    NONE,
    PASSTHROUGH,
    RESPOND
  };

namespace VideoDescriptionRespondToAfdMapper
{
AWS_MEDIALIVE_API VideoDescriptionRespondToAfd GetVideoDescriptionRespondToAfdForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForVideoDescriptionRespondToAfd(VideoDescriptionRespondToAfd value);
} // namespace VideoDescriptionRespondToAfdMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
