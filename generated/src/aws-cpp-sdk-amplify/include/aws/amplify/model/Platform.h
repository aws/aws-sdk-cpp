/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Amplify
{
namespace Model
{
  enum class Platform
  {
    NOT_SET,
    WEB,
    WEB_DYNAMIC,
    WEB_COMPUTE
  };

namespace PlatformMapper
{
AWS_AMPLIFY_API Platform GetPlatformForName(const Aws::String& name);

AWS_AMPLIFY_API Aws::String GetNameForPlatform(Platform value);
} // namespace PlatformMapper
} // namespace Model
} // namespace Amplify
} // namespace Aws
