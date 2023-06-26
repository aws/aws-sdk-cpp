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
  enum class StandardMessages
  {
    NOT_SET,
    AUTO,
    ALL,
    MENTIONS,
    NONE
  };

namespace StandardMessagesMapper
{
AWS_CHIMESDKIDENTITY_API StandardMessages GetStandardMessagesForName(const Aws::String& name);

AWS_CHIMESDKIDENTITY_API Aws::String GetNameForStandardMessages(StandardMessages value);
} // namespace StandardMessagesMapper
} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
