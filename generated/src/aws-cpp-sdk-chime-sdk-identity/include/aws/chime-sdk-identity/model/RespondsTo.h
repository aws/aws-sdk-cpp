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
  enum class RespondsTo
  {
    NOT_SET,
    STANDARD_MESSAGES
  };

namespace RespondsToMapper
{
AWS_CHIMESDKIDENTITY_API RespondsTo GetRespondsToForName(const Aws::String& name);

AWS_CHIMESDKIDENTITY_API Aws::String GetNameForRespondsTo(RespondsTo value);
} // namespace RespondsToMapper
} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
