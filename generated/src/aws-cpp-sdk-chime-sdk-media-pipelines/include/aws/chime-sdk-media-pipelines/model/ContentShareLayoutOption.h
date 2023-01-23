/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{
  enum class ContentShareLayoutOption
  {
    NOT_SET,
    PresenterOnly,
    Horizontal,
    Vertical
  };

namespace ContentShareLayoutOptionMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API ContentShareLayoutOption GetContentShareLayoutOptionForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForContentShareLayoutOption(ContentShareLayoutOption value);
} // namespace ContentShareLayoutOptionMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
