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
  enum class InputState
  {
    NOT_SET,
    CREATING,
    DETACHED,
    ATTACHED,
    DELETING,
    DELETED
  };

namespace InputStateMapper
{
AWS_MEDIALIVE_API InputState GetInputStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputState(InputState value);
} // namespace InputStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
