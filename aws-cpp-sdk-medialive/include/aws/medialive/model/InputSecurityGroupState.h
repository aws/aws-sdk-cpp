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
  enum class InputSecurityGroupState
  {
    NOT_SET,
    IDLE,
    IN_USE,
    UPDATING,
    DELETED
  };

namespace InputSecurityGroupStateMapper
{
AWS_MEDIALIVE_API InputSecurityGroupState GetInputSecurityGroupStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputSecurityGroupState(InputSecurityGroupState value);
} // namespace InputSecurityGroupStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
