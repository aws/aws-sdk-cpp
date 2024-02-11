/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{
  enum class TargetedMessages
  {
    NOT_SET,
    ALL,
    NONE
  };

namespace TargetedMessagesMapper
{
AWS_CHIMESDKIDENTITY_API TargetedMessages GetTargetedMessagesForName(const Aws::String& name);

AWS_CHIMESDKIDENTITY_API Aws::String GetNameForTargetedMessages(TargetedMessages value);
} // namespace TargetedMessagesMapper
} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
