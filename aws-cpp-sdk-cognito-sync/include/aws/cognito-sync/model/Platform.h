/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoSync
{
namespace Model
{
  enum class Platform
  {
    NOT_SET,
    APNS,
    APNS_SANDBOX,
    GCM,
    ADM
  };

namespace PlatformMapper
{
AWS_COGNITOSYNC_API Platform GetPlatformForName(const Aws::String& name);

AWS_COGNITOSYNC_API Aws::String GetNameForPlatform(Platform value);
} // namespace PlatformMapper
} // namespace Model
} // namespace CognitoSync
} // namespace Aws
