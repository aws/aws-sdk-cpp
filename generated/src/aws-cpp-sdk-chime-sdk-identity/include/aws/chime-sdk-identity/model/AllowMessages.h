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
  enum class AllowMessages
  {
    NOT_SET,
    ALL,
    NONE
  };

namespace AllowMessagesMapper
{
AWS_CHIMESDKIDENTITY_API AllowMessages GetAllowMessagesForName(const Aws::String& name);

AWS_CHIMESDKIDENTITY_API Aws::String GetNameForAllowMessages(AllowMessages value);
} // namespace AllowMessagesMapper
} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
