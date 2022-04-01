/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{
  enum class InvocationType
  {
    NOT_SET,
    ASYNC
  };

namespace InvocationTypeMapper
{
AWS_CHIMESDKMESSAGING_API InvocationType GetInvocationTypeForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForInvocationType(InvocationType value);
} // namespace InvocationTypeMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
