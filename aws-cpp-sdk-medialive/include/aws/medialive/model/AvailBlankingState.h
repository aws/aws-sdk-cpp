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
  enum class AvailBlankingState
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace AvailBlankingStateMapper
{
AWS_MEDIALIVE_API AvailBlankingState GetAvailBlankingStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAvailBlankingState(AvailBlankingState value);
} // namespace AvailBlankingStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
