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
  enum class CacheConfigType
  {
    NOT_SET,
    AMPLIFY_MANAGED,
    AMPLIFY_MANAGED_NO_COOKIES
  };

namespace CacheConfigTypeMapper
{
AWS_AMPLIFY_API CacheConfigType GetCacheConfigTypeForName(const Aws::String& name);

AWS_AMPLIFY_API Aws::String GetNameForCacheConfigType(CacheConfigType value);
} // namespace CacheConfigTypeMapper
} // namespace Model
} // namespace Amplify
} // namespace Aws
