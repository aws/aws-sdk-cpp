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
  enum class FragmentSelectorType
  {
    NOT_SET,
    ProducerTimestamp,
    ServerTimestamp
  };

namespace FragmentSelectorTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API FragmentSelectorType GetFragmentSelectorTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForFragmentSelectorType(FragmentSelectorType value);
} // namespace FragmentSelectorTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
