/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{
  enum class AuthResources
  {
    NOT_SET,
    USER_POOL_ONLY,
    IDENTITY_POOL_AND_USER_POOL
  };

namespace AuthResourcesMapper
{
AWS_AMPLIFYBACKEND_API AuthResources GetAuthResourcesForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForAuthResources(AuthResources value);
} // namespace AuthResourcesMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
