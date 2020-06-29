/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class AuthorizationType
  {
    NOT_SET,
    AWS_IAM
  };

namespace AuthorizationTypeMapper
{
AWS_APPSYNC_API AuthorizationType GetAuthorizationTypeForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForAuthorizationType(AuthorizationType value);
} // namespace AuthorizationTypeMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
