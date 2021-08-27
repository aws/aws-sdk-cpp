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
  enum class GlobalConfigurationInputEndAction
  {
    NOT_SET,
    NONE,
    SWITCH_AND_LOOP_INPUTS
  };

namespace GlobalConfigurationInputEndActionMapper
{
AWS_MEDIALIVE_API GlobalConfigurationInputEndAction GetGlobalConfigurationInputEndActionForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForGlobalConfigurationInputEndAction(GlobalConfigurationInputEndAction value);
} // namespace GlobalConfigurationInputEndActionMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
